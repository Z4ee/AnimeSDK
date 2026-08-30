#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/DepthTextureMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }

#define SETCAMERADEPTHNORMALRENDERMODE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E55BEE0)
#define SETCAMERADEPTHNORMALRENDERMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E55BF10)

inline static constexpr unsigned int SetCameraDepthNormalRenderMode_TypeDefinitionIndex = 42300;

class SetCameraDepthNormalRenderMode : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::DepthTextureMode renderMode; // 0x18
	::UnityEngine::Camera* depthCamera; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETCAMERADEPTHNORMALRENDERMODE__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETCAMERADEPTHNORMALRENDERMODE_ONENABLE_OFFSET))(this);
	}
};
