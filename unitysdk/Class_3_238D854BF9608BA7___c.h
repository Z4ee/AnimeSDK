#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_F638703ACD0FA08E;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_238D854BF9608BA7___C_METHOD_1_BE3141956C33D43F_OFFSET UNITYSDK_OFFSET(0x143A1F20)
#define CLASS_3_238D854BF9608BA7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x143A1ED0)
#define CLASS_3_238D854BF9608BA7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x143A1F10)

inline static constexpr unsigned int Class_3_238D854BF9608BA7___c_TypeDefinitionIndex = 86115;

class Class_3_238D854BF9608BA7___c : public ::System::Object
{
public:
	static ::Class_3_238D854BF9608BA7___c** StaticGet___9()
	{
		return (::Class_3_238D854BF9608BA7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_238D854BF9608BA7___c_TypeDefinitionIndex)->GetStaticField(0x35340);
	}
	static ::System::Action_1<::Class_5_F638703ACD0FA08E*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::Class_5_F638703ACD0FA08E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_238D854BF9608BA7___c_TypeDefinitionIndex)->GetStaticField(0x35348);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_238D854BF9608BA7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_238D854BF9608BA7___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BE3141956C33D43F(::Class_5_F638703ACD0FA08E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_238D854BF9608BA7___C_METHOD_1_BE3141956C33D43F_OFFSET))(this, a1);
	}
};
