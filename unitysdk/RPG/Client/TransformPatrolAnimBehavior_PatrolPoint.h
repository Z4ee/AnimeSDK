#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TransformPatrolAnimBehavior_AdditionalActionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_PATROLPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB374470)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_PATROLPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xB371240)

namespace RPG::Client
{
	inline static constexpr unsigned int TransformPatrolAnimBehavior_PatrolPoint_TypeDefinitionIndex = 64841;

	class TransformPatrolAnimBehavior_PatrolPoint : public ::System::Object
	{
	public:
		::System::Single Position; // 0x10
		::System::Single StayTime; // 0x14
		::UnityEngine::Vector2 AccelerationRange; // 0x18
		::System::Single AccelerationPower; // 0x20
		::RPG::Client::TransformPatrolAnimBehavior_AdditionalActionType AdditionalAction; // 0x24
		::UnityEngine::Vector3 RelativeTranslation; // 0x28
		::UnityEngine::Vector3 RelativeRotation; // 0x34
		::UnityEngine::Vector3 RelativeScale; // 0x40
		::UnityEngine::Vector3 LookAtPosition; // 0x4C
		::UnityEngine::GameObject* TriggerNode; // 0x58

		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_PATROLPOINT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::Client::TransformPatrolAnimBehavior_PatrolPoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TransformPatrolAnimBehavior_PatrolPoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_PATROLPOINT__CTOR_1_OFFSET))(this, a1);
		}
	};
}
