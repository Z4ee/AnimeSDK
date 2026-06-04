#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_65223DE6C1B20E8E;

#define CLASS_1_B0DEC0A5FF9B0165_1_METHOD_1_076FEE641C2B6499_OFFSET UNITYSDK_OFFSET(0x138227A0)
#define CLASS_1_B0DEC0A5FF9B0165_1_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x13822730)
#define CLASS_1_B0DEC0A5FF9B0165_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x13822860)
#define CLASS_1_B0DEC0A5FF9B0165_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13822790)

inline static constexpr unsigned int Class_1_B0DEC0A5FF9B0165_1_TypeDefinitionIndex = 70142;

class Class_1_B0DEC0A5FF9B0165_1 : public ::System::Object
{
public:
	static ::Class_1_B0DEC0A5FF9B0165_1** StaticGet_Field_1_0()
	{
		return (::Class_1_B0DEC0A5FF9B0165_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0DEC0A5FF9B0165_1_TypeDefinitionIndex)->GetStaticField(0x5CAF0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_1__CCTOR_OFFSET))();
	}

	static ::Class_1_B0DEC0A5FF9B0165_1* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_B0DEC0A5FF9B0165_1*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_1_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::System::Void Method_1_076FEE641C2B6499(::Class_2_65223DE6C1B20E8E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_65223DE6C1B20E8E*))((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_1_METHOD_1_076FEE641C2B6499_OFFSET))(this, a1);
	}
};
