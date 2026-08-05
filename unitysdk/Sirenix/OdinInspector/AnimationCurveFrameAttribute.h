#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Color.h"

#define SIRENIX_ODININSPECTOR_ANIMATIONCURVEFRAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B48940)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int AnimationCurveFrameAttribute_TypeDefinitionIndex = 73738;

	class AnimationCurveFrameAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean isAutoRange; // 0x10
		::System::Single RangeMinX; // 0x14
		::System::Single RangeMaxY; // 0x18
		::System::Single RangeMaxX; // 0x1C
		::UnityEngine::Color LineColor; // 0x20
		::System::Single RangeMinY; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ANIMATIONCURVEFRAMEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
