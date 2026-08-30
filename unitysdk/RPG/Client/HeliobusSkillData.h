#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleActionEventRow; }
namespace RPG::GameCore { class HeliobusSkillRow; }

#define RPG_CLIENT_HELIOBUSSKILLDATA_GET_BATTLEACTIONDATA_OFFSET UNITYSDK_OFFSET(0xD3CDF50)
#define RPG_CLIENT_HELIOBUSSKILLDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD3CDF70)
#define RPG_CLIENT_HELIOBUSSKILLDATA_GET_SKILLDATA_OFFSET UNITYSDK_OFFSET(0xD3CDF30)
#define RPG_CLIENT_HELIOBUSSKILLDATA_SETSKILLUNLOCK_OFFSET UNITYSDK_OFFSET(0xD3C4CE0)
#define RPG_CLIENT_HELIOBUSSKILLDATA_SET_BATTLEACTIONDATA_OFFSET UNITYSDK_OFFSET(0xD3CDF60)
#define RPG_CLIENT_HELIOBUSSKILLDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD3CDF80)
#define RPG_CLIENT_HELIOBUSSKILLDATA_SET_SKILLDATA_OFFSET UNITYSDK_OFFSET(0xD3CDF40)
#define RPG_CLIENT_HELIOBUSSKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD3C4970)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusSkillData_TypeDefinitionIndex = 65738;

	class HeliobusSkillData : public ::System::Object
	{
	public:
		::RPG::GameCore::HeliobusSkillRow* _SkillData_k__BackingField; // 0x10
		::RPG::GameCore::BattleActionEventRow* _BattleActionData_k__BackingField; // 0x18
		::System::Boolean _IsUnlocked_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSKILLDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetSkillUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSKILLDATA_SETSKILLUNLOCK_OFFSET))(this, a1);
		}

		::RPG::GameCore::HeliobusSkillRow* get_SkillData()
		{
			return ((::RPG::GameCore::HeliobusSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSKILLDATA_GET_SKILLDATA_OFFSET))(this);
		}

		::System::Void set_SkillData(::RPG::GameCore::HeliobusSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HeliobusSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSKILLDATA_SET_SKILLDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleActionEventRow* get_BattleActionData()
		{
			return ((::RPG::GameCore::BattleActionEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSKILLDATA_GET_BATTLEACTIONDATA_OFFSET))(this);
		}

		::System::Void set_BattleActionData(::RPG::GameCore::BattleActionEventRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleActionEventRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSKILLDATA_SET_BATTLEACTIONDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSKILLDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSKILLDATA_SET_ISUNLOCKED_OFFSET))(this, a1);
		}
	};
}
