#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActiveActivityData; }

#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_ACTIVEITEMNUM_OFFSET UNITYSDK_OFFSET(0xB080D30)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_BENEFITID_OFFSET UNITYSDK_OFFSET(0xB080D10)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_CANTAKE_OFFSET UNITYSDK_OFFSET(0xB080D70)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_ISTAKEN_OFFSET UNITYSDK_OFFSET(0xB080DE0)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xB080D50)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_SET_ACTIVEITEMNUM_OFFSET UNITYSDK_OFFSET(0xB080D40)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_SET_BENEFITID_OFFSET UNITYSDK_OFFSET(0xB080D20)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_SET_ISTAKEN_OFFSET UNITYSDK_OFFSET(0xB080DF0)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0xB080D60)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB080C00)
#define RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA__INITCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xB080C90)

namespace RPG::Client
{
	inline static constexpr unsigned int ActiveActivityBenefitData_TypeDefinitionIndex = 57377;

	class ActiveActivityBenefitData : public ::System::Object
	{
	public:
		::RPG::Client::ActiveActivityData* _ActivityData; // 0x10
		::System::UInt32 _ActiveItemNum_k__BackingField; // 0x18
		::System::Boolean _IsTaken_k__BackingField; // 0x1C
		::System::UInt32 _BenefitID_k__BackingField; // 0x20
		::System::UInt32 _RewardID_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::ActiveActivityData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ActiveActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_BenefitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_BENEFITID_OFFSET))(this);
		}

		::System::Void set_BenefitID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_SET_BENEFITID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActiveItemNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_ACTIVEITEMNUM_OFFSET))(this);
		}

		::System::Void set_ActiveItemNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_SET_ACTIVEITEMNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::Void set_RewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_SET_REWARDID_OFFSET))(this, a1);
		}

		::System::Boolean get_CanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_CANTAKE_OFFSET))(this);
		}

		::System::Boolean get_IsTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_GET_ISTAKEN_OFFSET))(this);
		}

		::System::Void set_IsTaken(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA_SET_ISTAKEN_OFFSET))(this, a1);
		}

		::System::Void _InitConfigData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYBENEFITDATA__INITCONFIGDATA_OFFSET))(this);
		}
	};
}
