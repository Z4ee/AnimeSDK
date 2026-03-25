#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActiveActivityData; }

#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_ACTIVEITEMNUM_OFFSET UNITYSDK_OFFSET(0x8ECF140)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_BENEFITID_OFFSET UNITYSDK_OFFSET(0x8ECF120)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_CANTAKE_OFFSET UNITYSDK_OFFSET(0x8ECF180)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_ISTAKEN_OFFSET UNITYSDK_OFFSET(0x8ECF1F0)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x8ECF160)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_SET_ACTIVEITEMNUM_OFFSET UNITYSDK_OFFSET(0x8ECF150)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_SET_BENEFITID_OFFSET UNITYSDK_OFFSET(0x8ECF130)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_SET_ISTAKEN_OFFSET UNITYSDK_OFFSET(0x8ECF200)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0x8ECF170)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8ECF010)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA__INITCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x8ECF0A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActiveActivityBenefitData_TypeDefinitionIndex = 49778;

	class ActiveActivityBenefitData : public ::System::Object
	{
	public:
		::RPG::Client::ActiveActivityData* _ActivityData; // 0x10
		::System::Boolean _IsTaken_k__BackingField; // 0x18
		::System::UInt32 _RewardID_k__BackingField; // 0x1C
		::System::UInt32 _ActiveItemNum_k__BackingField; // 0x20
		::System::UInt32 _BenefitID_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 benefitID, ::RPG::Client::ActiveActivityData* activityData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ActiveActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA__CTOR_OFFSET))(this, benefitID, activityData);
		}

		::System::UInt32 get_BenefitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_BENEFITID_OFFSET))(this);
		}

		::System::Void set_BenefitID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_SET_BENEFITID_OFFSET))(this, value);
		}

		::System::UInt32 get_ActiveItemNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_ACTIVEITEMNUM_OFFSET))(this);
		}

		::System::Void set_ActiveItemNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_SET_ACTIVEITEMNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::Void set_RewardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_SET_REWARDID_OFFSET))(this, value);
		}

		::System::Boolean get_CanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_CANTAKE_OFFSET))(this);
		}

		::System::Boolean get_IsTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_ISTAKEN_OFFSET))(this);
		}

		::System::Void set_IsTaken(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_SET_ISTAKEN_OFFSET))(this, value);
		}

		::System::Void _InitConfigData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA__INITCONFIGDATA_OFFSET))(this);
		}
	};
}
