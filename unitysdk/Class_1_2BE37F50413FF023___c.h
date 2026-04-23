#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2BE37F50413FF023;

#define CLASS_1_2BE37F50413FF023___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197D9870)
#define CLASS_1_2BE37F50413FF023___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197D98B0)
#define CLASS_1_2BE37F50413FF023___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x197D98C0)

inline static constexpr unsigned int Class_1_2BE37F50413FF023___c_TypeDefinitionIndex = 28192;

class Class_1_2BE37F50413FF023___c : public ::System::Object
{
public:
	static ::Class_1_2BE37F50413FF023___c** StaticGet___9()
	{
		return (::Class_1_2BE37F50413FF023___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BE37F50413FF023___c_TypeDefinitionIndex)->GetStaticField(0x62A00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023___C__CTOR_OFFSET))(this);
	}

	::Class_1_2BE37F50413FF023* __cctor_b__38_0()
	{
		return ((::Class_1_2BE37F50413FF023*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023___C___CCTOR_B__38_0_OFFSET))(this);
	}
};
