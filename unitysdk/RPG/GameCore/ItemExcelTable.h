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

#define RPG_GAMECORE_ITEMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x172CA5D0)
#define RPG_GAMECORE_ITEMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x172CA380)
#define RPG_GAMECORE_ITEMEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x172C9F00)
#define RPG_GAMECORE_ITEMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x172CA0D0)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISAVATAREXP_OFFSET UNITYSDK_OFFSET(0x172CB180)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISAVATARRANK_OFFSET UNITYSDK_OFFSET(0x172CB230)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISCOMMONMONSTERDROP_OFFSET UNITYSDK_OFFSET(0x172CB350)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISCREDIT_OFFSET UNITYSDK_OFFSET(0x172CB3B0)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x172CA310)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x172CA8F0)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISITEMSUBTYPE_OFFSET UNITYSDK_OFFSET(0x172CB1E0)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISTRACEPATH_OFFSET UNITYSDK_OFFSET(0x172CB290)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISTRACKOFDESTINY_OFFSET UNITYSDK_OFFSET(0x172CB3C0)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISWEEKLYMONSTERDROP_OFFSET UNITYSDK_OFFSET(0x172CB2F0)
#define RPG_GAMECORE_ITEMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x172CA150)
#define RPG_GAMECORE_ITEMEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x172CAB30)
#define RPG_GAMECORE_ITEMEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x172CA060)
#define RPG_GAMECORE_ITEMEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x172CA660)
#define RPG_GAMECORE_ITEMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x172CA930)
#define RPG_GAMECORE_ITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x172CACB0)
#define RPG_GAMECORE_ITEMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x172CAD00)
#define RPG_GAMECORE_ITEMEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x172CB3D0)
#define RPG_GAMECORE_ITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x172CAC50)
#define RPG_GAMECORE_ITEMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x172CAAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemExcelTable_TypeDefinitionIndex = 12669;

	class ItemExcelTable : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x24650);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x24658);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x24660);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x24668);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x24670);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x24678);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x24680);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x9B70);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x9B71);
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

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
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

		static ::RPG::GameCore::ItemRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::ItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_GETDATA_OFFSET))(ID);
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

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::ItemRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::ItemExcelTable_IndexKey key, ::RPG::GameCore::ItemRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Boolean IsAvatarExp(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISAVATAREXP_OFFSET))(itemID);
		}

		static ::System::Boolean IsAvatarRank(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISAVATARRANK_OFFSET))(itemID);
		}

		static ::System::Boolean IsTracePath(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISTRACEPATH_OFFSET))(itemID);
		}

		static ::System::Boolean IsWeeklyMonsterDrop(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISWEEKLYMONSTERDROP_OFFSET))(itemID);
		}

		static ::System::Boolean IsCommonMonsterDrop(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISCOMMONMONSTERDROP_OFFSET))(itemID);
		}

		static ::System::Boolean IsCredit(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISCREDIT_OFFSET))(itemID);
		}

		static ::System::Boolean IsTrackOfDestiny(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISTRACKOFDESTINY_OFFSET))(itemID);
		}

		static ::System::Boolean IsItemSubType(::System::UInt32 itemID, ::RPG::GameCore::ItemSubType subtype)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::ItemSubType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMEXCELTABLE_ISITEMSUBTYPE_OFFSET))(itemID, subtype);
		}
	};
}
