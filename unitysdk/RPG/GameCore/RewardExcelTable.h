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

#define RPG_GAMECORE_REWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x175AE700)
#define RPG_GAMECORE_REWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x175AE4B0)
#define RPG_GAMECORE_REWARDEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x175AE030)
#define RPG_GAMECORE_REWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x175AE200)
#define RPG_GAMECORE_REWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x175AE440)
#define RPG_GAMECORE_REWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x175AEA20)
#define RPG_GAMECORE_REWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x175AE280)
#define RPG_GAMECORE_REWARDEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x175AEC60)
#define RPG_GAMECORE_REWARDEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x175AE190)
#define RPG_GAMECORE_REWARDEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x175AE790)
#define RPG_GAMECORE_REWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x175AEA60)
#define RPG_GAMECORE_REWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x175AFC90)
#define RPG_GAMECORE_REWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x175AFCE0)
#define RPG_GAMECORE_REWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x175B0160)
#define RPG_GAMECORE_REWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x175AFC30)
#define RPG_GAMECORE_REWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x175AEC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RewardExcelTable_TypeDefinitionIndex = 13385;

	class RewardExcelTable : public ::System::Object
	{
	public:
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x32430);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x32438);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x32440);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x32448);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x32450);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x32458);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x32460);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x104E0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x104E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
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

		static ::RPG::GameCore::RewardRow* GetData(::System::UInt32 RewardID)
		{
			return ((::RPG::GameCore::RewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_GETDATA_OFFSET))(RewardID);
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

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::RewardRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::RewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::RewardExcelTable_IndexKey key, ::RPG::GameCore::RewardRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RewardExcelTable_IndexKey, ::RPG::GameCore::RewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RewardRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
