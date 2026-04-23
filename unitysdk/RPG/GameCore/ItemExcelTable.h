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

#define RPG_GAMECORE_ITEMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A2C9C0)
#define RPG_GAMECORE_ITEMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A2C770)
#define RPG_GAMECORE_ITEMEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x18A2C2F0)
#define RPG_GAMECORE_ITEMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A2C4C0)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISAVATAREXP_OFFSET UNITYSDK_OFFSET(0x18A2E480)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISAVATARRANK_OFFSET UNITYSDK_OFFSET(0x18A2E530)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISCOMMONMONSTERDROP_OFFSET UNITYSDK_OFFSET(0x18A2E650)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISCREDIT_OFFSET UNITYSDK_OFFSET(0x18A2E6B0)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A2C700)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A2CCE0)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISITEMSUBTYPE_OFFSET UNITYSDK_OFFSET(0x18A2E4E0)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISTRACEPATH_OFFSET UNITYSDK_OFFSET(0x18A2E590)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISTRACKOFDESTINY_OFFSET UNITYSDK_OFFSET(0x18A2E6C0)
#define RPG_GAMECORE_ITEMEXCELTABLE_ISWEEKLYMONSTERDROP_OFFSET UNITYSDK_OFFSET(0x18A2E5F0)
#define RPG_GAMECORE_ITEMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A2C540)
#define RPG_GAMECORE_ITEMEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x18A2CF20)
#define RPG_GAMECORE_ITEMEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x18A2C450)
#define RPG_GAMECORE_ITEMEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x18A2CA50)
#define RPG_GAMECORE_ITEMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A2CD20)
#define RPG_GAMECORE_ITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A2DFB0)
#define RPG_GAMECORE_ITEMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A2E000)
#define RPG_GAMECORE_ITEMEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A2E6D0)
#define RPG_GAMECORE_ITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A2DF50)
#define RPG_GAMECORE_ITEMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A2CEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemExcelTable_TypeDefinitionIndex = 13136;

	class ItemExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F340);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F348);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F350);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F358);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F360);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::ItemExcelTable_IndexKey, ::RPG::GameCore::ItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F368);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F370);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0xE280);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemExcelTable_TypeDefinitionIndex)->GetStaticField(0xE281);
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
