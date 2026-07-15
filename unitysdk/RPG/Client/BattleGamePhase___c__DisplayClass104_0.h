#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_970269CBA5BC6359;

#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS104_0__CTOR_OFFSET UNITYSDK_OFFSET(0x174ACCA0)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS104_0__TRIGGERFRAMECAPTUREPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x174B4D20)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase___c__DisplayClass104_0_TypeDefinitionIndex = 58234;

	class BattleGamePhase___c__DisplayClass104_0 : public ::System::Object
	{
	public:
		::Class_2_970269CBA5BC6359* frameCapturePage; // 0x10

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
