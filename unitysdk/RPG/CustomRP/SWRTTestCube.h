#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/SWRTTestCube_Consumer.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Shader; }

#define RPG_CUSTOMRP_SWRTTESTCUBE_GET_LOCALTOWORLD_OFFSET UNITYSDK_OFFSET(0x1CC74EF0)
#define RPG_CUSTOMRP_SWRTTESTCUBE_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1CC74CC0)
#define RPG_CUSTOMRP_SWRTTESTCUBE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CC75360)
#define RPG_CUSTOMRP_SWRTTESTCUBE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CC751C0)
#define RPG_CUSTOMRP_SWRTTESTCUBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC75460)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SWRTTestCube_TypeDefinitionIndex = 37872;

	class SWRTTestCube : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::CustomRP::SWRTTestCube_Consumer Mode; // 0x18
		::UnityEngine::ComputeShader* ComputeShader; // 0x20
		::UnityEngine::Shader* CaptureShader; // 0x28
		::UnityEngine::MeshFilter* _MeshFilter; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTTESTCUBE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_Mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTTESTCUBE_GET_MESH_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_LocalToWorld()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTTESTCUBE_GET_LOCALTOWORLD_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTTESTCUBE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTTESTCUBE_ONDISABLE_OFFSET))(this);
		}
	};
}
