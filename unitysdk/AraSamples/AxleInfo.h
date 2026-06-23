#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class WheelCollider; }

#define ARASAMPLES_AXLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E21F5C0)

namespace AraSamples
{
	inline static constexpr unsigned int AxleInfo_TypeDefinitionIndex = 32916;

	class AxleInfo : public ::System::Object
	{
	public:
		::UnityEngine::WheelCollider* leftWheel; // 0x10
		::UnityEngine::WheelCollider* rightWheel; // 0x18
		::System::Boolean motor; // 0x20
		::System::Boolean steering; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARASAMPLES_AXLEINFO__CTOR_OFFSET))(this);
		}
	};
}
