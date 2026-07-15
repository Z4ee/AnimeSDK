#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPGTOOLS_TIMELINE_LIGHTPARAMETER_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x39E7080)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LightParameter_TypeDefinitionIndex = 46648;

	struct alignas(4) LightParameter
	{
		::System::Single intensity; // 0x10
		::System::Single colorR; // 0x14
		::System::Single colorG; // 0x18
		::System::Single colorB; // 0x1C
		::UnityEngine::Quaternion direction; // 0x20
		::System::Boolean useEulerAngle; // 0x30
		::UnityEngine::Vector3 eulerAngleDirection; // 0x34

		/*
		::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTPARAMETER_GET_COLOR_OFFSET))(this);
		}
		*/
	};
}
