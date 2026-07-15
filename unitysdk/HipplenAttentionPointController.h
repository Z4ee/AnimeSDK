#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define HIPPLENATTENTIONPOINTCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17A5B6D0)
#define HIPPLENATTENTIONPOINTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5BE40)

inline static constexpr unsigned int HipplenAttentionPointController_TypeDefinitionIndex = 45409;

class HipplenAttentionPointController : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* camTrans; // 0x18
	::System::Single movSpeed; // 0x20
	::UnityEngine::Vector3 Field_5_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENATTENTIONPOINTCONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENATTENTIONPOINTCONTROLLER_UPDATE_OFFSET))(this);
	}
};
