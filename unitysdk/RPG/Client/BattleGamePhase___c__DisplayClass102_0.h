#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_55150D564CCC46D3;

#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS102_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB3F0CA0)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS102_0__TRIGGERFRAMECAPTUREPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xB3F8720)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase___c__DisplayClass102_0_TypeDefinitionIndex = 56987;

	class BattleGamePhase___c__DisplayClass102_0 : public ::System::Object
	{
	public:
		::Class_2_55150D564CCC46D3* frameCapturePage; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS102_0__CTOR_OFFSET))(this);
		}

		::System::Void _TriggerFrameCapturePage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS102_0__TRIGGERFRAMECAPTUREPAGE_B__0_OFFSET))(this);
		}
	};
}
