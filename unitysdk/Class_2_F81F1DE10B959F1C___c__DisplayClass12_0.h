#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"

class Class_1_947F5BB3E2AFC4CE;

#define CLASS_2_F81F1DE10B959F1C___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17612A40)
#define CLASS_2_F81F1DE10B959F1C___C__DISPLAYCLASS12_0___ONTIMELINEBIND_B__0_OFFSET UNITYSDK_OFFSET(0x17612A50)

inline static constexpr unsigned int Class_2_F81F1DE10B959F1C___c__DisplayClass12_0_TypeDefinitionIndex = 55375;

class Class_2_F81F1DE10B959F1C___c__DisplayClass12_0 : public ::System::Object
{
public:
	::UnityEngine::Playables::PlayableBinding playableBinding; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnTimelineBind_b__0(::Class_1_947F5BB3E2AFC4CE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_947F5BB3E2AFC4CE*))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C___C__DISPLAYCLASS12_0___ONTIMELINEBIND_B__0_OFFSET))(this, a1);
	}
};
