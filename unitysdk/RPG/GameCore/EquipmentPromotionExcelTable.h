#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EquipmentPromotionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x171A7C80)
#define RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x171A7AD0)
#define RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x171A77A0)
#define RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x171A7A70)
#define RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x171A7E50)
#define RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x171A7820)
#define RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x171A7E90)
#define RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x171A8070)
#define RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x171A85F0)
#define RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x171A8950)
#define RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x171A7FD0)
#define RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x171A7F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentPromotionExcelTable_TypeDefinitionIndex = 12084;

	class EquipmentPromotionExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C7B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentPromotionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentPromotionRow*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C7B8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C7C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EquipmentPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0xECA0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EquipmentPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0xECA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentPromotionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentPromotionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentPromotionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentPromotionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EquipmentPromotionRow* GetData(::System::UInt32 EquipmentID, ::System::UInt32 Promotion)
		{
			return ((::RPG::GameCore::EquipmentPromotionRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE_GETDATA_OFFSET))(EquipmentID, Promotion);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EquipmentPromotionRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::EquipmentPromotionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTPROMOTIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
