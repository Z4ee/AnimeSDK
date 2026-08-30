#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/ItemExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class ItemRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D22BED0)
#define RPG_GAMECORE_ITEMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D22BC80)
#define RPG_GAMECORE_ITEMEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D22B8C0)
#define RPG_GAMECORE_ITEMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D22B9E0)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISAVATAREXP_OFFSET UNITYSDK_OFFSET(0x1D22D940)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISAVATARRANK_OFFSET UNITYSDK_OFFSET(0x1D22D9F0)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISCOMMONMONSTERDROP_OFFSET UNITYSDK_OFFSET(0x1D22DB10)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISCREDIT_OFFSET UNITYSDK_OFFSET(0x1D22DB70)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D22BC10)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D22C1E0)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISITEMSUBTYPE_OFFSET UNITYSDK_OFFSET(0x1D22D9A0)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISTRACEPATH_OFFSET UNITYSDK_OFFSET(0x1D22DA50)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISTRACKOFDESTINY_OFFSET UNITYSDK_OFFSET(0x1D22DB80)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISWEEKLYMONSTERDROP_OFFSET UNITYSDK_OFFSET(0x1D22DAB0)
#define RPG_GAMECORE_ITEMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D22BA60)
#define RPG_GAMECORE_ITEMEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D22C410)
#define RPG_GAMECORE_ITEMEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D22B970)
#define RPG_GAMECORE_ITEMEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D22BF60)
#define RPG_GAMECORE_ITEMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D22C220)
#define RPG_GAMECORE_ITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D22D470)
#define RPG_GAMECORE_ITEMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D22D4C0)
#define RPG_GAMECORE_ITEMEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D22DB90)
#define RPG_GAMECORE_ITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D22D410)
#define RPG_GAMECORE_ITEMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D22C3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemExcelTable_TypeDefinitionIndex = 13755;

	class ItemExcelTable : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0xA990);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0xA998);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0xA9A0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0xA9A8);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0xA9B0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0xA9B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0xA9C0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x2530);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x2531);
		}
		// static const ::System::UInt32 _CREDIT_ITEM_ID = 0x2; // 0x0
		// static const ::System::UInt32 _TRACK_OF_DESTINY_ITEM_ID = 0xF1; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::ItemRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::ItemExcelTable_IndexKey a1, ::RPG::GameCore::ItemRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Boolean IsAvatarExp(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISAVATAREXP_OFFSET))(a1);
		}

		static ::System::Boolean IsAvatarRank(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISAVATARRANK_OFFSET))(a1);
		}

		static ::System::Boolean IsTracePath(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISTRACEPATH_OFFSET))(a1);
		}

		static ::System::Boolean IsWeeklyMonsterDrop(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISWEEKLYMONSTERDROP_OFFSET))(a1);
		}

		static ::System::Boolean IsCommonMonsterDrop(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISCOMMONMONSTERDROP_OFFSET))(a1);
		}

		static ::System::Boolean IsCredit(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISCREDIT_OFFSET))(a1);
		}

		static ::System::Boolean IsTrackOfDestiny(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISTRACKOFDESTINY_OFFSET))(a1);
		}

		static ::System::Boolean IsItemSubType(::System::UInt32 a1, ::RPG::GameCore::ItemSubType a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::ItemSubType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISITEMSUBTYPE_OFFSET))(a1, a2);
		}
	};
}
