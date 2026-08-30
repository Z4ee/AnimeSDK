#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_IKHITREACTIONSPINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1982EF70)

namespace RPG::Client
{
	inline static constexpr unsigned int IKHitReactionSpine_TypeDefinitionIndex = 68423;

	class IKHitReactionSpine : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Bip; // 0x10
		::UnityEngine::Transform* Head; // 0x18
		::UnityEngine::Vector3 HeadAxis; // 0x20
		::System::Single ExtendLength; // 0x2C
		::System::Single UnitLengthMass; // 0x30
		::System::Single Stiffness; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTIONSPINE__CTOR_OFFSET))(this);
		}
	};
}
