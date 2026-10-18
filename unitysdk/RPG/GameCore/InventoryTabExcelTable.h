#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class InventoryTabRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D78C530)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D78C400)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D78C0F0)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D78C3A0)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D78C680)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D78C170)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D78C6C0)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D78C890)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D78CD10)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D78D030)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D78C7F0)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D78C750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InventoryTabExcelTable_TypeDefinitionIndex = 13834;

	class InventoryTabExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InventoryTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CA50);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*>**)Il2CppClass::FromTypeDefinitionIndex(InventoryTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CA58);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(InventoryTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CA60);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(InventoryTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x8CA0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InventoryTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x8CA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::InventoryTabRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::InventoryTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::InventoryTabRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::InventoryTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
