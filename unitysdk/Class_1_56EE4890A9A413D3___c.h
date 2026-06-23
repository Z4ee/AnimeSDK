#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_709;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_56EE4890A9A413D3___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x18BBB5F0)
#define CLASS_1_56EE4890A9A413D3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BBB5A0)
#define CLASS_1_56EE4890A9A413D3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18BBB5E0)

inline static constexpr unsigned int Class_1_56EE4890A9A413D3___c_TypeDefinitionIndex = 17944;

class Class_1_56EE4890A9A413D3___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_709*>** StaticGet___9__1_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_709*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56EE4890A9A413D3___c_TypeDefinitionIndex)->GetStaticField(0x75F0);
	}
	static ::Class_1_56EE4890A9A413D3___c** StaticGet___9()
	{
		return (::Class_1_56EE4890A9A413D3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56EE4890A9A413D3___c_TypeDefinitionIndex)->GetStaticField(0x75F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_56EE4890A9A413D3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56EE4890A9A413D3___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_709* a1, ::Class_2_208CC9941471731A_709* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_709*, ::Class_2_208CC9941471731A_709*))((::PBYTE)hIl2Cpp + CLASS_1_56EE4890A9A413D3___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
