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

#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D317510)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D3172C0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D316F00)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D317020)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D317250)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D317820)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3170A0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D317A50)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D316FB0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_SETROWDATA_OFFSET UNITYSDK_OFFSET(0x1D318800)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D3175A0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D317860)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D318330)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D318380)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D318830)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D3182D0)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3179F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceEExcelTable_TypeDefinitionIndex = 14226;

	class PerformanceEExcelTable : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x5DFD0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x5DFD8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x5DFE0);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x5DFE8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x5DFF0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x5DFF8);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E000);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x13400);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceEExcelTable_TypeDefinitionIndex)->GetStaticField(0x13401);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
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

		static ::RPG::GameCore::PerformanceERow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PerformanceERow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::PerformanceERow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::PerformanceEExcelTable_IndexKey a1, ::RPG::GameCore::PerformanceERow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PerformanceEExcelTable_IndexKey, ::RPG::GameCore::PerformanceERow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PerformanceERow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Void SetRowData(::RPG::GameCore::PerformanceERow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_SETROWDATA_OFFSET))(a1);
		}
	};
}
