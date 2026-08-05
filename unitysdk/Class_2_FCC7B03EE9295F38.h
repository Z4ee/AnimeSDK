#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"

#define CLASS_2_FCC7B03EE9295F38_METHOD_2_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0x13E32100)
#define CLASS_2_FCC7B03EE9295F38_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x13E32210)
#define CLASS_2_FCC7B03EE9295F38__CTOR_OFFSET UNITYSDK_OFFSET(0x13E321A0)

inline static constexpr unsigned int Class_2_FCC7B03EE9295F38_TypeDefinitionIndex = 43510;

class Class_2_FCC7B03EE9295F38 : public ::Class_1_8377BAB19A574A40
{
public:
	::System::Single Field_2_7; // 0x80
	::System::Boolean Field_2_6; // 0x84
	::System::Int32 Field_2_5; // 0x88
	::MoleMole::Config::CameraDelayMoveMode Field_2_0; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCC7B03EE9295F38__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCC7B03EE9295F38_METHOD_2_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCC7B03EE9295F38_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
