#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9CFF7D0)
#define RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS43_0___ONFINISHSTAGEMAINMISSION_B__0_OFFSET UNITYSDK_OFFSET(0x9D16450)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyModule___c__DisplayClass43_0_TypeDefinitionIndex = 57424;

	class AlleyModule___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::UInt32 mainMissionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnFinishStageMainMission_b__0(::System::UInt32 missionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS43_0___ONFINISHSTAGEMAINMISSION_B__0_OFFSET))(this, missionID);
		}
	};
}
