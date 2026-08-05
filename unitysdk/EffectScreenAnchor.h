#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScreenXAnchorType.h"
#include "unitysdk/ScreenYAnchorType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }

#define EFFECTSCREENANCHOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x14D358F0)
#define EFFECTSCREENANCHOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x14D35930)
#define EFFECTSCREENANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x14D36090)

inline static constexpr unsigned int EffectScreenAnchor_TypeDefinitionIndex = 68347;

class EffectScreenAnchor : public ::UnityEngine::MonoBehaviour
{
public:
	::ScreenXAnchorType XAnchorType; // 0x18
	::ScreenYAnchorType YAnchorType; // 0x1C
	::System::Single XOffset; // 0x20
	::System::Single YOffset; // 0x24
	::UnityEngine::Camera* camera; // 0x28
	::Il2CppArray<::UnityEngine::Vector3>* corners; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTSCREENANCHOR__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTSCREENANCHOR_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTSCREENANCHOR_UPDATE_OFFSET))(this);
	}
};
