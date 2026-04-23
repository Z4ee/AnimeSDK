#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"

class Class_1_947F5BB3E2AFC4CE;

#define CLASS_2_D533150DA9942A27___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11851C30)
#define CLASS_2_D533150DA9942A27___C__DISPLAYCLASS7_0___BINDINGDIRECTOR_B__0_OFFSET UNITYSDK_OFFSET(0x11851C40)

inline static constexpr unsigned int Class_2_D533150DA9942A27___c__DisplayClass7_0_TypeDefinitionIndex = 51964;

class Class_2_D533150DA9942A27___c__DisplayClass7_0 : public ::System::Object
{
public:
	::UnityEngine::Playables::PlayableBinding playableBinding; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __BindingDirector_b__0(::Class_1_947F5BB3E2AFC4CE* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_947F5BB3E2AFC4CE*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27___C__DISPLAYCLASS7_0___BINDINGDIRECTOR_B__0_OFFSET))(this, x);
	}
};
