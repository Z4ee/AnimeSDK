#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BC389B37BA981479;

#define CLASS_1_BC389B37BA981479___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0995C0)
#define CLASS_1_BC389B37BA981479___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0995F0)
#define CLASS_1_BC389B37BA981479___C___CCTOR_B__188_0_OFFSET UNITYSDK_OFFSET(0x1A099600)

inline static constexpr unsigned int Class_1_BC389B37BA981479___c_TypeDefinitionIndex = 31205;

class Class_1_BC389B37BA981479___c : public ::System::Object
{
public:
	static ::Class_1_BC389B37BA981479___c** StaticGet___9()
	{
		return (::Class_1_BC389B37BA981479___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC389B37BA981479___c_TypeDefinitionIndex)->GetStaticField(0x35E60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC389B37BA981479___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC389B37BA981479___C__CTOR_OFFSET))(this);
	}

	::Class_1_BC389B37BA981479* __cctor_b__188_0()
	{
		return ((::Class_1_BC389B37BA981479*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC389B37BA981479___C___CCTOR_B__188_0_OFFSET))(this);
	}
};
