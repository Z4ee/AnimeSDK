#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirGhostBase.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"

namespace RPG::Client::PixAir { class PixAirTagDisplayData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_CALCULATESKILLDESCRIPTIONLIST_OFFSET UNITYSDK_OFFSET(0xC3CA220)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_CLEARONPROPERTYCHANGEDCALLBACKS_OFFSET UNITYSDK_OFFSET(0xC3C88D0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_BURNPOWER_OFFSET UNITYSDK_OFFSET(0xC3C9270)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_CDPROGRESS_OFFSET UNITYSDK_OFFSET(0xC3C9310)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0xC3C8EA0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_CURRENTCD_OFFSET UNITYSDK_OFFSET(0xC3C8F20)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_DAMAGEPOWER_OFFSET UNITYSDK_OFFSET(0xC3C9130)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_DISPLAYTAGS_OFFSET UNITYSDK_OFFSET(0xC3C9070)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0xC3C8B00)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC3C8B80)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_ISCDRESET_OFFSET UNITYSDK_OFFSET(0xC3C9440)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_ISCORE_OFFSET UNITYSDK_OFFSET(0xC3C9420)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_ISPLAYEREQUIPPED_OFFSET UNITYSDK_OFFSET(0xC3C93C0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_LEFTMOSTINDEX_OFFSET UNITYSDK_OFFSET(0xC3C9400)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC3C8CC0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_NEEDPLAYJAMEFFECT_OFFSET UNITYSDK_OFFSET(0xC3C9460)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_NEEDSTOPJAMEFFECT_OFFSET UNITYSDK_OFFSET(0xC3C9480)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_RUNTIMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xC3C8610)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_SHIELDPOWER_OFFSET UNITYSDK_OFFSET(0xC3C91D0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xC3C93E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_SKILLDESCRIPTIONLIST_OFFSET UNITYSDK_OFFSET(0xC3C8E00)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_SKILLDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xC3C8D60)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_STARLEVEL_OFFSET UNITYSDK_OFFSET(0xC3C8C20)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_TAGS_OFFSET UNITYSDK_OFFSET(0xC3C8FD0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_INITFROMENTITY_OFFSET UNITYSDK_OFFSET(0xC3C94A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_NOTIFYPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xC3C8940)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_REGISTERONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xC3C86C0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_BURNPOWER_OFFSET UNITYSDK_OFFSET(0xC3C9280)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_CDPROGRESS_OFFSET UNITYSDK_OFFSET(0xC3C9320)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0xC3C8EB0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_CURRENTCD_OFFSET UNITYSDK_OFFSET(0xC3C8F30)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_DAMAGEPOWER_OFFSET UNITYSDK_OFFSET(0xC3C9140)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0xC3C8B10)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC3C8B90)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_ISCDRESET_OFFSET UNITYSDK_OFFSET(0xC3C9450)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_ISCORE_OFFSET UNITYSDK_OFFSET(0xC3C9430)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_ISPLAYEREQUIPPED_OFFSET UNITYSDK_OFFSET(0xC3C93D0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_LEFTMOSTINDEX_OFFSET UNITYSDK_OFFSET(0xC3C9410)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC3C8CD0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_NEEDPLAYJAMEFFECT_OFFSET UNITYSDK_OFFSET(0xC3C9470)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_NEEDSTOPJAMEFFECT_OFFSET UNITYSDK_OFFSET(0xC3C9490)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_RUNTIMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xC3C8620)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_SHIELDPOWER_OFFSET UNITYSDK_OFFSET(0xC3C91E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_SIZE_OFFSET UNITYSDK_OFFSET(0xC3C93F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_SKILLDESCRIPTIONLIST_OFFSET UNITYSDK_OFFSET(0xC3C8E10)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_SKILLDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xC3C8D70)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_STARLEVEL_OFFSET UNITYSDK_OFFSET(0xC3C8C30)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_TAGS_OFFSET UNITYSDK_OFFSET(0xC3C8FE0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SYNCFROMENTITY_OFFSET UNITYSDK_OFFSET(0xC3CA8F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_UNREGISTERONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xC3C8860)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST__CTOR_OFFSET UNITYSDK_OFFSET(0xC3C8630)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipmentGhost_TypeDefinitionIndex = 73515;

	class PixAirEquipmentGhost : public ::RPG::Client::PixAir::PixAirGhostBase
	{
	public:
		::System::String* _IconPath; // 0x20
		::System::Collections::Generic::List_1<::System::Action*>* _onPropertyChangedCallbacks; // 0x28
		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* _Tags; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* _SkillDescriptionList; // 0x38
		::System::String* _Name; // 0x40
		::System::String* _SkillDescription; // 0x48
		::System::Int32 _ShieldPower; // 0x50
		::System::Int32 _EquipmentID; // 0x54
		::System::Int32 _LeftMostIndex_k__BackingField; // 0x58
		::System::Single _CurrentCD; // 0x5C
		::System::Int32 _BurnPower; // 0x60
		::System::Int32 _DamagePower; // 0x64
		::System::Int32 _RuntimeUniqueID_k__BackingField; // 0x68
		::RPG::GameCore::PixAirEnchantmentType _EnchantType; // 0x6C
		::System::Single _CoolDown; // 0x70
		::System::Boolean _IsCore_k__BackingField; // 0x74
		::System::Boolean _NeedStopJamEffect_k__BackingField; // 0x75
		::System::Boolean _IsCDReset_k__BackingField; // 0x76
		::System::Boolean _IsLastFramJammed; // 0x77
		::System::Boolean _IsPlayerEquipped_k__BackingField; // 0x78
		::System::Boolean _NeedPlayJamEffect_k__BackingField; // 0x79
		::System::Single _CDProgress; // 0x7C
		::System::Int32 _StarLevel; // 0x80
		::RPG::GameCore::PixAirSlotType _Size_k__BackingField; // 0x84

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_RuntimeUniqueID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_RUNTIMEUNIQUEID_OFFSET))(this);
		}

		::System::Void set_RuntimeUniqueID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_RUNTIMEUNIQUEID_OFFSET))(this, a1);
		}

		::System::Void RegisterOnPropertyChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_REGISTERONPROPERTYCHANGED_OFFSET))(this, a1);
		}

		::System::Void UnregisterOnPropertyChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_UNREGISTERONPROPERTYCHANGED_OFFSET))(this, a1);
		}

		::System::Void ClearOnPropertyChangedCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_CLEARONPROPERTYCHANGEDCALLBACKS_OFFSET))(this);
		}

		::System::Void NotifyPropertyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_NOTIFYPROPERTYCHANGED_OFFSET))(this);
		}

		::System::Int32 get_EquipmentID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_EQUIPMENTID_OFFSET))(this);
		}

		::System::Void set_EquipmentID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_EQUIPMENTID_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::Int32 get_StarLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_STARLEVEL_OFFSET))(this);
		}

		::System::Void set_StarLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_STARLEVEL_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_SkillDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_SKILLDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_SkillDescription(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_SKILLDESCRIPTION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_SkillDescriptionList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_SKILLDESCRIPTIONLIST_OFFSET))(this);
		}

		::System::Void set_SkillDescriptionList(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_SKILLDESCRIPTIONLIST_OFFSET))(this, a1);
		}

		::System::Single get_CoolDown()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_COOLDOWN_OFFSET))(this);
		}

		::System::Void set_CoolDown(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_COOLDOWN_OFFSET))(this, a1);
		}

		::System::Single get_CurrentCD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_CURRENTCD_OFFSET))(this);
		}

		::System::Void set_CurrentCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_CURRENTCD_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* get_Tags()
		{
			return ((::Il2CppArray<::RPG::GameCore::PixAirEquipTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_TAGS_OFFSET))(this);
		}

		::System::Void set_Tags(::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::PixAirEquipTag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_TAGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirTagDisplayData*>* get_DisplayTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirTagDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_DISPLAYTAGS_OFFSET))(this);
		}

		::System::Int32 get_DamagePower()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_DAMAGEPOWER_OFFSET))(this);
		}

		::System::Void set_DamagePower(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_DAMAGEPOWER_OFFSET))(this, a1);
		}

		::System::Int32 get_ShieldPower()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_SHIELDPOWER_OFFSET))(this);
		}

		::System::Void set_ShieldPower(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_SHIELDPOWER_OFFSET))(this, a1);
		}

		::System::Int32 get_BurnPower()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_BURNPOWER_OFFSET))(this);
		}

		::System::Void set_BurnPower(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_BURNPOWER_OFFSET))(this, a1);
		}

		::System::Single get_CDProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_CDPROGRESS_OFFSET))(this);
		}

		::System::Void set_CDProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_CDPROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayerEquipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_ISPLAYEREQUIPPED_OFFSET))(this);
		}

		::System::Void set_IsPlayerEquipped(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_ISPLAYEREQUIPPED_OFFSET))(this, a1);
		}

		::RPG::GameCore::PixAirSlotType get_Size()
		{
			return ((::RPG::GameCore::PixAirSlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::RPG::GameCore::PixAirSlotType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PixAirSlotType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_SIZE_OFFSET))(this, a1);
		}

		::System::Int32 get_LeftMostIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_LEFTMOSTINDEX_OFFSET))(this);
		}

		::System::Void set_LeftMostIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_LEFTMOSTINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_ISCORE_OFFSET))(this);
		}

		::System::Void set_IsCore(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_ISCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCDReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_ISCDRESET_OFFSET))(this);
		}

		::System::Void set_IsCDReset(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_ISCDRESET_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedPlayJamEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_NEEDPLAYJAMEFFECT_OFFSET))(this);
		}

		::System::Void set_NeedPlayJamEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_NEEDPLAYJAMEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedStopJamEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_NEEDSTOPJAMEFFECT_OFFSET))(this);
		}

		::System::Void set_NeedStopJamEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_NEEDSTOPJAMEFFECT_OFFSET))(this, a1);
		}

		::System::Void InitFromEntity(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_INITFROMENTITY_OFFSET))(this, a1);
		}

		::System::Void CalculateSkillDescriptionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_CALCULATESKILLDESCRIPTIONLIST_OFFSET))(this);
		}

		::System::Void SyncFromEntity(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SYNCFROMENTITY_OFFSET))(this, a1);
		}
	};
}
