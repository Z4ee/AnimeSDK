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

#define RPG_GAMECORE_MONSTEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D2CF6B0)
#define RPG_GAMECORE_MONSTEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D2CF460)
#define RPG_GAMECORE_MONSTEREXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D2CF0A0)
#define RPG_GAMECORE_MONSTEREXCELTABLE_GETMONSTERRANK_OFFSET UNITYSDK_OFFSET(0x1D2D1D90)
#define RPG_GAMECORE_MONSTEREXCELTABLE_GETMONSTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D2D1E60)
#define RPG_GAMECORE_MONSTEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D2CF1C0)
#define RPG_GAMECORE_MONSTEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D2CF3F0)
#define RPG_GAMECORE_MONSTEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D2CF9B0)
#define RPG_GAMECORE_MONSTEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D2CF240)
#define RPG_GAMECORE_MONSTEREXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D2CFBE0)
#define RPG_GAMECORE_MONSTEREXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D2CF150)
#define RPG_GAMECORE_MONSTEREXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D2CF740)
#define RPG_GAMECORE_MONSTEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D2CF9F0)
#define RPG_GAMECORE_MONSTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2D18C0)
#define RPG_GAMECORE_MONSTEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D2D1910)
#define RPG_GAMECORE_MONSTEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2D1E90)
#define RPG_GAMECORE_MONSTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D2D1860)
#define RPG_GAMECORE_MONSTEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D2CFB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterExcelTable_TypeDefinitionIndex = 14073;

	class MonsterExcelTable : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x5AEA0);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x5AEA8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x5AEB0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x5AEB8);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x5AEC0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x5AEC8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x5AED0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x12D70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x12D71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
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

		static ::RPG::GameCore::MonsterRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonsterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::MonsterRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::MonsterExcelTable_IndexKey a1, ::RPG::GameCore::MonsterRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MonsterExcelTable_IndexKey, ::RPG::GameCore::MonsterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonsterRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::RPG::GameCore::MonsterRank GetMonsterRank(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonsterRank(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_GETMONSTERRANK_OFFSET))(a1);
		}

		static ::System::UInt32 GetMonsterUniqueID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREXCELTABLE_GETMONSTERUNIQUEID_OFFSET))(a1);
		}
	};
}
