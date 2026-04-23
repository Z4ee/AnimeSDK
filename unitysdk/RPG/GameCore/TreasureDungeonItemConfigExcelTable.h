#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TreasureDungeonItemConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x190BAB60)
#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x190BA9B0)
#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x190BA680)
#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x190BA950)
#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x190BAD30)
#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x190BA700)
#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x190BAD70)
#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190BAF50)
#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x190BB370)
#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x190BB6D0)
#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x190BAEB0)
#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x190BAE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonItemConfigExcelTable_TypeDefinitionIndex = 11833;

	class TreasureDungeonItemConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TreasureDungeonItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD8E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonItemConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonItemConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(TreasureDungeonItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD8E8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TreasureDungeonItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD8F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TreasureDungeonItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x50B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TreasureDungeonItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x50B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonItemConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonItemConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonItemConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonItemConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TreasureDungeonItemConfigRow* GetData(::System::UInt32 ItemID)
		{
			return ((::RPG::GameCore::TreasureDungeonItemConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE_GETDATA_OFFSET))(ItemID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TreasureDungeonItemConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::TreasureDungeonItemConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
