#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_2_B99383C5AE28BE6F;

#define CLASS_2_DE2B33861A1AE2C3_METHOD_2_326AAA53D203A730_OFFSET UNITYSDK_OFFSET(0x14B17830)
#define CLASS_2_DE2B33861A1AE2C3_METHOD_2_57FC422C238CCA4F_OFFSET UNITYSDK_OFFSET(0x14B181B0)
#define CLASS_2_DE2B33861A1AE2C3_METHOD_2_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0x14B17E90)
#define CLASS_2_DE2B33861A1AE2C3__CTOR_OFFSET UNITYSDK_OFFSET(0x14B177A0)
#define CLASS_2_DE2B33861A1AE2C3__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x14B17F00)
#define CLASS_2_DE2B33861A1AE2C3__ONTICK_OFFSET UNITYSDK_OFFSET(0x14B18150)
#define CLASS_2_DE2B33861A1AE2C3__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x14B17FA0)

inline static constexpr unsigned int Class_2_DE2B33861A1AE2C3_TypeDefinitionIndex = 69211;

class Class_2_DE2B33861A1AE2C3 : public ::RPG::Client::UIController
{
public:
	::System::Boolean Field_2_0; // 0x180
	::System::Single Field_2_1; // 0x184
	::System::UInt32 Field_2_2; // 0x188
	::System::Single Field_2_3; // 0x18C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE2B33861A1AE2C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_326AAA53D203A730(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DE2B33861A1AE2C3_METHOD_2_326AAA53D203A730_OFFSET))(this, a1, a2);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE2B33861A1AE2C3__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE2B33861A1AE2C3__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DE2B33861A1AE2C3__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_57FC422C238CCA4F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DE2B33861A1AE2C3_METHOD_2_57FC422C238CCA4F_OFFSET))(this, a1);
	}

	::Class_2_B99383C5AE28BE6F* Method_2_BEBC8F4773DC82AA()
	{
		return ((::Class_2_B99383C5AE28BE6F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE2B33861A1AE2C3_METHOD_2_BEBC8F4773DC82AA_OFFSET))(this);
	}
};
