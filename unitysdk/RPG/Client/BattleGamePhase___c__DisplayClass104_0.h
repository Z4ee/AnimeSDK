#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_87EF8819722BA189;

#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS104_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC82CB20)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS104_0__TRIGGERFRAMECAPTUREPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xC834C30)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase___c__DisplayClass104_0_TypeDefinitionIndex = 60964;

	class BattleGamePhase___c__DisplayClass104_0 : public ::System::Object
	{
	public:
		::Class_2_87EF8819722BA189* frameCapturePage; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS104_0__CTOR_OFFSET))(this);
		}

		::System::Void _TriggerFrameCapturePage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS104_0__TRIGGERFRAMECAPTUREPAGE_B__0_OFFSET))(this);
		}
	};
}
