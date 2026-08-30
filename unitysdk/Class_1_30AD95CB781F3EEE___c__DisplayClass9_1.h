#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"

class Class_1_947F5BB3E2AFC4CE;

#define CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC27F0)
#define CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS9_1__PLAYTIMELINE_B__1_OFFSET UNITYSDK_OFFSET(0x18DC5860)

inline static constexpr unsigned int Class_1_30AD95CB781F3EEE___c__DisplayClass9_1_TypeDefinitionIndex = 48943;

class Class_1_30AD95CB781F3EEE___c__DisplayClass9_1 : public ::System::Object
{
public:
	::UnityEngine::Playables::PlayableBinding playableBinding; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS9_1__CTOR_OFFSET))(this);
	}

	::System::Boolean _PlayTimeline_b__1(::Class_1_947F5BB3E2AFC4CE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_947F5BB3E2AFC4CE*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS9_1__PLAYTIMELINE_B__1_OFFSET))(this, a1);
	}
};
