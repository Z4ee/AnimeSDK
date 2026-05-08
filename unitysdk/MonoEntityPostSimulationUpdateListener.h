#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define MONOENTITYPOSTSIMULATIONUPDATELISTENER_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x13B4BCE0)
#define MONOENTITYPOSTSIMULATIONUPDATELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4BD30)

inline static constexpr unsigned int MonoEntityPostSimulationUpdateListener_TypeDefinitionIndex = 60220;

class MonoEntityPostSimulationUpdateListener : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Action* afterSimulationsUpdateCallBack; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOENTITYPOSTSIMULATIONUPDATELISTENER__CTOR_OFFSET))(this);
	}

	::System::Void PostSimulationUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOENTITYPOSTSIMULATIONUPDATELISTENER_POSTSIMULATIONUPDATE_OFFSET))(this);
	}
};
