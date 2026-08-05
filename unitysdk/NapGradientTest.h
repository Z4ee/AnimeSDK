#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class NapGradient;

#define NAPGRADIENTTEST_VALIDATION_OFFSET UNITYSDK_OFFSET(0x11950C60)
#define NAPGRADIENTTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x11950CB0)

inline static constexpr unsigned int NapGradientTest_TypeDefinitionIndex = 44640;

class NapGradientTest : public ::UnityEngine::MonoBehaviour
{
public:
	::NapGradient* gradient; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGRADIENTTEST__CTOR_OFFSET))(this);
	}

	::System::Void Validation()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGRADIENTTEST_VALIDATION_OFFSET))(this);
	}
};
