#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MONOTIMELINETEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x933AB90)
#define MONOTIMELINETEST__CTOR_OFFSET UNITYSDK_OFFSET(0x933AE40)

inline static constexpr unsigned int MonoTimelineTest_TypeDefinitionIndex = 44312;

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
