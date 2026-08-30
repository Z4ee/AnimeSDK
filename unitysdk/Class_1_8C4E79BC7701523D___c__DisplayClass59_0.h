#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F0E9DD085BA6740E;

#define CLASS_1_8C4E79BC7701523D___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x177A6690)
#define CLASS_1_8C4E79BC7701523D___C__DISPLAYCLASS59_0___TRYGETPEAKBESTDATA_B__0_OFFSET UNITYSDK_OFFSET(0x177A67A0)

inline static constexpr unsigned int Class_1_8C4E79BC7701523D___c__DisplayClass59_0_TypeDefinitionIndex = 63255;

class Class_1_8C4E79BC7701523D___c__DisplayClass59_0 : public ::System::Object
{
public:
	::System::UInt32 peakID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C4E79BC7701523D___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryGetPeakBestData_b__0(::Class_1_F0E9DD085BA6740E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F0E9DD085BA6740E*))((::PBYTE)hIl2Cpp + CLASS_1_8C4E79BC7701523D___C__DISPLAYCLASS59_0___TRYGETPEAKBESTDATA_B__0_OFFSET))(this, a1);
	}
};
