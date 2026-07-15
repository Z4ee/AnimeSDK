#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FOLLOWROTATEGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16D18AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int FollowRotateGameObject_TypeDefinitionIndex = 65382;

	class FollowRotateGameObject : public ::System::Object
	{
	public:
		::UnityEngine::Transform* FollowTransform; // 0x10
		::UnityEngine::Vector3 RotateDirection; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWROTATEGAMEOBJECT__CTOR_OFFSET))(this);
		}
	};
}
