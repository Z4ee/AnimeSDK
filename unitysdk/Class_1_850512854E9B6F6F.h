#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityPlayerReturnRecommendData; }

#define CLASS_1_850512854E9B6F6F_METHOD_1_836D8CCEB4A4A2A8_OFFSET UNITYSDK_OFFSET(0x116EA4D0)
#define CLASS_1_850512854E9B6F6F__CTOR_OFFSET UNITYSDK_OFFSET(0x116EA780)

inline static constexpr unsigned int Class_1_850512854E9B6F6F_TypeDefinitionIndex = 50234;

class Class_1_850512854E9B6F6F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_850512854E9B6F6F__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::ActivityPlayerReturnRecommendData* Method_1_836D8CCEB4A4A2A8(::System::UInt32 a1)
	{
		return ((::RPG::Client::ActivityPlayerReturnRecommendData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_850512854E9B6F6F_METHOD_1_836D8CCEB4A4A2A8_OFFSET))(a1);
	}
};
