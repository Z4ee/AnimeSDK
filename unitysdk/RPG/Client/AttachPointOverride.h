#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ATTACHPOINTOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x90E7230)

namespace RPG::Client
{
	inline static constexpr unsigned int AttachPointOverride_TypeDefinitionIndex = 55797;

	class AttachPointOverride : public ::System::Object
	{
	public:
		::UnityEngine::Transform* BasePointTransform; // 0x10
		::UnityEngine::Transform* OverridePointTransform; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTOVERRIDE__CTOR_OFFSET))(this);
		}
	};
}
