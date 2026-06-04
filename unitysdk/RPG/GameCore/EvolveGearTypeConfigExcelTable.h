#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EvolveGearTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x196FF500)
#define RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x196FF390)
#define RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x196FF080)
#define RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x196FF330)
#define RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x196FF6E0)
#define RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x196FF100)
#define RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x196FF720)
#define RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x196FF8F0)
#define RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x196FFC20)
#define RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x196FFFD0)
#define RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x196FF850)
#define RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x196FF7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveGearTypeConfigExcelTable_TypeDefinitionIndex = 10973;

	class EvolveGearTypeConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveGearTypeConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveGearTypeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveGearTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x161B0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveGearTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x161B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveGearTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x161C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EvolveGearTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7FA0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EvolveGearTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7FA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveGearTypeConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveGearTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveGearTypeConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveGearTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EvolveGearTypeConfigRow* GetData(::RPG::GameCore::EvolveGearType a1, ::RPG::GameCore::EvolveBuildSeason a2)
		{
			return ((::RPG::GameCore::EvolveGearTypeConfigRow*(*)(::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EvolveGearTypeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EvolveGearTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARTYPECONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
