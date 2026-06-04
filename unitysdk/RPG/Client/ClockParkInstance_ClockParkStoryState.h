#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseClockParkGameState.h"
#include "unitysdk/RPG/Client/ClockParkGameStateEnum.h"

#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0xB6E1AB0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE_ISSHOWATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0xB6E1BC0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E05C0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE__ONEXIT_OFFSET UNITYSDK_OFFSET(0xB6E1A10)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE___IFIXBASEPROXY_FINISHROUND_OFFSET UNITYSDK_OFFSET(0xB6E1C60)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE___IFIXBASEPROXY_ISSHOWATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0xB6E1CC0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE___IFIXBASEPROXY__ONEXIT_OFFSET UNITYSDK_OFFSET(0xB6E1C00)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkInstance_ClockParkStoryState_TypeDefinitionIndex = 57475;

	class ClockParkInstance_ClockParkStoryState : public ::RPG::Client::BaseClockParkGameState
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE__CTOR_OFFSET))(this);
		}

		::System::Void _OnExit(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE__ONEXIT_OFFSET))(this, a1);
		}

		::System::Boolean FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE_FINISHROUND_OFFSET))(this);
		}

		::System::Boolean IsShowAttributeInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE_ISSHOWATTRIBUTEINFO_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnExit(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE___IFIXBASEPROXY__ONEXIT_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE___IFIXBASEPROXY_FINISHROUND_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowAttributeInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE___IFIXBASEPROXY_ISSHOWATTRIBUTEINFO_OFFSET))(this);
		}
	};
}
