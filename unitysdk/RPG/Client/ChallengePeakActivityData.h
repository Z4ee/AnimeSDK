#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_GET_HASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1AD4FE30)
#define RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1AD4FA00)
#define RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_GET_ISPEAKNEW_OFFSET UNITYSDK_OFFSET(0x1AD4FC30)
#define RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x1AD4F4E0)
#define RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1AD4F520)
#define RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_SETSEEN_OFFSET UNITYSDK_OFFSET(0x1AD4F820)
#define RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD4F4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakActivityData_TypeDefinitionIndex = 61695;

	class ChallengePeakActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_PREPAREDATA_OFFSET))(this);
		}

		::System::Void SetSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_SETSEEN_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Boolean get_IsPeakNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_GET_ISPEAKNEW_OFFSET))(this);
		}

		::System::Boolean get_HasRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_GET_HASREWARDCANTAKE_OFFSET))(this);
		}
	};
}
