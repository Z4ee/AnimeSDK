#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_GPUPARTICLEOCCLUDER_OBB__CTOR_OFFSET UNITYSDK_OFFSET(0x13C5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GpuParticleOccluder_OBB_TypeDefinitionIndex = 65260;

	struct alignas(8) GpuParticleOccluder_OBB
	{
		::UnityEngine::Vector3 center; // 0x10
		::UnityEngine::Vector3 size; // 0x1C
		::UnityEngine::Quaternion rotation; // 0x28
		::Il2CppArray<::UnityEngine::Vector3>* axes; // 0x38
		::UnityEngine::Vector3 extents; // 0x40

		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLEOCCLUDER_OBB__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
