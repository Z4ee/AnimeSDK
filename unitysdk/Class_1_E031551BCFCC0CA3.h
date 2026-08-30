#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/HeightLimitedTarget.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_E031551BCFCC0CA3__CTOR_OFFSET UNITYSDK_OFFSET(0x18AAEFE0)

inline static constexpr unsigned int Class_1_E031551BCFCC0CA3_TypeDefinitionIndex = 48883;

class Class_1_E031551BCFCC0CA3 : public ::System::Object
{
public:
	::System::Single HBAMPJPOOLM; // 0x10
	::RPGTools::Timeline::HeightLimitedTarget MCLLALGABAB; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E031551BCFCC0CA3__CTOR_OFFSET))(this);
	}
};
