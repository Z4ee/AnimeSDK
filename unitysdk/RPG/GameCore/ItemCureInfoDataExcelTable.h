#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemCureInfoDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D1B9510)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D1B93A0)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D1B9090)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D1B9340)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D1B96A0)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1B9110)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1B96E0)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1B98B0)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D1B9BC0)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B9F30)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D1B9810)
#define RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1B9770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemCureInfoDataExcelTable_TypeDefinitionIndex = 13773;

	class ItemCureInfoDataExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemCureInfoDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x409A0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemCureInfoDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x409A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemCureInfoDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemCureInfoDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemCureInfoDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x409B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemCureInfoDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xF790);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ItemCureInfoDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xF791);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemCureInfoDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemCureInfoDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemCureInfoDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemCureInfoDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemCureInfoDataRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ItemCureInfoDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemCureInfoDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemCureInfoDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
