#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueArcadeTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19B123F0)
#define RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19B12280)
#define RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19B11F70)
#define RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19B12220)
#define RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19B12580)
#define RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19B11FF0)
#define RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19B125C0)
#define RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B12790)
#define RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19B12B60)
#define RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B12ED0)
#define RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19B126F0)
#define RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19B12650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueArcadeTypeConfigExcelTable_TypeDefinitionIndex = 13944;

	class RogueArcadeTypeConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeTypeConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeTypeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueArcadeTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6D40);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueArcadeTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6D48);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueArcadeTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6D50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueArcadeTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3480);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueArcadeTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3481);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeTypeConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeTypeConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueArcadeTypeConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueArcadeTypeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueArcadeTypeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueArcadeTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
