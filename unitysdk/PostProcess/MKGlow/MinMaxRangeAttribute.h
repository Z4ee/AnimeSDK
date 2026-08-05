#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define POSTPROCESS_MKGLOW_MINMAXRANGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC67A00)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int MinMaxRangeAttribute_TypeDefinitionIndex = 27930;

	class MinMaxRangeAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Single maxLimit; // 0x10
		::System::Single minLimit; // 0x14

		::System::Void _ctor(::System::Single minLimit, ::System::Single maxLimit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MINMAXRANGEATTRIBUTE__CTOR_OFFSET))(this, minLimit, maxLimit);
		}
	};
}
