#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_296A7AC90F028539;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_AC6C63F15E9794D3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F25B60)
#define CLASS_1_AC6C63F15E9794D3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F25B90)
#define CLASS_1_AC6C63F15E9794D3___C__SEND_B__6_0_OFFSET UNITYSDK_OFFSET(0x18F25BA0)

inline static constexpr unsigned int Class_1_AC6C63F15E9794D3___c_TypeDefinitionIndex = 69319;

class Class_1_AC6C63F15E9794D3___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_296A7AC90F028539*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_1_296A7AC90F028539*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC6C63F15E9794D3___c_TypeDefinitionIndex)->GetStaticField(0x2AD00);
	}
	static ::Class_1_AC6C63F15E9794D3___c** StaticGet___9()
	{
		return (::Class_1_AC6C63F15E9794D3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC6C63F15E9794D3___c_TypeDefinitionIndex)->GetStaticField(0x2AD08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3___C__CTOR_OFFSET))(this);
	}

	::System::Void _Send_b__6_0(::Class_1_296A7AC90F028539* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3___C__SEND_B__6_0_OFFSET))(this, a1);
	}
};
