#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleTargetConfigRow; }

#define RPG_CLIENT_ACTIVITYSUMMONCHALLENGETARGET_CREATE_OFFSET UNITYSDK_OFFSET(0x9C60930)
#define RPG_CLIENT_ACTIVITYSUMMONCHALLENGETARGET_GET_HASCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9C60910)
#define RPG_CLIENT_ACTIVITYSUMMONCHALLENGETARGET_GET_ID_OFFSET UNITYSDK_OFFSET(0x9C60870)
#define RPG_CLIENT_ACTIVITYSUMMONCHALLENGETARGET_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9C60890)
#define RPG_CLIENT_ACTIVITYSUMMONCHALLENGETARGET_GET_SIMPLENAME_OFFSET UNITYSDK_OFFSET(0x9C608C0)
#define RPG_CLIENT_ACTIVITYSUMMONCHALLENGETARGET_GET_TARGETPARAM_OFFSET UNITYSDK_OFFSET(0x9C608F0)
#define RPG_CLIENT_ACTIVITYSUMMONCHALLENGETARGET_SET_HASCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9C60920)
#define RPG_CLIENT_ACTIVITYSUMMONCHALLENGETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x9C609E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySummonChallengeTarget_TypeDefinitionIndex = 57113;

	class ActivitySummonChallengeTarget : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleTargetConfigRow* _Meta; // 0x10
		::System::Boolean _HasCompleted_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::BattleTargetConfigRow* meta)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONCHALLENGETARGET__CTOR_OFFSET))(this, meta);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONCHALLENGETARGET_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONCHALLENGETARGET_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_SimpleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONCHALLENGETARGET_GET_SIMPLENAME_OFFSET))(this);
		}

		::System::UInt32 get_TargetParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONCHALLENGETARGET_GET_TARGETPARAM_OFFSET))(this);
		}

		::System::Boolean get_HasCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONCHALLENGETARGET_GET_HASCOMPLETED_OFFSET))(this);
		}

		::System::Void set_HasCompleted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONCHALLENGETARGET_SET_HASCOMPLETED_OFFSET))(this, value);
		}

		static ::RPG::Client::ActivitySummonChallengeTarget* Create(::System::UInt32 id, ::System::Boolean hasCompleted)
		{
			return ((::RPG::Client::ActivitySummonChallengeTarget*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONCHALLENGETARGET_CREATE_OFFSET))(id, hasCompleted);
		}
	};
}
