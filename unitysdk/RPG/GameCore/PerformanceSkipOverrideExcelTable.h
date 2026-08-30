#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipOverrideExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class PerformanceSkipOverrideRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D42A6C0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D42A470)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D42A0B0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D42A1D0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D42A400)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D42AA90)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D42A250)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D42ACC0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D42A160)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D42A770)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D42AAD0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D42B520)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D42B570)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D42BA50)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D42B4C0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D42AC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipOverrideExcelTable_TypeDefinitionIndex = 14258;

	class PerformanceSkipOverrideExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x45590);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x45598);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x455A0);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x455A8);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x455B0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x455B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x455C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x103E0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x103E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PerformanceSkipOverrideRow* GetData(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::PerformanceSkipOverrideRow*(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::PerformanceSkipOverrideRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::PerformanceSkipOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey a1, ::RPG::GameCore::PerformanceSkipOverrideRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PerformanceSkipOverrideRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceSkipOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
