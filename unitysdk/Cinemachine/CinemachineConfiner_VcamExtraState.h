#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_CINEMACHINECONFINER_VCAMEXTRASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B7A870)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineConfiner_VcamExtraState_TypeDefinitionIndex = 36494;

	class CinemachineConfiner_VcamExtraState : public ::System::Object
	{
	public:
		::System::Single confinerDisplacement; // 0x10
		::UnityEngine::Vector3 m_previousDisplacement; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_VCAMEXTRASTATE__CTOR_OFFSET))(this);
		}
	};
}
