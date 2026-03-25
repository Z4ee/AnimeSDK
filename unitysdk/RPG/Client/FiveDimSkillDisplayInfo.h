#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x96F6DB0)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_HASSKILL_OFFSET UNITYSDK_OFFSET(0x96F6DF0)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISENABLEDASH_OFFSET UNITYSDK_OFFSET(0x96F6E90)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISINDASHSTATE_OFFSET UNITYSDK_OFFSET(0x96F6EB0)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISSKILLUPGRADED_OFFSET UNITYSDK_OFFSET(0x96F6E70)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLCURRENTCD_OFFSET UNITYSDK_OFFSET(0x96F6E30)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x96F6E50)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLTOTALCD_OFFSET UNITYSDK_OFFSET(0x96F6E10)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_HASSKILL_OFFSET UNITYSDK_OFFSET(0x96F6E00)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISENABLEDASH_OFFSET UNITYSDK_OFFSET(0x96F6EA0)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISINDASHSTATE_OFFSET UNITYSDK_OFFSET(0x96F6EC0)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISSKILLUPGRADED_OFFSET UNITYSDK_OFFSET(0x96F6E80)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLCURRENTCD_OFFSET UNITYSDK_OFFSET(0x96F6E40)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x96F6E60)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLTOTALCD_OFFSET UNITYSDK_OFFSET(0x96F6E20)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x96F6DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimSkillDisplayInfo_TypeDefinitionIndex = 52140;

	class FiveDimSkillDisplayInfo : public ::System::Object
	{
	public:
		::System::Boolean _HasSkill_k__BackingField; // 0x10
		::System::Boolean _IsInDashState_k__BackingField; // 0x11
		::System::Boolean _IsEnableDash_k__BackingField; // 0x12
		::System::Boolean _IsSkillUpgraded_k__BackingField; // 0x13
		::System::Single _SkillCurrentCD_k__BackingField; // 0x14
		::System::UInt32 _SkillID_k__BackingField; // 0x18
		::System::Single _SkillTotalCD_k__BackingField; // 0x1C

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

		::System::Void set_HasSkill(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_HASSKILL_OFFSET))(this, value);
		}

		::System::Single get_SkillTotalCD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLTOTALCD_OFFSET))(this);
		}

		::System::Void set_SkillTotalCD(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLTOTALCD_OFFSET))(this, value);
		}

		::System::Single get_SkillCurrentCD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLCURRENTCD_OFFSET))(this);
		}

		::System::Void set_SkillCurrentCD(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLCURRENTCD_OFFSET))(this, value);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLID_OFFSET))(this, value);
		}

		::System::Boolean get_IsSkillUpgraded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISSKILLUPGRADED_OFFSET))(this);
		}

		::System::Void set_IsSkillUpgraded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISSKILLUPGRADED_OFFSET))(this, value);
		}

		::System::Boolean get_IsEnableDash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISENABLEDASH_OFFSET))(this);
		}

		::System::Void set_IsEnableDash(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISENABLEDASH_OFFSET))(this, value);
		}

		::System::Boolean get_IsInDashState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISINDASHSTATE_OFFSET))(this);
		}

		::System::Void set_IsInDashState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISINDASHSTATE_OFFSET))(this, value);
		}
	};
}
