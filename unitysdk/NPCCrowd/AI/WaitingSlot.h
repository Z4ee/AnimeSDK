#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define NPCCROWD_AI_WAITINGSLOT_RESETDATA_OFFSET UNITYSDK_OFFSET(0xD87FCF0)
#define NPCCROWD_AI_WAITINGSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xD87FC40)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WaitingSlot_TypeDefinitionIndex = 69527;

	class WaitingSlot : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C
		::System::Single delay; // 0x2C
		::System::Single delayVariance; // 0x30

		::System::Void _ctor(::UnityEngine::Transform* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WAITINGSLOT__CTOR_OFFSET))(this, t);
		}

		::System::Void ResetData(::UnityEngine::Transform* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WAITINGSLOT_RESETDATA_OFFSET))(this, t);
		}
	};
}
