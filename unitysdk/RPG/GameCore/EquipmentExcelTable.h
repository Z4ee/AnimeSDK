#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EquipmentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D7C82E0)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D7C81B0)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D7C7EA0)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_GET_PROMOTIONLUT_OFFSET UNITYSDK_OFFSET(0x1D7C9060)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D7C8150)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D7C8430)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D7C7F20)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1D7C9620)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D7C8470)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7C8640)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D7C8D40)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7C96B0)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D7C85A0)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D7C8500)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7C90A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentExcelTable_TypeDefinitionIndex = 13131;

	class EquipmentExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentRow*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x26E90);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x26E98);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__PromotionLUT()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x26EA0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x26EA8);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EquipmentExcelTable_TypeDefinitionIndex)->GetStaticField(0xB8D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EquipmentExcelTable_TypeDefinitionIndex)->GetStaticField(0xB8D1);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EquipmentExcelTable_TypeDefinitionIndex)->GetStaticField(0xB8D2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EquipmentRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EquipmentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EquipmentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EquipmentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_PromotionLUT()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_GET_PROMOTIONLUT_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}
	};
}
