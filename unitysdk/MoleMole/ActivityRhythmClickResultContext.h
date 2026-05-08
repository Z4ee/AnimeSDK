#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_11.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_ACTIVITYRHYTHMCLICKRESULTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11002B90)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityRhythmClickResultContext_TypeDefinitionIndex = 44097;

	class ActivityRhythmClickResultContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* onRestart; // 0x28
		::System::Action* onClose; // 0x30
		::Enum_3_96F6662CA3713095_11 Rank; // 0x38
		::System::Int32 PerfectNum; // 0x3C
		::System::Int32 MissNum; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYRHYTHMCLICKRESULTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
