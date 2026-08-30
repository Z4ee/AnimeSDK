#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonsterAvatarSkillSlotStatus.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AetherSkillCoreItemData; }
namespace RPG::GameCore { class AetherPassiveSkillTypeRow; }
namespace System { class String; }

#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC715A20)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_BELONGAETHERSPIRITID_OFFSET UNITYSDK_OFFSET(0xC715DD0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLCOREDATA_OFFSET UNITYSDK_OFFSET(0xC715DB0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0xC715CE0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLTYPENAME_OFFSET UNITYSDK_OFFSET(0xC715C30)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLTYPEROW_OFFSET UNITYSDK_OFFSET(0xC715BC0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xC715BA0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xC715B60)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC715B80)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_UNLOCKPROMOTION_OFFSET UNITYSDK_OFFSET(0xC715D90)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_BELONGAETHERSPIRITID_OFFSET UNITYSDK_OFFSET(0xC715DE0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_SKILLCOREDATA_OFFSET UNITYSDK_OFFSET(0xC715DC0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xC715BB0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xC715B70)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xC715B90)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_UNLOCKPROMOTION_OFFSET UNITYSDK_OFFSET(0xC715DA0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0xC715AA0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC715A90)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherMonsterAvatarSkillSingleSlotData_TypeDefinitionIndex = 62314;

	class AetherMonsterAvatarSkillSingleSlotData : public ::System::Object
	{
	public:
		::RPG::Client::AetherSkillCoreItemData* _SkillCoreData_k__BackingField; // 0x10
		::RPG::GameCore::AetherPassiveSkillTypeRow* _SkillTypeRow; // 0x18
		::RPG::GameCore::AetherPassiveSkillType _SkillType_k__BackingField; // 0x20
		::RPG::Client::MonsterAvatarSkillSlotStatus _Status_k__BackingField; // 0x24
		::System::UInt32 _UnlockPromotion_k__BackingField; // 0x28
		::System::UInt32 _SlotIndex_k__BackingField; // 0x2C
		::System::UInt32 _BelongAetherSpiritID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AetherMonsterAvatarSkillSingleSlotData* Create(::System::UInt32 a1, ::RPG::GameCore::AetherPassiveSkillType a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::AetherMonsterAvatarSkillSingleSlotData*(*)(::System::UInt32, ::RPG::GameCore::AetherPassiveSkillType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void UpdateStatus(::RPG::Client::MonsterAvatarSkillSlotStatus a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterAvatarSkillSlotStatus, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_UPDATESTATUS_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_SlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void set_SlotIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_SLOTINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterAvatarSkillSlotStatus get_Status()
		{
			return ((::RPG::Client::MonsterAvatarSkillSlotStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::MonsterAvatarSkillSlotStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterAvatarSkillSlotStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::RPG::GameCore::AetherPassiveSkillType get_SkillType()
		{
			return ((::RPG::GameCore::AetherPassiveSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLTYPE_OFFSET))(this);
		}

		::System::Void set_SkillType(::RPG::GameCore::AetherPassiveSkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AetherPassiveSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_SKILLTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::AetherPassiveSkillTypeRow* get_SkillTypeRow()
		{
			return ((::RPG::GameCore::AetherPassiveSkillTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLTYPEROW_OFFSET))(this);
		}

		::System::String* get_SkillTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLTYPENAME_OFFSET))(this);
		}

		::System::String* get_SkillTypeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLTYPEICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_UnlockPromotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_UNLOCKPROMOTION_OFFSET))(this);
		}

		::System::Void set_UnlockPromotion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_UNLOCKPROMOTION_OFFSET))(this, a1);
		}

		::RPG::Client::AetherSkillCoreItemData* get_SkillCoreData()
		{
			return ((::RPG::Client::AetherSkillCoreItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLCOREDATA_OFFSET))(this);
		}

		::System::Void set_SkillCoreData(::RPG::Client::AetherSkillCoreItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherSkillCoreItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_SKILLCOREDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_BelongAetherSpiritID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_BELONGAETHERSPIRITID_OFFSET))(this);
		}

		::System::Void set_BelongAetherSpiritID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_BELONGAETHERSPIRITID_OFFSET))(this, a1);
		}
	};
}
