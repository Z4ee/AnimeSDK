#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define HIPPLENATTENTIONPOINTCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15ACE960)
#define HIPPLENATTENTIONPOINTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15ACF0D0)

inline static constexpr unsigned int HipplenAttentionPointController_TypeDefinitionIndex = 47659;

class HipplenAttentionPointController : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* camTrans; // 0x18
	::System::Single movSpeed; // 0x20
	::UnityEngine::Vector3 GGLGNGDEHFA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENATTENTIONPOINTCONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENATTENTIONPOINTCONTROLLER_UPDATE_OFFSET))(this);
	}
};
