#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemUseDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19866FE0)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19866E70)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19866B60)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19866E10)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19867170)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19866BE0)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x198671B0)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19867380)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x198675C0)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19867930)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x198672E0)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19867240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemUseDataExcelTable_TypeDefinitionIndex = 13226;

	class ItemUseDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemUseDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x26930);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemUseDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x26938);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemUseDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x26940);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemUseDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x95B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ItemUseDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x95B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemUseDataRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ItemUseDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemUseDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemUseDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
