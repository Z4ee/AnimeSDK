#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_GETFAILHINTTEXT_OFFSET UNITYSDK_OFFSET(0x9B28240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_HASTRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x9B28330)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x9B28370)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_SHOULDTRIGGER_OFFSET UNITYSDK_OFFSET(0x9B282F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x9B283B0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int FailGuideDefaultImpl_TypeDefinitionIndex = 69440;

	class FailGuideDefaultImpl : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL__CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID GetFailHintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_GETFAILHINTTEXT_OFFSET))(this);
		}

		::System::Boolean ShouldTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_SHOULDTRIGGER_OFFSET))(this);
		}

		::System::Boolean HasTriggerAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_HASTRIGGERACTION_OFFSET))(this);
		}

		::System::Void OnTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDEFAULTIMPL_ONTRIGGER_OFFSET))(this);
		}
	};
}
