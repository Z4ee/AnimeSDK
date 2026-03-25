#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonsterAvatarSkillSlotStatus.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AetherSkillCoreItemData; }
namespace RPG::GameCore { class AetherPassiveSkillTypeRow; }
namespace System { class String; }

#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x907FE40)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_BELONGAETHERSPIRITID_OFFSET UNITYSDK_OFFSET(0x9080190)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLCOREDATA_OFFSET UNITYSDK_OFFSET(0x9080170)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x90800D0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLTYPENAME_OFFSET UNITYSDK_OFFSET(0x9080050)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLTYPEROW_OFFSET UNITYSDK_OFFSET(0x907FFE0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x907FFC0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x907FF80)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x907FFA0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_GET_UNLOCKPROMOTION_OFFSET UNITYSDK_OFFSET(0x9080150)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_BELONGAETHERSPIRITID_OFFSET UNITYSDK_OFFSET(0x90801A0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_SKILLCOREDATA_OFFSET UNITYSDK_OFFSET(0x9080180)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x907FFD0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x907FF90)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x907FFB0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_SET_UNLOCKPROMOTION_OFFSET UNITYSDK_OFFSET(0x9080160)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x907FEC0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSINGLESLOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x907FEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherMonsterAvatarSkillSingleSlotData_TypeDefinitionIndex = 50538;

	class AetherMonsterAvatarSkillSingleSlotData : public ::System::Object
	{
	public:
		::RPG::GameCore::AetherPassiveSkillTypeRow* _SkillTypeRow; // 0x10
		::RPG::Client::AetherSkillCoreItemData* _SkillCoreData_k__BackingField; // 0x18
		::System::UInt32 _BelongAetherSpiritID_k__BackingField; // 0x20
		::System::UInt32 _SlotIndex_k__BackingField; // 0x24
		::System::UInt32 _UnlockPromotion_k__BackingField; // 0x28
		::RPG::GameCore::AetherPassiveSkillType _SkillType_k__BackingField; // 0x2C
		::RPG::Client::MonsterAvatarSkillSlotStatus _Status_k__BackingField; // 0x30

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
