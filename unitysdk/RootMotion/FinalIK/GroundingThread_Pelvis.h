#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class GroundingThread; }

#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_PELVIS_PROCESS_OFFSET UNITYSDK_OFFSET(0x2A830)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundingThread_Pelvis_TypeDefinitionIndex = 35191;

	struct alignas(8) GroundingThread_Pelvis
	{
		::UnityEngine::Vector3 IKOffset; // 0x10
		::System::Single heightOffset; // 0x1C
		::RootMotion::FinalIK::GroundingThread* grounding; // 0x20
		::UnityEngine::Vector3 lastRootPosition; // 0x28
		::System::Single damperF; // 0x34
		::System::Single deltaTime; // 0x38

		::System::Void Process(::System::Single dt, ::System::Single lowestOffset, ::System::Single highestOffset, ::System::Boolean isGrounded)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_PELVIS_PROCESS_OFFSET))(this, dt, lowestOffset, highestOffset, isGrounded);
		}
	};
}
