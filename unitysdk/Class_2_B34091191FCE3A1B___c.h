#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_B34091191FCE3A1B___C_METHOD_1_486AF1E6C0038D4C_OFFSET UNITYSDK_OFFSET(0x13434990)
#define CLASS_2_B34091191FCE3A1B___C_METHOD_1_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x134349A0)
#define CLASS_2_B34091191FCE3A1B___C_METHOD_1_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x134348B0)
#define CLASS_2_B34091191FCE3A1B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13434860)
#define CLASS_2_B34091191FCE3A1B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x134348A0)

inline static constexpr unsigned int Class_2_B34091191FCE3A1B___c_TypeDefinitionIndex = 86411;

class Class_2_B34091191FCE3A1B___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__78_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B34091191FCE3A1B___c_TypeDefinitionIndex)->GetStaticField(0x409F0);
	}
	static ::System::Func_1<::UnityEngine::Vector2>** StaticGet___9__70_23()
	{
		return (::System::Func_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B34091191FCE3A1B___c_TypeDefinitionIndex)->GetStaticField(0x409F8);
	}
	static ::Class_2_B34091191FCE3A1B___c** StaticGet___9()
	{
		return (::Class_2_B34091191FCE3A1B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B34091191FCE3A1B___c_TypeDefinitionIndex)->GetStaticField(0x40A00);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__70_7()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B34091191FCE3A1B___c_TypeDefinitionIndex)->GetStaticField(0x40A08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B___C_METHOD_1_F29D7A7F508EABE1_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_486AF1E6C0038D4C()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B___C_METHOD_1_486AF1E6C0038D4C_OFFSET))(this);
	}

	::System::Boolean Method_1_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B___C_METHOD_1_D7B7C909A67BD350_OFFSET))(this);
	}
};
