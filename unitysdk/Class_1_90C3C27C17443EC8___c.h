#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_90C3C27C17443EC8;

#define CLASS_1_90C3C27C17443EC8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2CCC10)
#define CLASS_1_90C3C27C17443EC8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2CCC50)
#define CLASS_1_90C3C27C17443EC8___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E2CCC60)

inline static constexpr unsigned int Class_1_90C3C27C17443EC8___c_TypeDefinitionIndex = 32051;

class Class_1_90C3C27C17443EC8___c : public ::System::Object
{
public:
	static ::Class_1_90C3C27C17443EC8___c** StaticGet___9()
	{
		return (::Class_1_90C3C27C17443EC8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90C3C27C17443EC8___c_TypeDefinitionIndex)->GetStaticField(0x3F8A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_90C3C27C17443EC8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90C3C27C17443EC8___C__CTOR_OFFSET))(this);
	}

	::Class_1_90C3C27C17443EC8* __cctor_b__43_0()
	{
		return ((::Class_1_90C3C27C17443EC8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90C3C27C17443EC8___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
