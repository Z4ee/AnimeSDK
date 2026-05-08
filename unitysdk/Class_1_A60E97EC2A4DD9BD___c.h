#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_736;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_A60E97EC2A4DD9BD___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x1470C380)
#define CLASS_1_A60E97EC2A4DD9BD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1470C330)
#define CLASS_1_A60E97EC2A4DD9BD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1470C370)

inline static constexpr unsigned int Class_1_A60E97EC2A4DD9BD___c_TypeDefinitionIndex = 15237;

class Class_1_A60E97EC2A4DD9BD___c : public ::System::Object
{
public:
	static ::Class_1_A60E97EC2A4DD9BD___c** StaticGet___9()
	{
		return (::Class_1_A60E97EC2A4DD9BD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A60E97EC2A4DD9BD___c_TypeDefinitionIndex)->GetStaticField(0x8D70);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_736*>** StaticGet___9__18_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_736*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A60E97EC2A4DD9BD___c_TypeDefinitionIndex)->GetStaticField(0x8D78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A60E97EC2A4DD9BD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A60E97EC2A4DD9BD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_736* a1, ::Class_2_208CC9941471731A_736* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_736*, ::Class_2_208CC9941471731A_736*))((::PBYTE)hIl2Cpp + CLASS_1_A60E97EC2A4DD9BD___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
