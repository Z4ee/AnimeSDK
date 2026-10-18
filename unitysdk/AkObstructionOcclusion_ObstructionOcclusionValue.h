#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKOBSTRUCTIONOCCLUSION_OBSTRUCTIONOCCLUSIONVALUE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F57CC30)
#define AKOBSTRUCTIONOCCLUSION_OBSTRUCTIONOCCLUSIONVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F57C260)

inline static constexpr unsigned int AkObstructionOcclusion_ObstructionOcclusionValue_TypeDefinitionIndex = 44939;

class AkObstructionOcclusion_ObstructionOcclusionValue : public ::System::Object
{
public:
	::System::Single currentValue; // 0x10
	::System::Single targetValue; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSION_OBSTRUCTIONOCCLUSIONVALUE__CTOR_OFFSET))(this);
	}

	::System::Boolean Update(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSION_OBSTRUCTIONOCCLUSIONVALUE_UPDATE_OFFSET))(this, a1);
	}
};
