#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Renderer; }

#define RPG_CUSTOMRP_INSTANCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9E030)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int InstanceInfo_TypeDefinitionIndex = 29199;

	class InstanceInfo : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* renderer; // 0x10
		::System::Double nearDepth01; // 0x18
		::System::Int32 y; // 0x20
		::System::Int32 depth; // 0x24
		::System::Boolean isInFrustum; // 0x28
		::System::Int32 id; // 0x2C
		::System::Int32 x; // 0x30
		::System::Int32 depth01; // 0x34
		::System::Double nearDepth; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_INSTANCEINFO__CTOR_OFFSET))(this);
		}
	};
}
