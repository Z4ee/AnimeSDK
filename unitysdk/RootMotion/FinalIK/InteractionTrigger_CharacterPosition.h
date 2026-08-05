#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_INTERACTIONTRIGGER_CHARACTERPOSITION_GET_DIRECTION3D_OFFSET UNITYSDK_OFFSET(0x1F3D4EE0)
#define ROOTMOTION_FINALIK_INTERACTIONTRIGGER_CHARACTERPOSITION_GET_OFFSET3D_OFFSET UNITYSDK_OFFSET(0x1F3D4EC0)
#define ROOTMOTION_FINALIK_INTERACTIONTRIGGER_CHARACTERPOSITION_ISINRANGE_OFFSET UNITYSDK_OFFSET(0x1F3D5050)
#define ROOTMOTION_FINALIK_INTERACTIONTRIGGER_CHARACTERPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3D5EA0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionTrigger_CharacterPosition_TypeDefinitionIndex = 38988;

	class InteractionTrigger_CharacterPosition : public ::System::Object
	{
	public:
		::System::Boolean use; // 0x10
		::UnityEngine::Vector2 offset; // 0x14
		::System::Single angleOffset; // 0x1C
		::System::Single maxAngle; // 0x20
		::System::Single radius; // 0x24
		::System::Boolean orbit; // 0x28
		::System::Boolean fixYAxis; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTRIGGER_CHARACTERPOSITION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_offset3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTRIGGER_CHARACTERPOSITION_GET_OFFSET3D_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_direction3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTRIGGER_CHARACTERPOSITION_GET_DIRECTION3D_OFFSET))(this);
		}

		::System::Boolean IsInRange(::UnityEngine::Transform* character, ::UnityEngine::Transform* trigger, ::System::Single& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTRIGGER_CHARACTERPOSITION_ISINRANGE_OFFSET))(this, character, trigger, error);
		}
	};
}
