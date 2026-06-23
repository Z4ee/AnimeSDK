#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_83665B095F1535B5_1.h"

#define CLASS_2_3D94007308503477__CTOR_OFFSET UNITYSDK_OFFSET(0x1900EC30)

inline static constexpr unsigned int Class_2_3D94007308503477_TypeDefinitionIndex = 60208;

class Class_2_3D94007308503477 : public ::Class_1_83665B095F1535B5_1
{
public:
	::System::Int32 Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x1C
	::System::Single Field_2_2; // 0x20
	::System::Boolean Field_2_4; // 0x24
	::System::Single Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D94007308503477__CTOR_OFFSET))(this);
	}
};
