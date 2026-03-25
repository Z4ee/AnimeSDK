#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_CROWDANIMATOR_CAPSULECOLLIDERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x94279D0)

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CapsuleColliderInfo_TypeDefinitionIndex = 60446;

	class CapsuleColliderInfo : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 center; // 0x10
		::System::Int32 direction; // 0x1C
		::System::Single radius; // 0x20
		::System::Single height; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CAPSULECOLLIDERINFO__CTOR_OFFSET))(this);
		}
	};
}
