#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonsterAvatarSkillSlotStatus.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AetherSkillCoreItemData; }
namespace RPG::GameCore { class AetherPassiveSkillTypeRow; }
namespace System { class String; }

#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9CDCF00)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_BELONGAETHERSPIRITID_OFFSET UNITYSDK_OFFSET(0x9CDD250)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLCOREDATA_OFFSET UNITYSDK_OFFSET(0x9CDD230)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x9CDD190)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLTYPENAME_OFFSET UNITYSDK_OFFSET(0x9CDD110)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLTYPEROW_OFFSET UNITYSDK_OFFSET(0x9CDD0A0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x9CDD080)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x9CDD040)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9CDD060)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_UNLOCKPROMOTION_OFFSET UNITYSDK_OFFSET(0x9CDD210)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_BELONGAETHERSPIRITID_OFFSET UNITYSDK_OFFSET(0x9CDD260)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_SKILLCOREDATA_OFFSET UNITYSDK_OFFSET(0x9CDD240)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x9CDD090)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x9CDD050)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x9CDD070)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_UNLOCKPROMOTION_OFFSET UNITYSDK_OFFSET(0x9CDD220)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x9CDCF80)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9CDCF70)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherMonsterAvatarSkillSingleSlotData_TypeDefinitionIndex = 57401;

	class AetherMonsterAvatarSkillSingleSlotData : public ::System::Object
	{
	public:
		::RPG::GameCore::AetherPassiveSkillTypeRow* _SkillTypeRow; // 0x10
		::RPG::Client::AetherSkillCoreItemData* _SkillCoreData_k__BackingField; // 0x18
		::System::UInt32 _BelongAetherSpiritID_k__BackingField; // 0x20
		::RPG::Client::MonsterAvatarSkillSlotStatus _Status_k__BackingField; // 0x24
		::System::UInt32 _SlotIndex_k__BackingField; // 0x28
		::System::UInt32 _UnlockPromotion_k__BackingField; // 0x2C
		::RPG::GameCore::AetherPassiveSkillType _SkillType_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AetherMonsterAvatarSkillSingleSlotData* Create(::System::UInt32 slotIndex, ::RPG::GameCore::AetherPassiveSkillType skillType, ::System::UInt32 belongAetherSpiritID)
		{
			return ((::RPG::Client::AetherMonsterAvatarSkillSingleSlotData*(*)(::System::UInt32, ::RPG::GameCore::AetherPassiveSkillType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_CREATE_OFFSET))(slotIndex, skillType, belongAetherSpiritID);
		}

		::System::Void UpdateStatus(::RPG::Client::MonsterAvatarSkillSlotStatus status, ::System::UInt32 skillCoreID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterAvatarSkillSlotStatus, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_UPDATESTATUS_OFFSET))(this, status, skillCoreID);
		}

		::System::UInt32 get_SlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void set_SlotIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_SLOTINDEX_OFFSET))(this, value);
		}

		::RPG::Client::MonsterAvatarSkillSlotStatus get_Status()
		{
			return ((::RPG::Client::MonsterAvatarSkillSlotStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::MonsterAvatarSkillSlotStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterAvatarSkillSlotStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_STATUS_OFFSET))(this, value);
		}

		::RPG::GameCore::AetherPassiveSkillType get_SkillType()
		{
			return ((::RPG::GameCore::AetherPassiveSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLTYPE_OFFSET))(this);
		}

		::System::Void set_SkillType(::RPG::GameCore::AetherPassiveSkillType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AetherPassiveSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_SKILLTYPE_OFFSET))(this, value);
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

		::System::Void set_UnlockPromotion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_UNLOCKPROMOTION_OFFSET))(this, value);
		}

		::RPG::Client::AetherSkillCoreItemData* get_SkillCoreData()
		{
			return ((::RPG::Client::AetherSkillCoreItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLCOREDATA_OFFSET))(this);
		}

		::System::Void set_SkillCoreData(::RPG::Client::AetherSkillCoreItemData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherSkillCoreItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_SKILLCOREDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_BelongAetherSpiritID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_BELONGAETHERSPIRITID_OFFSET))(this);
		}

		::System::Void set_BelongAetherSpiritID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_BELONGAETHERSPIRITID_OFFSET))(this, value);
		}
	};
}
