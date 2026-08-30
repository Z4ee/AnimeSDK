#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }

#define PATRENDERER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC0F2310)
#define PATRENDERER_METHOD_5_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xC0F26E0)
#define PATRENDERER_METHOD_5_6E3DEABB1FC191BB_OFFSET UNITYSDK_OFFSET(0xC0F1C80)
#define PATRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC0F2B60)
#define PATRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC0F1D00)
#define PATRENDERER_RESET_OFFSET UNITYSDK_OFFSET(0xC0F1D50)
#define PATRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0xC0F2C50)

inline static constexpr unsigned int PATRenderer_TypeDefinitionIndex = 47902;

class PATRenderer : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Mesh* TargetMesh; // 0x18
	::UnityEngine::Material* TargetMat; // 0x20
	::Il2CppArray<::UnityEngine::Material*>* TargetMats; // 0x28
	::UnityEngine::Texture2D* Position; // 0x30
	::UnityEngine::Texture2D* Scale; // 0x38
	::UnityEngine::Texture2D* Orient; // 0x40
	::UnityEngine::Texture2D* Custom; // 0x48
	::System::Int32 ParticleCount; // 0x50
	::UnityEngine::Vector3 BoundMin; // 0x54
	::UnityEngine::Vector3 BoundMax; // 0x60
	::UnityEngine::Vector3 MaxScale; // 0x6C
	::System::Int32 TotalFrameTime; // 0x78
	::System::Single TimeLocation; // 0x7C
	::UnityEngine::MaterialPropertyBlock* _MPB; // 0x80
	::Il2CppArray<::System::UInt32>* PIOLMHLFNPF; // 0x88
	::UnityEngine::ComputeBuffer* NBACOLFCKBI; // 0x90
	::UnityEngine::Bounds PDLBPLDNKEH; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATRENDERER__CTOR_OFFSET))(this);
	}

	::UnityEngine::Camera* Method_5_6E3DEABB1FC191BB()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + PATRENDERER_METHOD_5_6E3DEABB1FC191BB_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATRENDERER_ONENABLE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATRENDERER_LATEUPDATE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATRENDERER_ONDISABLE_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATRENDERER_RESET_OFFSET))(this);
	}

	::System::Void Method_5_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATRENDERER_METHOD_5_4EA6B1791DACA9CC_OFFSET))(this);
	}
};
