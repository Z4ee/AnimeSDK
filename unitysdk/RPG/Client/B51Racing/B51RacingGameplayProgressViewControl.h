#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYPROGRESSVIEWCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC881F30)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYPROGRESSVIEWCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC881E40)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingGameplayProgressViewControl_TypeDefinitionIndex = 80569;

	class B51RacingGameplayProgressViewControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYPROGRESSVIEWCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYPROGRESSVIEWCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}
	};
}
