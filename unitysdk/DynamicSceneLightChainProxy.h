#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Light; }

#define DYNAMICSCENELIGHTCHAINPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B7E1BD0)
#define DYNAMICSCENELIGHTCHAINPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B7E1B50)
#define DYNAMICSCENELIGHTCHAINPROXY_TRIGGERLIGHT_OFFSET UNITYSDK_OFFSET(0x1B7E1C50)
#define DYNAMICSCENELIGHTCHAINPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E1D00)

inline static constexpr unsigned int DynamicSceneLightChainProxy_TypeDefinitionIndex = 26351;

class DynamicSceneLightChainProxy : public ::UnityEngine::MonoBehaviour
{
public:
	::Il2CppArray<::UnityEngine::Light*>* m_DyanmicLights; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICSCENELIGHTCHAINPROXY__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICSCENELIGHTCHAINPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICSCENELIGHTCHAINPROXY_ONDISABLE_OFFSET))(this);
	}

	::System::Void TriggerLight(::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DYNAMICSCENELIGHTCHAINPROXY_TRIGGERLIGHT_OFFSET))(this, enable);
	}
};
