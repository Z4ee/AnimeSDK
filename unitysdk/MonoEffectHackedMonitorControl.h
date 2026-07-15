#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Renderer; }

#define MONOEFFECTHACKEDMONITORCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x186F4B50)
#define MONOEFFECTHACKEDMONITORCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x186F4C50)

inline static constexpr unsigned int MonoEffectHackedMonitorControl_TypeDefinitionIndex = 45669;

class MonoEffectHackedMonitorControl : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single hackedProgress; // 0x18
	::Il2CppArray<::UnityEngine::Renderer*>* Renderer; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTHACKEDMONITORCONTROL__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTHACKEDMONITORCONTROL_UPDATE_OFFSET))(this);
	}
};
