#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EquipmentSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x171A8F90)
#define RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x171A8DE0)
#define RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x171A8AB0)
#define RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x171A8D80)
#define RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x171A9160)
#define RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x171A8B30)
#define RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x171A91A0)
#define RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x171A9380)
#define RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x171A9700)
#define RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x171A9A60)
#define RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x171A92E0)
#define RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x171A9240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentSkillExcelTable_TypeDefinitionIndex = 12086;

	class EquipmentSkillExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C860);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C868);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C870);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EquipmentSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0xECD0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EquipmentSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0xECD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentSkillRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentSkillRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentSkillRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentSkillRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EquipmentSkillRow* GetData(::System::UInt32 SkillID, ::System::UInt32 Level)
		{
			return ((::RPG::GameCore::EquipmentSkillRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE_GETDATA_OFFSET))(SkillID, Level);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EquipmentSkillRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::EquipmentSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTSKILLEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
