#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define NPCCROWD_AI_ATTRACTORSLOTCONFIG_RESETDATA_OFFSET UNITYSDK_OFFSET(0x8243C0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorSlotConfig_TypeDefinitionIndex = 91228;

	struct alignas(4) AttractorSlotConfig
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C

		::System::Void ResetData(::UnityEngine::Transform* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORSLOTCONFIG_RESETDATA_OFFSET))(this, t);
		}
	};
}
