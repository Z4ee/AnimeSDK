#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GpuParticleOccluder_OBB.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_GPUPARTICLEOCCLUDER_METHOD_5_062295FD6E4F57FD_OFFSET UNITYSDK_OFFSET(0xBAD4960)
#define RPG_CLIENT_GPUPARTICLEOCCLUDER_METHOD_5_CF00617FE35FAA7C_OFFSET UNITYSDK_OFFSET(0xBAD4AA0)
#define RPG_CLIENT_GPUPARTICLEOCCLUDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBAD48C0)
#define RPG_CLIENT_GPUPARTICLEOCCLUDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBAD42D0)
#define RPG_CLIENT_GPUPARTICLEOCCLUDER_REFRESHDISTANCETOCAMERA_OFFSET UNITYSDK_OFFSET(0xBAD4D20)
#define RPG_CLIENT_GPUPARTICLEOCCLUDER__CTOR_OFFSET UNITYSDK_OFFSET(0xBAD4F60)

namespace RPG::Client
{
	inline static constexpr unsigned int GpuParticleOccluder_TypeDefinitionIndex = 65259;

	class GpuParticleOccluder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single DistanceToCamera; // 0x18
		::RPG::Client::GpuParticleOccluder_OBB Field_5_1; // 0x20
		::UnityEngine::Matrix4x4 WorldToCccluder; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLEOCCLUDER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLEOCCLUDER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLEOCCLUDER_ONDISABLE_OFFSET))(this);
		}

		::System::Single Method_5_062295FD6E4F57FD(::RPG::Client::GpuParticleOccluder_OBB a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::GpuParticleOccluder_OBB, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLEOCCLUDER_METHOD_5_062295FD6E4F57FD_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_5_CF00617FE35FAA7C(::RPG::Client::GpuParticleOccluder_OBB a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::GpuParticleOccluder_OBB, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLEOCCLUDER_METHOD_5_CF00617FE35FAA7C_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshDistanceToCamera(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLEOCCLUDER_REFRESHDISTANCETOCAMERA_OFFSET))(this, a1);
		}
	};
}
