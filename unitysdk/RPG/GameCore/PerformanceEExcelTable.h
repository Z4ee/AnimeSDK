#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PerformanceEExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class PerformanceERow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17495DE0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17495B90)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x17495710)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x174958E0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17495B20)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17496100)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17495960)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x17496340)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x17495870)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x17495E70)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17496140)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17496C30)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17496C80)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17497100)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17496BD0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x174962E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceEExcelTable_TypeDefinitionIndex = 13129;

	class PerformanceEExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x1C90);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x1C98);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x1CA0);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x1CA8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x1CB0);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x1CB8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x1CC0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x2260);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x2261);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PerformanceERow* GetData(::System::UInt32 PerformanceID)
		{
			return ((::RPG::GameCore::PerformanceERow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETDATA_OFFSET))(PerformanceID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::PerformanceERow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::PerformanceEExcelTable_IndexKey key, ::RPG::GameCore::PerformanceERow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PerformanceERow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
