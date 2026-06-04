#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOROTATABLEREGIONPOSEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC143CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRotatableRegionPoseInfo_TypeDefinitionIndex = 64572;

	class MonoRotatableRegionPoseInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 PoseID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROTATABLEREGIONPOSEINFO__CTOR_OFFSET))(this);
		}
	};
}
