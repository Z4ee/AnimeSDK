#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Color.h"

#define SIRENIX_ODININSPECTOR_ANIMATIONCURVEFRAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x143B8220)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int AnimationCurveFrameAttribute_TypeDefinitionIndex = 53724;

	class AnimationCurveFrameAttribute : public ::System::Attribute
	{
	public:
		::System::Single RangeMinX; // 0x10
		::System::Single RangeMaxX; // 0x14
		::System::Boolean isAutoRange; // 0x18
		::UnityEngine::Color LineColor; // 0x1C
		::System::Single RangeMinY; // 0x2C
		::System::Single RangeMaxY; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ANIMATIONCURVEFRAMEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
