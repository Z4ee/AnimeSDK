#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_E117BAB6C06D5805_METHOD_2_2091F34306E68C88_OFFSET UNITYSDK_OFFSET(0x1457E010)
#define CLASS_2_E117BAB6C06D5805_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x1457E160)
#define CLASS_2_E117BAB6C06D5805__CTOR_OFFSET UNITYSDK_OFFSET(0x1457E0E0)

inline static constexpr unsigned int Class_2_E117BAB6C06D5805_TypeDefinitionIndex = 48941;

class Class_2_E117BAB6C06D5805 : public ::Class_1_8377BAB19A574A40
{
public:
	::System::Boolean Field_2_3; // 0x80
	::System::Single Field_2_2; // 0x84
	::System::Single Field_2_0; // 0x88
	::System::Int32 Field_2_6; // 0x8C
	::System::Int32 Field_2_7; // 0x90
	::UnityEngine::Vector3 Field_2_5; // 0x94
	::System::Single Field_2_1; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E117BAB6C06D5805__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2091F34306E68C88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E117BAB6C06D5805_METHOD_2_2091F34306E68C88_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E117BAB6C06D5805_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
