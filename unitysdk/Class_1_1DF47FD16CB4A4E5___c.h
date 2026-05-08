#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_173;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_1DF47FD16CB4A4E5___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x14F7C5C0)
#define CLASS_1_1DF47FD16CB4A4E5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F7C570)
#define CLASS_1_1DF47FD16CB4A4E5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14F7C5B0)

inline static constexpr unsigned int Class_1_1DF47FD16CB4A4E5___c_TypeDefinitionIndex = 12186;

class Class_1_1DF47FD16CB4A4E5___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_173*>** StaticGet___9__20_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_173*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DF47FD16CB4A4E5___c_TypeDefinitionIndex)->GetStaticField(0x8BB0);
	}
	static ::Class_1_1DF47FD16CB4A4E5___c** StaticGet___9()
	{
		return (::Class_1_1DF47FD16CB4A4E5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DF47FD16CB4A4E5___c_TypeDefinitionIndex)->GetStaticField(0x8BB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DF47FD16CB4A4E5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DF47FD16CB4A4E5___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_173* a1, ::Class_2_208CC9941471731A_173* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_173*, ::Class_2_208CC9941471731A_173*))((::PBYTE)hIl2Cpp + CLASS_1_1DF47FD16CB4A4E5___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
