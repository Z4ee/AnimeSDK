#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MessageItemExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class MessageItemRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19912C70)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19912A20)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x19912660)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19912780)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x199129B0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19912F80)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19912800)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x199131B0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x19912710)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x19912D00)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19912FC0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19913A10)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19913A60)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19913EF0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x199139B0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19913150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageItemExcelTable_TypeDefinitionIndex = 13731;

	class MessageItemExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x18EE0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x18EE8);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x18EF0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x18EF8);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x18F00);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x18F08);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x18F10);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x84B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x84B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MessageItemRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MessageItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::MessageItemRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::MessageItemExcelTable_IndexKey a1, ::RPG::GameCore::MessageItemRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MessageItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
