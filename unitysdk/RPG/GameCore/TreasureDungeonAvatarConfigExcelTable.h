#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TreasureDungeonAvatarConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19E028E0)
#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19E02770)
#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19E02460)
#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19E02710)
#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19E02A70)
#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19E024E0)
#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19E02AB0)
#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19E02C80)
#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19E03050)
#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E033C0)
#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19E02BE0)
#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19E02B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonAvatarConfigExcelTable_TypeDefinitionIndex = 11932;

	class TreasureDungeonAvatarConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TreasureDungeonAvatarConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7320);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TreasureDungeonAvatarConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7328);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonAvatarConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonAvatarConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(TreasureDungeonAvatarConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7330);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TreasureDungeonAvatarConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3510);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TreasureDungeonAvatarConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3511);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonAvatarConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonAvatarConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonAvatarConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonAvatarConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TreasureDungeonAvatarConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TreasureDungeonAvatarConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TreasureDungeonAvatarConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TreasureDungeonAvatarConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
