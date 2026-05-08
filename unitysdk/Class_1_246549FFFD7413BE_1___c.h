#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_246549FFFD7413BE_1___C_METHOD_1_43F35D215407097A_1_OFFSET UNITYSDK_OFFSET(0xEA6C840)
#define CLASS_1_246549FFFD7413BE_1___C_METHOD_1_43F35D215407097A_2_OFFSET UNITYSDK_OFFSET(0xEA6C850)
#define CLASS_1_246549FFFD7413BE_1___C_METHOD_1_43F35D215407097A_OFFSET UNITYSDK_OFFSET(0xEA6C830)
#define CLASS_1_246549FFFD7413BE_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEA6C7E0)
#define CLASS_1_246549FFFD7413BE_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEA6C820)

inline static constexpr unsigned int Class_1_246549FFFD7413BE_1___c_TypeDefinitionIndex = 46916;

class Class_1_246549FFFD7413BE_1___c : public ::System::Object
{
public:
	static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__15_1()
	{
		return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_246549FFFD7413BE_1___c_TypeDefinitionIndex)->GetStaticField(0x35AC0);
	}
	static ::Class_1_246549FFFD7413BE_1___c** StaticGet___9()
	{
		return (::Class_1_246549FFFD7413BE_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_246549FFFD7413BE_1___c_TypeDefinitionIndex)->GetStaticField(0x35AC8);
	}
	static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_246549FFFD7413BE_1___c_TypeDefinitionIndex)->GetStaticField(0x35AD0);
	}
	static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__15_2()
	{
		return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_246549FFFD7413BE_1___c_TypeDefinitionIndex)->GetStaticField(0x35AD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1___C__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_43F35D215407097A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1___C_METHOD_1_43F35D215407097A_OFFSET))(this, a1);
	}

	::System::Single Method_1_43F35D215407097A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1___C_METHOD_1_43F35D215407097A_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_43F35D215407097A_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1___C_METHOD_1_43F35D215407097A_2_OFFSET))(this, a1);
	}
};
