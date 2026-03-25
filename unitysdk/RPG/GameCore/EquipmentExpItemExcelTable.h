#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EquipmentExpItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x171A5DF0)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x171A5C40)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x171A5910)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x171A5BE0)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x171A5FC0)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x171A5990)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x171A6000)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x171A61E0)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x171A6370)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x171A6680)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x171A6140)
#define RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x171A60A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentExpItemExcelTable_TypeDefinitionIndex = 12090;

	class EquipmentExpItemExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentExpItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C690);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentExpItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C698);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpItemRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentExpItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C6A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EquipmentExpItemExcelTable_TypeDefinitionIndex)->GetStaticField(0xEC50);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EquipmentExpItemExcelTable_TypeDefinitionIndex)->GetStaticField(0xEC51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpItemRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpItemRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpItemRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpItemRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EquipmentExpItemRow* GetData(::System::UInt32 ItemID)
		{
			return ((::RPG::GameCore::EquipmentExpItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_GETDATA_OFFSET))(ItemID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EquipmentExpItemRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::EquipmentExpItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
