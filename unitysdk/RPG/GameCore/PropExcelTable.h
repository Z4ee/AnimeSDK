#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PropExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PROPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D179AB0)
#define RPG_GAMECORE_PROPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D179860)
#define RPG_GAMECORE_PROPEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D1794A0)
#define RPG_GAMECORE_PROPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D1795C0)
#define RPG_GAMECORE_PROPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D1797F0)
#define RPG_GAMECORE_PROPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D179DC0)
#define RPG_GAMECORE_PROPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D179640)
#define RPG_GAMECORE_PROPEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D179FF0)
#define RPG_GAMECORE_PROPEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D179550)
#define RPG_GAMECORE_PROPEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D179B40)
#define RPG_GAMECORE_PROPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D179E00)
#define RPG_GAMECORE_PROPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D17AE30)
#define RPG_GAMECORE_PROPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D17AE80)
#define RPG_GAMECORE_PROPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D17B300)
#define RPG_GAMECORE_PROPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D17ADD0)
#define RPG_GAMECORE_PROPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D179F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropExcelTable_TypeDefinitionIndex = 13965;

	class PropExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E80);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E88);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E90);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E98);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x2EA0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x2EA8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x2EB0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x1050);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x1051);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PropRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PropRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::PropRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::PropExcelTable_IndexKey a1, ::RPG::GameCore::PropRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PropRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
