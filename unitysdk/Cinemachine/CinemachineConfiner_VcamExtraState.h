#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_CINEMACHINECONFINER_VCAMEXTRASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E29E120)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineConfiner_VcamExtraState_TypeDefinitionIndex = 34022;

	class CinemachineConfiner_VcamExtraState : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 m_previousDisplacement; // 0x10
		::System::Single confinerDisplacement; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_VCAMEXTRASTATE__CTOR_OFFSET))(this);
		}
	};
}
