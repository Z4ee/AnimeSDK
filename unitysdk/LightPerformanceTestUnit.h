#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LightPerformanceTestUnit_MainLightState.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define LIGHTPERFORMANCETESTUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA81D0)

inline static constexpr unsigned int LightPerformanceTestUnit_TypeDefinitionIndex = 45528;

class LightPerformanceTestUnit : public ::System::Object
{
public:
	::UnityEngine::GameObject* TargetPrefab; // 0x10
	::System::String* BaseInfo; // 0x18
	::System::Int32 OverdrawRatio; // 0x20
	::LightPerformanceTestUnit_MainLightState BaseMainLightState; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTPERFORMANCETESTUNIT__CTOR_OFFSET))(this);
	}
};
