#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7647E0B2FA921121;

#define CLASS_1_7647E0B2FA921121___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x195E0040)
#define CLASS_1_7647E0B2FA921121___C__CTOR_OFFSET UNITYSDK_OFFSET(0x195E0080)
#define CLASS_1_7647E0B2FA921121___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x195E0090)

inline static constexpr unsigned int Class_1_7647E0B2FA921121___c_TypeDefinitionIndex = 26019;

class Class_1_7647E0B2FA921121___c : public ::System::Object
{
public:
	static ::Class_1_7647E0B2FA921121___c** StaticGet___9()
	{
		return (::Class_1_7647E0B2FA921121___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7647E0B2FA921121___c_TypeDefinitionIndex)->GetStaticField(0x55A70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7647E0B2FA921121___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7647E0B2FA921121___C__CTOR_OFFSET))(this);
	}

	::Class_1_7647E0B2FA921121* __cctor_b__42_0()
	{
		return ((::Class_1_7647E0B2FA921121*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7647E0B2FA921121___C___CCTOR_B__42_0_OFFSET))(this);
	}
};
