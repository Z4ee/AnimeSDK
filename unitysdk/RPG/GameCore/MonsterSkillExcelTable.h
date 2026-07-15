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

#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B1CAC50)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B1CAA00)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1B1CA640)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B1CA760)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B1CA990)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B1CAF50)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B1CA7E0)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1B1CB180)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1B1CA6F0)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1B1CACE0)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B1CAF90)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B1CC360)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B1CC3B0)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1CC830)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B1CC300)
#define RPG_GAMECORE_MONSTERSKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B1CB120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterSkillExcelTable_TypeDefinitionIndex = 13663;

	class MonsterSkillExcelTable : public ::System::Object
	{
	public:
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x42ED0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x42ED8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x42EE0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x42EE8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x42EF0);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x42EF8);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x42F00);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0xB6B0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonsterSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0xB6B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
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

		static ::RPG::GameCore::MonsterSkillRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonsterSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::MonsterSkillRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::MonsterSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::MonsterSkillExcelTable_IndexKey a1, ::RPG::GameCore::MonsterSkillRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MonsterSkillExcelTable_IndexKey, ::RPG::GameCore::MonsterSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonsterSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
