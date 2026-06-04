#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xBA52450)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_HASSKILL_OFFSET UNITYSDK_OFFSET(0xBA52490)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISENABLEDASH_OFFSET UNITYSDK_OFFSET(0xBA52530)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISINDASHSTATE_OFFSET UNITYSDK_OFFSET(0xBA52550)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISSKILLUPGRADED_OFFSET UNITYSDK_OFFSET(0xBA52510)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLCURRENTCD_OFFSET UNITYSDK_OFFSET(0xBA524D0)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xBA524F0)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLTOTALCD_OFFSET UNITYSDK_OFFSET(0xBA524B0)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_HASSKILL_OFFSET UNITYSDK_OFFSET(0xBA524A0)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISENABLEDASH_OFFSET UNITYSDK_OFFSET(0xBA52540)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISINDASHSTATE_OFFSET UNITYSDK_OFFSET(0xBA52560)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISSKILLUPGRADED_OFFSET UNITYSDK_OFFSET(0xBA52520)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLCURRENTCD_OFFSET UNITYSDK_OFFSET(0xBA524E0)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xBA52500)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLTOTALCD_OFFSET UNITYSDK_OFFSET(0xBA524C0)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBA52440)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimSkillDisplayInfo_TypeDefinitionIndex = 60020;

	class FiveDimSkillDisplayInfo : public ::System::Object
	{
	public:
		::System::Single _SkillTotalCD_k__BackingField; // 0x10
		::System::UInt32 _SkillID_k__BackingField; // 0x14
		::System::Boolean _IsInDashState_k__BackingField; // 0x18
		::System::Boolean _HasSkill_k__BackingField; // 0x19
		::System::Boolean _IsSkillUpgraded_k__BackingField; // 0x1A
		::System::Boolean _IsEnableDash_k__BackingField; // 0x1B
		::System::Single _SkillCurrentCD_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FiveDimSkillDisplayInfo* Create()
		{
			return ((::RPG::Client::FiveDimSkillDisplayInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_CREATE_OFFSET))();
		}

		::System::Boolean get_HasSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_HASSKILL_OFFSET))(this);
		}

		::System::Void set_HasSkill(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_HASSKILL_OFFSET))(this, a1);
		}

		::System::Single get_SkillTotalCD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLTOTALCD_OFFSET))(this);
		}

		::System::Void set_SkillTotalCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLTOTALCD_OFFSET))(this, a1);
		}

		::System::Single get_SkillCurrentCD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLCURRENTCD_OFFSET))(this);
		}

		::System::Void set_SkillCurrentCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLCURRENTCD_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSkillUpgraded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISSKILLUPGRADED_OFFSET))(this);
		}

		::System::Void set_IsSkillUpgraded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISSKILLUPGRADED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnableDash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISENABLEDASH_OFFSET))(this);
		}

		::System::Void set_IsEnableDash(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISENABLEDASH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInDashState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISINDASHSTATE_OFFSET))(this);
		}

		::System::Void set_IsInDashState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISINDASHSTATE_OFFSET))(this, a1);
		}
	};
}
