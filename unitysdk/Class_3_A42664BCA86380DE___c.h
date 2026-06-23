#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_61A5922E5046F385_2;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_A42664BCA86380DE___C_METHOD_1_C805032703A305D8_OFFSET UNITYSDK_OFFSET(0x13E2CEC0)
#define CLASS_3_A42664BCA86380DE___C_METHOD_1_DB42CCC5CAC2F1AC_OFFSET UNITYSDK_OFFSET(0x13E2CF20)
#define CLASS_3_A42664BCA86380DE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E2CE70)
#define CLASS_3_A42664BCA86380DE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E2CEB0)

inline static constexpr unsigned int Class_3_A42664BCA86380DE___c_TypeDefinitionIndex = 84679;

class Class_3_A42664BCA86380DE___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_61A5922E5046F385_2*>** StaticGet___9__13_0()
	{
		return (::System::Action_1<::Class_3_61A5922E5046F385_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A42664BCA86380DE___c_TypeDefinitionIndex)->GetStaticField(0x405C0);
	}
	static ::System::Action_1<::Class_3_61A5922E5046F385_2*>** StaticGet___9__12_0()
	{
		return (::System::Action_1<::Class_3_61A5922E5046F385_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A42664BCA86380DE___c_TypeDefinitionIndex)->GetStaticField(0x405C8);
	}
	static ::Class_3_A42664BCA86380DE___c** StaticGet___9()
	{
		return (::Class_3_A42664BCA86380DE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A42664BCA86380DE___c_TypeDefinitionIndex)->GetStaticField(0x405D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C805032703A305D8(::Class_3_61A5922E5046F385_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_61A5922E5046F385_2*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE___C_METHOD_1_C805032703A305D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB42CCC5CAC2F1AC(::Class_3_61A5922E5046F385_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_61A5922E5046F385_2*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE___C_METHOD_1_DB42CCC5CAC2F1AC_OFFSET))(this, a1);
	}
};
