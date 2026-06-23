#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_481;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_08B82783F12BF448___C_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x11410100)
#define CLASS_2_08B82783F12BF448___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x114100F0)
#define CLASS_2_08B82783F12BF448___C_METHOD_1_DE4BF154D2D15A31_OFFSET UNITYSDK_OFFSET(0x1140FF00)
#define CLASS_2_08B82783F12BF448___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1140FEB0)
#define CLASS_2_08B82783F12BF448___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1140FEF0)

inline static constexpr unsigned int Class_2_08B82783F12BF448___c_TypeDefinitionIndex = 66448;

class Class_2_08B82783F12BF448___c : public ::System::Object
{
public:
	static ::Class_2_08B82783F12BF448___c** StaticGet___9()
	{
		return (::Class_2_08B82783F12BF448___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_08B82783F12BF448___c_TypeDefinitionIndex)->GetStaticField(0x36150);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_481*>** StaticGet___9__22_1()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_481*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_08B82783F12BF448___c_TypeDefinitionIndex)->GetStaticField(0x36158);
	}
	static ::System::Action** StaticGet___9__24_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_08B82783F12BF448___c_TypeDefinitionIndex)->GetStaticField(0x36160);
	}
	static ::System::Action** StaticGet___9__24_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_08B82783F12BF448___c_TypeDefinitionIndex)->GetStaticField(0x36168);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_08B82783F12BF448___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08B82783F12BF448___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_DE4BF154D2D15A31(::Class_2_208CC9941471731A_481* a1, ::Class_2_208CC9941471731A_481* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_481*, ::Class_2_208CC9941471731A_481*))((::PBYTE)hIl2Cpp + CLASS_2_08B82783F12BF448___C_METHOD_1_DE4BF154D2D15A31_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08B82783F12BF448___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08B82783F12BF448___C_METHOD_1_832295EC279E5994_1_OFFSET))(this);
	}
};
