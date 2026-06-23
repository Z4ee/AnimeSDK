#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_11169EF287A415D4;
class Class_3_E9E7743CAF4E16BD;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_79F678EEC237CC3B___C_METHOD_1_962C4BC72078A0B4_OFFSET UNITYSDK_OFFSET(0x10D9CB40)
#define CLASS_3_79F678EEC237CC3B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D9CAF0)
#define CLASS_3_79F678EEC237CC3B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10D9CB30)

inline static constexpr unsigned int Class_3_79F678EEC237CC3B___c_TypeDefinitionIndex = 86564;

class Class_3_79F678EEC237CC3B___c : public ::System::Object
{
public:
	static ::Class_3_79F678EEC237CC3B___c** StaticGet___9()
	{
		return (::Class_3_79F678EEC237CC3B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_79F678EEC237CC3B___c_TypeDefinitionIndex)->GetStaticField(0x31AB0);
	}
	static ::System::Action_2<::Class_3_11169EF287A415D4*, ::Class_3_E9E7743CAF4E16BD*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_3_11169EF287A415D4*, ::Class_3_E9E7743CAF4E16BD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_79F678EEC237CC3B___c_TypeDefinitionIndex)->GetStaticField(0x31AB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_79F678EEC237CC3B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79F678EEC237CC3B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_962C4BC72078A0B4(::Class_3_11169EF287A415D4* a1, ::Class_3_E9E7743CAF4E16BD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_11169EF287A415D4*, ::Class_3_E9E7743CAF4E16BD*))((::PBYTE)hIl2Cpp + CLASS_3_79F678EEC237CC3B___C_METHOD_1_962C4BC72078A0B4_OFFSET))(this, a1, a2);
	}
};
