#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/InventorySortType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class InventorySortRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INVENTORYSORTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A21DD0)
#define RPG_GAMECORE_INVENTORYSORTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A21C20)
#define RPG_GAMECORE_INVENTORYSORTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A218F0)
#define RPG_GAMECORE_INVENTORYSORTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A21BC0)
#define RPG_GAMECORE_INVENTORYSORTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A21FA0)
#define RPG_GAMECORE_INVENTORYSORTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A21970)
#define RPG_GAMECORE_INVENTORYSORTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A21FE0)
#define RPG_GAMECORE_INVENTORYSORTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A221C0)
#define RPG_GAMECORE_INVENTORYSORTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A22390)
#define RPG_GAMECORE_INVENTORYSORTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A226F0)
#define RPG_GAMECORE_INVENTORYSORTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A22120)
#define RPG_GAMECORE_INVENTORYSORTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A22080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InventorySortExcelTable_TypeDefinitionIndex = 13105;

	class InventorySortExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventorySortRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventorySortRow*>**)Il2CppClass::FromTypeDefinitionIndex(InventorySortExcelTable_TypeDefinitionIndex)->GetStaticField(0x3ECE0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(InventorySortExcelTable_TypeDefinitionIndex)->GetStaticField(0x3ECE8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InventorySortExcelTable_TypeDefinitionIndex)->GetStaticField(0x3ECF0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(InventorySortExcelTable_TypeDefinitionIndex)->GetStaticField(0xE0B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InventorySortExcelTable_TypeDefinitionIndex)->GetStaticField(0xE0B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYSORTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventorySortRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventorySortRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYSORTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYSORTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventorySortRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventorySortRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYSORTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::InventorySortRow* GetData(::RPG::GameCore::InventorySortType SortType)
		{
			return ((::RPG::GameCore::InventorySortRow*(*)(::RPG::GameCore::InventorySortType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYSORTEXCELTABLE_GETDATA_OFFSET))(SortType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYSORTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYSORTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYSORTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYSORTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYSORTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYSORTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::InventorySortRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::InventorySortRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYSORTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
