#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RewardExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class RewardRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_REWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DBA2190)
#define RPG_GAMECORE_REWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DBA1F40)
#define RPG_GAMECORE_REWARDEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1DBA1B80)
#define RPG_GAMECORE_REWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DBA1CA0)
#define RPG_GAMECORE_REWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DBA1ED0)
#define RPG_GAMECORE_REWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DBA24A0)
#define RPG_GAMECORE_REWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DBA1D20)
#define RPG_GAMECORE_REWARDEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1DBA26D0)
#define RPG_GAMECORE_REWARDEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1DBA1C30)
#define RPG_GAMECORE_REWARDEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1DBA2220)
#define RPG_GAMECORE_REWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DBA24E0)
#define RPG_GAMECORE_REWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DBA36F0)
#define RPG_GAMECORE_REWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DBA3740)
#define RPG_GAMECORE_REWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBA3BC0)
#define RPG_GAMECORE_REWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DBA3690)
#define RPG_GAMECORE_REWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DBA2670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RewardExcelTable_TypeDefinitionIndex = 14494;

	class RewardExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xB4A0);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xB4A8);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xB4B0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xB4B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xB4C0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xB4C8);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xB4D0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x26F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x26F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RewardRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::RewardRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::RewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::RewardExcelTable_IndexKey a1, ::RPG::GameCore::RewardRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
