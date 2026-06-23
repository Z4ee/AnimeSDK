#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E4C440F1BFCA5CB3;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_805B12855360B6E4___C_METHOD_1_FF1E56A6F6135170_OFFSET UNITYSDK_OFFSET(0x11B2F200)
#define CLASS_3_805B12855360B6E4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B2F1B0)
#define CLASS_3_805B12855360B6E4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11B2F1F0)

inline static constexpr unsigned int Class_3_805B12855360B6E4___c_TypeDefinitionIndex = 80966;

class Class_3_805B12855360B6E4___c : public ::System::Object
{
public:
	static ::Class_3_805B12855360B6E4___c** StaticGet___9()
	{
		return (::Class_3_805B12855360B6E4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_805B12855360B6E4___c_TypeDefinitionIndex)->GetStaticField(0x4C6F0);
	}
	static ::System::Action_1<::Class_3_E4C440F1BFCA5CB3*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_E4C440F1BFCA5CB3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_805B12855360B6E4___c_TypeDefinitionIndex)->GetStaticField(0x4C6F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_805B12855360B6E4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_805B12855360B6E4___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FF1E56A6F6135170(::Class_3_E4C440F1BFCA5CB3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E4C440F1BFCA5CB3*))((::PBYTE)hIl2Cpp + CLASS_3_805B12855360B6E4___C_METHOD_1_FF1E56A6F6135170_OFFSET))(this, a1);
	}
};
