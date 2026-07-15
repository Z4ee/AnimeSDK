#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_65223DE6C1B20E8E;

#define CLASS_1_B0DEC0A5FF9B0165_3_METHOD_1_076FEE641C2B6499_OFFSET UNITYSDK_OFFSET(0x14255420)
#define CLASS_1_B0DEC0A5FF9B0165_3_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x14255390)
#define CLASS_1_B0DEC0A5FF9B0165_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x142554E0)
#define CLASS_1_B0DEC0A5FF9B0165_3__CTOR_OFFSET UNITYSDK_OFFSET(0x14255410)

inline static constexpr unsigned int Class_1_B0DEC0A5FF9B0165_3_TypeDefinitionIndex = 71667;

class Class_1_B0DEC0A5FF9B0165_3 : public ::System::Object
{
public:
	static ::Class_1_B0DEC0A5FF9B0165_3** StaticGet_Field_1_0()
	{
		return (::Class_1_B0DEC0A5FF9B0165_3**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0DEC0A5FF9B0165_3_TypeDefinitionIndex)->GetStaticField(0x2F0A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_3__CCTOR_OFFSET))();
	}

	static ::Class_1_B0DEC0A5FF9B0165_3* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_B0DEC0A5FF9B0165_3*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_3_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	::System::Void Method_1_076FEE641C2B6499(::Class_2_65223DE6C1B20E8E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_65223DE6C1B20E8E*))((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_3_METHOD_1_076FEE641C2B6499_OFFSET))(this, a1);
	}
};
