#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C7183ACDF245D19F;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_D6B982869FD18C4B___C_METHOD_1_91E5DC594B900DDE_OFFSET UNITYSDK_OFFSET(0xECD5EA0)
#define CLASS_3_D6B982869FD18C4B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xECD5E50)
#define CLASS_3_D6B982869FD18C4B___C__CTOR_OFFSET UNITYSDK_OFFSET(0xECD5E90)

inline static constexpr unsigned int Class_3_D6B982869FD18C4B___c_TypeDefinitionIndex = 66436;

class Class_3_D6B982869FD18C4B___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_C7183ACDF245D19F*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_C7183ACDF245D19F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D6B982869FD18C4B___c_TypeDefinitionIndex)->GetStaticField(0x4E260);
	}
	static ::Class_3_D6B982869FD18C4B___c** StaticGet___9()
	{
		return (::Class_3_D6B982869FD18C4B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D6B982869FD18C4B___c_TypeDefinitionIndex)->GetStaticField(0x4E268);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D6B982869FD18C4B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6B982869FD18C4B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_91E5DC594B900DDE(::Class_3_C7183ACDF245D19F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C7183ACDF245D19F*))((::PBYTE)hIl2Cpp + CLASS_3_D6B982869FD18C4B___C_METHOD_1_91E5DC594B900DDE_OFFSET))(this, a1);
	}
};
