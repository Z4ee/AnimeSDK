#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MONOTIMELINETEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x88BEA80)
#define MONOTIMELINETEST__CTOR_OFFSET UNITYSDK_OFFSET(0x88BED30)

inline static constexpr unsigned int MonoTimelineTest_TypeDefinitionIndex = 38428;

class MonoTimelineTest : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::GameObject* template_; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOTIMELINETEST__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOTIMELINETEST_UPDATE_OFFSET))(this);
	}
};
