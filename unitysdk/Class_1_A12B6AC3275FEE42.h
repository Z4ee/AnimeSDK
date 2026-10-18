#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F38F1DFDC2D5A336;

#define CLASS_1_A12B6AC3275FEE42_METHOD_1_56E0415ED61DFBD8_OFFSET UNITYSDK_OFFSET(0x12655510)
#define CLASS_1_A12B6AC3275FEE42__CTOR_OFFSET UNITYSDK_OFFSET(0x12655620)

inline static constexpr unsigned int Class_1_A12B6AC3275FEE42_TypeDefinitionIndex = 68274;

class Class_1_A12B6AC3275FEE42 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A12B6AC3275FEE42__CTOR_OFFSET))(this);
	}

	::Class_1_F38F1DFDC2D5A336* Method_1_56E0415ED61DFBD8(::System::UInt32 a1)
	{
		return ((::Class_1_F38F1DFDC2D5A336*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A12B6AC3275FEE42_METHOD_1_56E0415ED61DFBD8_OFFSET))(this, a1);
	}
};
