#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"

class Class_1_947F5BB3E2AFC4CE;

#define CLASS_1_02F5E36EB5FF4E03___C__DISPLAYCLASS9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10923090)
#define CLASS_1_02F5E36EB5FF4E03___C__DISPLAYCLASS9_1__PLAYTIMELINE_B__1_OFFSET UNITYSDK_OFFSET(0x109256A0)

inline static constexpr unsigned int Class_1_02F5E36EB5FF4E03___c__DisplayClass9_1_TypeDefinitionIndex = 39292;

class Class_1_02F5E36EB5FF4E03___c__DisplayClass9_1 : public ::System::Object
{
public:
	::UnityEngine::Playables::PlayableBinding playableBinding; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F5E36EB5FF4E03___C__DISPLAYCLASS9_1__CTOR_OFFSET))(this);
	}

	::System::Boolean _PlayTimeline_b__1(::Class_1_947F5BB3E2AFC4CE* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_947F5BB3E2AFC4CE*))((::PBYTE)hIl2Cpp + CLASS_1_02F5E36EB5FF4E03___C__DISPLAYCLASS9_1__PLAYTIMELINE_B__1_OFFSET))(this, x);
	}
};
