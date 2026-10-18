#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1614;
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGACTIVITYPANELBRIDGE_ENTERLIGHTCONEREWARD_OFFSET UNITYSDK_OFFSET(0xC718220)
#define RPG_CLIENT_B51RACING_B51RACINGACTIVITYPANELBRIDGE_ENTERLIMITEDREWARD_OFFSET UNITYSDK_OFFSET(0xC718040)
#define RPG_CLIENT_B51RACING_B51RACINGACTIVITYPANELBRIDGE__RESOLVEMAINPAGESERVICE_OFFSET UNITYSDK_OFFSET(0xC7180C0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingActivityPanelBridge_TypeDefinitionIndex = 81953;

	class B51RacingActivityPanelBridge : public ::System::Object
	{
	public:
		static ::System::Void EnterLimitedReward()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGACTIVITYPANELBRIDGE_ENTERLIMITEDREWARD_OFFSET))();
		}

		static ::System::Void EnterLightConeReward()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGACTIVITYPANELBRIDGE_ENTERLIGHTCONEREWARD_OFFSET))();
		}

		static ::Class_0_16E4307DCC419505_1614* _ResolveMainPageService(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_1614*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGACTIVITYPANELBRIDGE__RESOLVEMAINPAGESERVICE_OFFSET))(a1);
		}
	};
}
