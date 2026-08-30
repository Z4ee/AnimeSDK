#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/StatusExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STATUSEXCELTABLE_GETBYMODIFIERNAME_OFFSET UNITYSDK_OFFSET(0x1D56CFF0)
#define RPG_GAMECORE_STATUSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D56CF60)
#define RPG_GAMECORE_STATUSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D56CD40)
#define RPG_GAMECORE_STATUSEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D56CB30)
#define RPG_GAMECORE_STATUSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D56CC50)
#define RPG_GAMECORE_STATUSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D56CCD0)
#define RPG_GAMECORE_STATUSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D56B570)
#define RPG_GAMECORE_STATUSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D56B5B0)
#define RPG_GAMECORE_STATUSEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D56B950)
#define RPG_GAMECORE_STATUSEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D56CBE0)
#define RPG_GAMECORE_STATUSEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D56BED0)
#define RPG_GAMECORE_STATUSEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1D56D350)
#define RPG_GAMECORE_STATUSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D56B760)
#define RPG_GAMECORE_STATUSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D56C660)
#define RPG_GAMECORE_STATUSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D56C6B0)
#define RPG_GAMECORE_STATUSEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D56D390)
#define RPG_GAMECORE_STATUSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D56C600)
#define RPG_GAMECORE_STATUSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D56B8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatusExcelTable_TypeDefinitionIndex = 15010;

	class StatusExcelTable : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x20380);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>**)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x20388);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x20390);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>**)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x20398);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x203A0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x203A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet__ModifierToStatusMapping()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x203B0);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x203B8);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0xA900);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0xA901);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::StatusRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::StatusExcelTable_IndexKey a1, ::RPG::GameCore::StatusRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StatusRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StatusRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StatusRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::RPG::GameCore::StatusRow* GetByModifierName(::System::String* a1)
		{
			return ((::RPG::GameCore::StatusRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_GETBYMODIFIERNAME_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
