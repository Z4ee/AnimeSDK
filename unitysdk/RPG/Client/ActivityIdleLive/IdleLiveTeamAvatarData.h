#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_75A0CA533FCD01A7;
class Class_2_C25A52059699ED5E;
namespace RPG::AvatarSystem::Property { template <typename T> class PropertyModifierBuilder_1; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarConfig; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPromotionBaseData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaAvatarConfig; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_BINDSLOT_OFFSET UNITYSDK_OFFSET(0xC4F0800)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_CALPOWERLEVELWITHOUTSPEQUIP_OFFSET UNITYSDK_OFFSET(0xC4F1600)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_CALPOWERLEVEL_OFFSET UNITYSDK_OFFSET(0xC4F0970)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xC4EFD10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC4F00F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GETPROPERTYBASEVALUE_OFFSET UNITYSDK_OFFSET(0xC4F1C90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GETPROPERTYFINALVALUEDICT_OFFSET UNITYSDK_OFFSET(0xC4F1E40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GETPROPERTYFINALVALUEWITHOUTSPEQUIP_OFFSET UNITYSDK_OFFSET(0xC4F1A60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GETPROPERTYFINALVALUE_OFFSET UNITYSDK_OFFSET(0xC4F1470)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xC4F1250)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_AVATARPOSTYPE_OFFSET UNITYSDK_OFFSET(0xC4F1500)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC4F00A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_GACHACONFIG_OFFSET UNITYSDK_OFFSET(0xC4F07B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_ISONSLOT_OFFSET UNITYSDK_OFFSET(0xC4F2420)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC4F0040)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_PROMOTIONS_OFFSET UNITYSDK_OFFSET(0xC4F2340)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_SLOTDATA_OFFSET UNITYSDK_OFFSET(0xC4F22D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xC4EFFF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_STAR_OFFSET UNITYSDK_OFFSET(0xC4F2390)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_UNLOCKEDPROMOTIONS_OFFSET UNITYSDK_OFFSET(0xC4F22F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_REBUILDMODIFIERONAVATARLEVELCHANGE_OFFSET UNITYSDK_OFFSET(0xC4F2160)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_REFRESHBASEPROPERTYMODIFIERSOURCE_OFFSET UNITYSDK_OFFSET(0xC4F0580)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_REGISTERPROMOTIONMODIFIERSOURCES_OFFSET UNITYSDK_OFFSET(0xC4F0350)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_SET_SLOTDATA_OFFSET UNITYSDK_OFFSET(0xC4F22E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_UNBINDSLOT_OFFSET UNITYSDK_OFFSET(0xC4F08D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC4F0300)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA__REBUILDALLMDFSOURCES_OFFSET UNITYSDK_OFFSET(0xC4F1D20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA__SETBASEPROPERTYMODIFIERSOURCELEVEL_OFFSET UNITYSDK_OFFSET(0xC4F0710)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamAvatarData_TypeDefinitionIndex = 75074;

	class IdleLiveTeamAvatarData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* _AvatarData; // 0x10
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>* _ModifierSources; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* _SlotData_k__BackingField; // 0x20
		::Class_2_C25A52059699ED5E* _BasePropertyModifierSource; // 0x28
		::Class_1_75A0CA533FCD01A7* _PropertyProvider; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_COMPARETO_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* Create(::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*(*)(::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_CREATE_OFFSET))(a1);
		}

		::System::Void RegisterPromotionModifierSources(::System::Collections::Generic::List_1<::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_REGISTERPROMOTIONMODIFIERSOURCES_OFFSET))(this, a1);
		}

		::System::Void RefreshBasePropertyModifierSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_REFRESHBASEPROPERTYMODIFIERSOURCE_OFFSET))(this);
		}

		::System::Void _SetBasePropertyModifierSourceLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA__SETBASEPROPERTYMODIFIERSOURCELEVEL_OFFSET))(this);
		}

		::System::Void BindSlot(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_BINDSLOT_OFFSET))(this, a1);
		}

		::System::Void UnbindSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_UNBINDSLOT_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal CalPowerLevel(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_CALPOWERLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal CalPowerLevelWithoutSpEquip()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_CALPOWERLEVELWITHOUTSPEQUIP_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetPropertyBaseValue(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GETPROPERTYBASEVALUE_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetPropertyFinalValue(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GETPROPERTYFINALVALUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* GetPropertyFinalValueDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GETPROPERTYFINALVALUEDICT_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetPropertyFinalValueWithoutSpEquip(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GETPROPERTYFINALVALUEWITHOUTSPEQUIP_OFFSET))(this, a1);
		}

		::System::Void _RebuildAllMDFSources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA__REBUILDALLMDFSOURCES_OFFSET))(this);
		}

		::System::Void RebuildModifierOnAvatarLevelChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_REBUILDMODIFIERONAVATARLEVELCHANGE_OFFSET))(this);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_AVATARID_OFFSET))(this);
		}

		::RPG::GameCore::ILBattleCharacterLocation get_AvatarPosType()
		{
			return ((::RPG::GameCore::ILBattleCharacterLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_AVATARPOSTYPE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* get_SlotData()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_SLOTDATA_OFFSET))(this);
		}

		::System::Void set_SlotData(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_SET_SLOTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* get_Config()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_CONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData*>* get_UnlockedPromotions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_UNLOCKEDPROMOTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData*>* get_Promotions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_PROMOTIONS_OFFSET))(this);
		}

		::System::UInt32 get_SlotID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_SLOTID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_STAR_OFFSET))(this);
		}

		::System::Boolean get_IsOnSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_ISONSLOT_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveGachaAvatarConfig* get_GachaConfig()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaAvatarConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMAVATARDATA_GET_GACHACONFIG_OFFSET))(this);
		}
	};
}
