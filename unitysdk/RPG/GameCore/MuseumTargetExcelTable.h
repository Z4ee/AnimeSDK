#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MuseumTargetRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MUSEUMTARGETEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D2E7DF0)
#define RPG_GAMECORE_MUSEUMTARGETEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D2E7C80)
#define RPG_GAMECORE_MUSEUMTARGETEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D2E7970)
#define RPG_GAMECORE_MUSEUMTARGETEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D2E7C20)
#define RPG_GAMECORE_MUSEUMTARGETEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D2E7F80)
#define RPG_GAMECORE_MUSEUMTARGETEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D2E79F0)
#define RPG_GAMECORE_MUSEUMTARGETEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D2E7FC0)
#define RPG_GAMECORE_MUSEUMTARGETEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2E8190)
#define RPG_GAMECORE_MUSEUMTARGETEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D2E8460)
#define RPG_GAMECORE_MUSEUMTARGETEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E87D0)
#define RPG_GAMECORE_MUSEUMTARGETEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D2E80F0)
#define RPG_GAMECORE_MUSEUMTARGETEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D2E8050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumTargetExcelTable_TypeDefinitionIndex = 14134;

	class MuseumTargetExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumTargetRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumTargetRow*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumTargetExcelTable_TypeDefinitionIndex)->GetStaticField(0x33EE0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumTargetExcelTable_TypeDefinitionIndex)->GetStaticField(0x33EE8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumTargetExcelTable_TypeDefinitionIndex)->GetStaticField(0x33EF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MuseumTargetExcelTable_TypeDefinitionIndex)->GetStaticField(0xDB00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MuseumTargetExcelTable_TypeDefinitionIndex)->GetStaticField(0xDB01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMTARGETEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumTargetRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumTargetRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMTARGETEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMTARGETEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumTargetRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumTargetRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMTARGETEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MuseumTargetRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MuseumTargetRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMTARGETEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMTARGETEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMTARGETEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMTARGETEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMTARGETEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMTARGETEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMTARGETEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MuseumTargetRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumTargetRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMTARGETEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
