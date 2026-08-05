#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOEFFECTBEHAVIORTESTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10F198F0)
#define MONOEFFECTBEHAVIORTESTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10F197F0)
#define MONOEFFECTBEHAVIORTESTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10F197B0)
#define MONOEFFECTBEHAVIORTESTER_START_OFFSET UNITYSDK_OFFSET(0x10F19730)
#define MONOEFFECTBEHAVIORTESTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x10F19770)
#define MONOEFFECTBEHAVIORTESTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10F19930)

inline static constexpr unsigned int MonoEffectBehaviorTester_TypeDefinitionIndex = 46628;

class MonoEffectBehaviorTester : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean isDestroyOnDisabled; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTBEHAVIORTESTER__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTBEHAVIORTESTER_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTBEHAVIORTESTER_UPDATE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTBEHAVIORTESTER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTBEHAVIORTESTER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTBEHAVIORTESTER_ONDESTROY_OFFSET))(this);
	}
};
