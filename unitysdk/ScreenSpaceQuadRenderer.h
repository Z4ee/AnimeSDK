#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define SCREENSPACEQUADRENDERER_GENERATEQUADMESH_OFFSET UNITYSDK_OFFSET(0x1BF4DCB0)
#define SCREENSPACEQUADRENDERER_GETPROJECTEDWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1BF4F5B0)
#define SCREENSPACEQUADRENDERER_INIT_OFFSET UNITYSDK_OFFSET(0x1BF4EB30)
#define SCREENSPACEQUADRENDERER_ONBEGINCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0x1BF4DC50)
#define SCREENSPACEQUADRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BF4DC00)
#define SCREENSPACEQUADRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BF4DAE0)
#define SCREENSPACEQUADRENDERER_REGISTERRENDERING_OFFSET UNITYSDK_OFFSET(0x1BF4DB30)
#define SCREENSPACEQUADRENDERER_SETUPTARGET_OFFSET UNITYSDK_OFFSET(0x1BF4EAE0)
#define SCREENSPACEQUADRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF4F720)

inline static constexpr unsigned int ScreenSpaceQuadRenderer_TypeDefinitionIndex = 50524;

class ScreenSpaceQuadRenderer : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* target; // 0x18
	::System::Single targetHeightOffset; // 0x20
	::System::Single sizeNear; // 0x24
	::System::Single sizeFar; // 0x28
	::System::Single rotation; // 0x2C
	::System::Single fadeStartDistance; // 0x30
	::System::Single fadeRange; // 0x34
	::System::Single minAlpha; // 0x38
	::System::Single curveDepthOffset; // 0x3C
	::UnityEngine::MeshFilter* meshFilter; // 0x40
	::UnityEngine::MeshRenderer* meshRenderer; // 0x48
	::UnityEngine::Vector3 targetPos; // 0x50
	::Il2CppArray<::UnityEngine::Vector3>* vertices; // 0x60
	::Il2CppArray<::UnityEngine::Color>* color; // 0x68
	::Il2CppArray<::System::Int32>* triangles; // 0x70
	::UnityEngine::Camera* cam; // 0x78
	::System::Boolean finishInitialized; // 0x80
	::System::Single worldDistToCam; // 0x84
	::UnityEngine::Color vertexColor; // 0x88
	::System::Int32 _QuadWorldCenter; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEQUADRENDERER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEQUADRENDERER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEQUADRENDERER_ONDISABLE_OFFSET))(this);
	}

	::System::Void RegisterRendering(::System::Boolean add)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SCREENSPACEQUADRENDERER_REGISTERRENDERING_OFFSET))(this, add);
	}

	::System::Void OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* renderingCamera)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + SCREENSPACEQUADRENDERER_ONBEGINCAMERARENDERING_OFFSET))(this, context, renderingCamera);
	}

	::System::Void SetupTarget(::UnityEngine::Transform* selectedTarget)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SCREENSPACEQUADRENDERER_SETUPTARGET_OFFSET))(this, selectedTarget);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEQUADRENDERER_INIT_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetProjectedWorldPosition(::UnityEngine::Vector3 worldPos, ::UnityEngine::Vector3 camPos, ::System::Single distance)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + SCREENSPACEQUADRENDERER_GETPROJECTEDWORLDPOSITION_OFFSET))(this, worldPos, camPos, distance);
	}

	::System::Void GenerateQuadMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEQUADRENDERER_GENERATEQUADMESH_OFFSET))(this);
	}
};
