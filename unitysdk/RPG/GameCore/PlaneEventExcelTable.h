#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PlaneEventExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class PlaneEventRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D7958F0)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D7956A0)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D7952E0)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D795400)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D795630)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D795CA0)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D795480)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D795ED0)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D795390)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D7959A0)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D795CE0)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D796650)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D7966A0)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D796B80)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D7965F0)
#define RPG_GAMECORE_PLANEEVENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D795E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlaneEventExcelTable_TypeDefinitionIndex = 13962;

	class PlaneEventExcelTable : public ::System::Object
	{
	public:
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(PlaneEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x337D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlaneEventExcelTable_IndexKey, ::RPG::GameCore::PlaneEventRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlaneEventExcelTable_IndexKey, ::RPG::GameCore::PlaneEventRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlaneEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x337D8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlaneEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x337E0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlaneEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x337E8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PlaneEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x337F0);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::PlaneEventExcelTable_IndexKey, ::RPG::GameCore::PlaneEventRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::PlaneEventExcelTable_IndexKey, ::RPG::GameCore::PlaneEventRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlaneEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x337F8);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PlaneEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x33800);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlaneEventExcelTable_TypeDefinitionIndex)->GetStaticField(0xDB10);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlaneEventExcelTable_TypeDefinitionIndex)->GetStaticField(0xDB11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PlaneEventExcelTable_IndexKey, ::RPG::GameCore::PlaneEventRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PlaneEventExcelTable_IndexKey, ::RPG::GameCore::PlaneEventRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PlaneEventExcelTable_IndexKey, ::RPG::GameCore::PlaneEventRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PlaneEventExcelTable_IndexKey, ::RPG::GameCore::PlaneEventRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PlaneEventExcelTable_IndexKey, ::RPG::GameCore::PlaneEventRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PlaneEventExcelTable_IndexKey, ::RPG::GameCore::PlaneEventRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlaneEventExcelTable_IndexKey, ::RPG::GameCore::PlaneEventRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlaneEventExcelTable_IndexKey, ::RPG::GameCore::PlaneEventRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::PlaneEventExcelTable_IndexKey, ::RPG::GameCore::PlaneEventRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::PlaneEventExcelTable_IndexKey, ::RPG::GameCore::PlaneEventRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlaneEventRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::PlaneEventRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::PlaneEventRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::PlaneEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::PlaneEventExcelTable_IndexKey a1, ::RPG::GameCore::PlaneEventRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PlaneEventExcelTable_IndexKey, ::RPG::GameCore::PlaneEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlaneEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlaneEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
