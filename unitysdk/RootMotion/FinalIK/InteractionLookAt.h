#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class LookAtIK; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_INTERACTIONLOOKAT_LOOK_OFFSET UNITYSDK_OFFSET(0x1FA5ADD0)
#define ROOTMOTION_FINALIK_INTERACTIONLOOKAT_ONFIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1FA5B170)
#define ROOTMOTION_FINALIK_INTERACTIONLOOKAT_SOLVEHEAD_OFFSET UNITYSDK_OFFSET(0x1FA5B8E0)
#define ROOTMOTION_FINALIK_INTERACTIONLOOKAT_SOLVESPINE_OFFSET UNITYSDK_OFFSET(0x1FA5B6F0)
#define ROOTMOTION_FINALIK_INTERACTIONLOOKAT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FA5B2E0)
#define ROOTMOTION_FINALIK_INTERACTIONLOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA5BAD0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionLookAt_TypeDefinitionIndex = 38843;

	class InteractionLookAt : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::LookAtIK* ik; // 0x10
		::System::Single lerpSpeed; // 0x18
		::System::Single weightSpeed; // 0x1C
		::System::Boolean isPaused; // 0x20
		::UnityEngine::Transform* lookAtTarget; // 0x28
		::System::Single stopLookTime; // 0x30
		::System::Single weight; // 0x34
		::System::Boolean firstFBBIKSolve; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONLOOKAT__CTOR_OFFSET))(this);
		}

		::System::Void Look(::UnityEngine::Transform* target, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONLOOKAT_LOOK_OFFSET))(this, target, time);
		}

		::System::Void OnFixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONLOOKAT_ONFIXTRANSFORMS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONLOOKAT_UPDATE_OFFSET))(this);
		}

		::System::Void SolveSpine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONLOOKAT_SOLVESPINE_OFFSET))(this);
		}

		::System::Void SolveHead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONLOOKAT_SOLVEHEAD_OFFSET))(this);
		}
	};
}
