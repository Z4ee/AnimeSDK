#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_GET_HASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x9F467D0)
#define RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9F463E0)
#define RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_GET_ISPEAKNEW_OFFSET UNITYSDK_OFFSET(0x9F46620)
#define RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x9F46230)
#define RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x9F25680)
#define RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA_SETSEEN_OFFSET UNITYSDK_OFFSET(0x9F46270)
#define RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F25A00)
#define RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA___IFIXBASEPROXY_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x9F46970)
#define RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA___IFIXBASEPROXY_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x9F46A10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakActivityData_TypeDefinitionIndex = 56815;

	class ChallengePeakActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA__CTOR_OFFSET))(this, id);
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

		::System::Boolean __iFixBaseProxy_IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA___IFIXBASEPROXY_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __iFixBaseProxy_PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKACTIVITYDATA___IFIXBASEPROXY_PREPAREDATA_OFFSET))(this);
		}
	};
}
