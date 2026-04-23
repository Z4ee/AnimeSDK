#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MonsterExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONSTEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18B59440)
#define RPG_GAMECORE_MONSTEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18B591F0)
#define RPG_GAMECORE_MONSTEREXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x18B58D70)
#define RPG_GAMECORE_MONSTEREXCELTABLE_GETMONSTERRANK_OFFSET UNITYSDK_OFFSET(0x18B5BC70)
#define RPG_GAMECORE_MONSTEREXCELTABLE_GETMONSTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x18B5BD40)
#define RPG_GAMECORE_MONSTEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18B58F40)
#define RPG_GAMECORE_MONSTEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18B59180)
#define RPG_GAMECORE_MONSTEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18B59750)
#define RPG_GAMECORE_MONSTEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B58FC0)
#define RPG_GAMECORE_MONSTEREXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x18B59990)
#define RPG_GAMECORE_MONSTEREXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x18B58ED0)
#define RPG_GAMECORE_MONSTEREXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x18B594D0)
#define RPG_GAMECORE_MONSTEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18B59790)
#define RPG_GAMECORE_MONSTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B5B7A0)
#define RPG_GAMECORE_MONSTEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18B5B7F0)
#define RPG_GAMECORE_MONSTEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B5BD70)
#define RPG_GAMECORE_MONSTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18B5B740)
#define RPG_GAMECORE_MONSTEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B59930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterExcelTable_TypeDefinitionIndex = 13437;

	class MonsterExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F280);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F288);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F290);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F298);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F2A0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F2A8);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F2B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0xE240);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0xE241);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonsterRow* GetData(::System::UInt32 MonsterID)
		{
			return ((::RPG::GameCore::MonsterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_GETDATA_OFFSET))(MonsterID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::MonsterRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::MonsterExcelTable_IndexKey key, ::RPG::GameCore::MonsterRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonsterRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::RPG::GameCore::MonsterRank GetMonsterRank(::System::UInt32 monsterId)
		{
			return ((::RPG::GameCore::MonsterRank(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_GETMONSTERRANK_OFFSET))(monsterId);
		}

		static ::System::UInt32 GetMonsterUniqueID(::System::UInt32 monsterId)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_GETMONSTERUNIQUEID_OFFSET))(monsterId);
		}
	};
}
