#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C974D9B5A2874893.h"
#include "unitysdk/RPG/MVector2.h"

class Class_0_16E4307DCC419505_217;

#define CLASS_2_B01516C0099A0334_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x167E7440)
#define CLASS_2_B01516C0099A0334_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x167E72B0)
#define CLASS_2_B01516C0099A0334__CTOR_OFFSET UNITYSDK_OFFSET(0x167E7290)

inline static constexpr unsigned int Class_2_B01516C0099A0334_TypeDefinitionIndex = 33143;

class Class_2_B01516C0099A0334 : public ::Class_1_C974D9B5A2874893
{
public:
	::Class_0_16E4307DCC419505_217* Field_2_0; // 0x20
	::System::UInt32 Field_2_2; // 0x28
	::System::UInt32 Field_2_1; // 0x2C
	::RPG::MVector2 Field_2_3; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_217* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::MVector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_217*, ::System::UInt32, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_2_B01516C0099A0334__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B01516C0099A0334_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B01516C0099A0334_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
