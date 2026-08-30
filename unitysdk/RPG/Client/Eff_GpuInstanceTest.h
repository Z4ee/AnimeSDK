#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_EFF_GPUINSTANCETEST_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCDBE1D0)
#define RPG_CLIENT_EFF_GPUINSTANCETEST_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCDBDB90)
#define RPG_CLIENT_EFF_GPUINSTANCETEST__CTOR_OFFSET UNITYSDK_OFFSET(0xCDBE2E0)

namespace RPG::Client
{
	inline static constexpr unsigned int Eff_GpuInstanceTest_TypeDefinitionIndex = 70367;

	class Eff_GpuInstanceTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 instanceNum; // 0x18
		::System::Int32 Range; // 0x1C
		::UnityEngine::GameObject* Go; // 0x20
		::UnityEngine::Material* mat; // 0x28
		::System::Single AniTime; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* DEOMNJNDJLP; // 0x38
		::System::Collections::Generic::List_1<::System::Single>* GFDJMOODMOJ; // 0x40
		::UnityEngine::Mesh* BCHHLPKOMCK; // 0x48
		::UnityEngine::MaterialPropertyBlock* BMCPFHADPKJ; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_GPUINSTANCETEST__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_GPUINSTANCETEST_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_GPUINSTANCETEST_LATEUPDATE_OFFSET))(this);
		}
	};
}
