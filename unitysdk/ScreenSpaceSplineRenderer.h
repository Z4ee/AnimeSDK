#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define SCREENSPACESPLINERENDERER_CALCULATEARRAYSIZES_OFFSET UNITYSDK_OFFSET(0x18B487C0)
#define SCREENSPACESPLINERENDERER_CALCULATEBEZIERPOINT_OFFSET UNITYSDK_OFFSET(0x18B48470)
#define SCREENSPACESPLINERENDERER_CALCULATEBEZIERTANGENT_OFFSET UNITYSDK_OFFSET(0x18B485D0)
#define SCREENSPACESPLINERENDERER_GENERATESPLINEMESH_OFFSET UNITYSDK_OFFSET(0x18B46AA0)
#define SCREENSPACESPLINERENDERER_GETPROJECTEDWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x18B48320)
#define SCREENSPACESPLINERENDERER_INIT_OFFSET UNITYSDK_OFFSET(0x18B47D30)
#define SCREENSPACESPLINERENDERER_ONBEGINCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0x18B46A40)
#define SCREENSPACESPLINERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18B469F0)
#define SCREENSPACESPLINERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18B468D0)
#define SCREENSPACESPLINERENDERER_REGISTERRENDERING_OFFSET UNITYSDK_OFFSET(0x18B46920)
#define SCREENSPACESPLINERENDERER_SETUPTARGETS_OFFSET UNITYSDK_OFFSET(0x18B47CD0)
#define SCREENSPACESPLINERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x18B488C0)

inline static constexpr unsigned int ScreenSpaceSplineRenderer_TypeDefinitionIndex = 65831;

class ScreenSpaceSplineRenderer : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* enemy; // 0x18
	::UnityEngine::Transform* player; // 0x20
	::System::Single enemyHeightOffset; // 0x28
	::System::Single playerHeightOffset; // 0x2C
	::System::Single width; // 0x30
	::System::Int32 segments; // 0x34
	::System::Single handleHeight; // 0x38
	::System::Single handleRange; // 0x3C
	::System::Single fadeStartDistance; // 0x40
	::System::Single fadeRange; // 0x44
	::System::Single minAlpha; // 0x48
	::System::Single curveDepthOffset; // 0x4C
	::UnityEngine::MeshFilter* meshFilter; // 0x50
	::UnityEngine::MeshRenderer* meshRenderer; // 0x58
	::UnityEngine::Vector3 enemyPos; // 0x60
	::UnityEngine::Vector3 playerPos; // 0x6C
	::UnityEngine::Vector3 handlePos; // 0x78
	::UnityEngine::Vector3 enemyScreenPos; // 0x84
	::UnityEngine::Vector3 playerScreenPos; // 0x90
	::UnityEngine::Vector3 handleScreenPos; // 0x9C
	::Il2CppArray<::UnityEngine::Vector3>* vertices; // 0xA8
	::Il2CppArray<::UnityEngine::Vector2>* uv; // 0xB0
	::Il2CppArray<::UnityEngine::Color>* color; // 0xB8
	::Il2CppArray<::System::Int32>* triangles; // 0xC0
	::UnityEngine::Camera* cam; // 0xC8
	::System::Boolean finishInitialized; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESPLINERENDERER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESPLINERENDERER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESPLINERENDERER_ONDISABLE_OFFSET))(this);
	}

	::System::Void RegisterRendering(::System::Boolean add)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SCREENSPACESPLINERENDERER_REGISTERRENDERING_OFFSET))(this, add);
	}

	::System::Void OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* renderingCamera)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + SCREENSPACESPLINERENDERER_ONBEGINCAMERARENDERING_OFFSET))(this, context, renderingCamera);
	}

	::System::Void SetupTargets(::UnityEngine::Transform* enemyTarget, ::UnityEngine::Transform* playerTarget)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SCREENSPACESPLINERENDERER_SETUPTARGETS_OFFSET))(this, enemyTarget, playerTarget);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESPLINERENDERER_INIT_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetProjectedWorldPosition(::UnityEngine::Vector3 worldPos, ::UnityEngine::Vector3 camPos, ::System::Single distance)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + SCREENSPACESPLINERENDERER_GETPROJECTEDWORLDPOSITION_OFFSET))(this, worldPos, camPos, distance);
	}

	::UnityEngine::Vector3 CalculateBezierPoint(::System::Single t, ::UnityEngine::Vector3 enemyPosition, ::UnityEngine::Vector3 playerPosition, ::UnityEngine::Vector3 handlePosition)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SCREENSPACESPLINERENDERER_CALCULATEBEZIERPOINT_OFFSET))(this, t, enemyPosition, playerPosition, handlePosition);
	}

	::UnityEngine::Vector3 CalculateBezierTangent(::System::Single t, ::UnityEngine::Vector3 enemyPosition, ::UnityEngine::Vector3 playerPosition, ::UnityEngine::Vector3 handlePosition)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SCREENSPACESPLINERENDERER_CALCULATEBEZIERTANGENT_OFFSET))(this, t, enemyPosition, playerPosition, handlePosition);
	}

	::System::Void CalculateArraySizes()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESPLINERENDERER_CALCULATEARRAYSIZES_OFFSET))(this);
	}

	::System::Void GenerateSplineMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESPLINERENDERER_GENERATESPLINEMESH_OFFSET))(this);
	}
};
