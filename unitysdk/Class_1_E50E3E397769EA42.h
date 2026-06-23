#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PopText;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_E50E3E397769EA42_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x18073500)
#define CLASS_1_E50E3E397769EA42_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x18073270)
#define CLASS_1_E50E3E397769EA42_METHOD_1_09161FEE113B1CBD_OFFSET UNITYSDK_OFFSET(0x18073550)
#define CLASS_1_E50E3E397769EA42_METHOD_1_23964A63127062B4_OFFSET UNITYSDK_OFFSET(0x180731F0)
#define CLASS_1_E50E3E397769EA42_METHOD_1_F2A1D3C2AD5054B1_1_OFFSET UNITYSDK_OFFSET(0x18073190)
#define CLASS_1_E50E3E397769EA42_METHOD_1_F2A1D3C2AD5054B1_OFFSET UNITYSDK_OFFSET(0x18073110)
#define CLASS_1_E50E3E397769EA42_METHOD_1_F573CA5C1ACC3010_OFFSET UNITYSDK_OFFSET(0x180734B0)
#define CLASS_1_E50E3E397769EA42__CTOR_OFFSET UNITYSDK_OFFSET(0x18073100)

inline static constexpr unsigned int Class_1_E50E3E397769EA42_TypeDefinitionIndex = 64302;

class Class_1_E50E3E397769EA42 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::PopText* Field_1_0; // 0x18
	::System::String* Field_1_1; // 0x20
	::System::Action* Field_1_5; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Single Field_1_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E50E3E397769EA42__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F2A1D3C2AD5054B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E50E3E397769EA42_METHOD_1_F2A1D3C2AD5054B1_OFFSET))(this);
	}

	::System::Void Method_1_23964A63127062B4(::System::String* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E50E3E397769EA42_METHOD_1_23964A63127062B4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F573CA5C1ACC3010(::PopText* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PopText*))((::PBYTE)hIl2Cpp + CLASS_1_E50E3E397769EA42_METHOD_1_F573CA5C1ACC3010_OFFSET))(this, a1);
	}

	::System::Void Method_1_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E50E3E397769EA42_METHOD_1_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E50E3E397769EA42_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_09161FEE113B1CBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E50E3E397769EA42_METHOD_1_09161FEE113B1CBD_OFFSET))(this);
	}

	::System::Void Method_1_F2A1D3C2AD5054B1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E50E3E397769EA42_METHOD_1_F2A1D3C2AD5054B1_1_OFFSET))(this);
	}
};
