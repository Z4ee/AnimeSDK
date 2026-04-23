#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MonsterSkillExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class MonsterSkillRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18B5F420)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18B5F1D0)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x18B5ED50)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18B5EF20)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18B5F160)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18B5F730)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B5EFA0)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x18B5F970)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x18B5EEB0)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x18B5F4B0)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18B5F770)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B60B90)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18B60BE0)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B61060)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18B60B30)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B5F910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterSkillExcelTable_TypeDefinitionIndex = 13444;

	class MonsterSkillExcelTable : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F7B0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F7B8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F7C0);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F7C8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F7D0);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F7D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F7E0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0xE3F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0xE3F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonsterSkillRow* GetData(::System::UInt32 SkillID)
		{
			return ((::RPG::GameCore::MonsterSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_GETDATA_OFFSET))(SkillID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::MonsterSkillRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::MonsterSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::MonsterSkillExcelTable_IndexKey key, ::RPG::GameCore::MonsterSkillRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonsterSkillRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
