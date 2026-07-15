#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORBEHAVIOR_TRANSFORMOPERATOR_GET_RELIVEINGDURATION_OFFSET UNITYSDK_OFFSET(0x17B43FB0)
#define RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORBEHAVIOR_TRANSFORMOPERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17B44AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyEmotionOperatorBehavior_TransformOperator_TypeDefinitionIndex = 67765;

	class StageHarmonyEmotionOperatorBehavior_TransformOperator : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* scallingTarget; // 0x10
		::UnityEngine::Vector3 startPosition; // 0x18
		::UnityEngine::Vector3 startRotation; // 0x24
		::UnityEngine::Vector3 startScale; // 0x30
		::UnityEngine::Vector3 defaultPosition; // 0x3C
		::UnityEngine::Vector3 defaultRotation; // 0x48
		::UnityEngine::Vector3 defaultScale; // 0x54
		::System::Single engagineDistance; // 0x60
		::UnityEngine::AnimationCurve* engagineProgress; // 0x68
		::System::Single engagingDuration; // 0x70
		::UnityEngine::AnimationCurve* reliveingProgress; // 0x78
		::System::Single reliveingDuration; // 0x80
		::UnityEngine::GameObject* AudioSource; // 0x88
		::System::Single AudioThreshold; // 0x90
		::System::Boolean AudioEventTriggered; // 0x94
		::System::Boolean rePlayFlipBookOnEngage; // 0x95
		::System::Int32 engagingStatus; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORBEHAVIOR_TRANSFORMOPERATOR__CTOR_OFFSET))(this);
		}

		::System::Single get_ReliveingDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORBEHAVIOR_TRANSFORMOPERATOR_GET_RELIVEINGDURATION_OFFSET))(this);
		}
	};
}
