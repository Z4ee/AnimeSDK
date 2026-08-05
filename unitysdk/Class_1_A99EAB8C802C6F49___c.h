#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_495;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_A99EAB8C802C6F49___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x15E2CBC0)
#define CLASS_1_A99EAB8C802C6F49___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E2CB70)
#define CLASS_1_A99EAB8C802C6F49___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2CBB0)

inline static constexpr unsigned int Class_1_A99EAB8C802C6F49___c_TypeDefinitionIndex = 13525;

class Class_1_A99EAB8C802C6F49___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_495*>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_495*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A99EAB8C802C6F49___c_TypeDefinitionIndex)->GetStaticField(0x7920);
	}
	static ::Class_1_A99EAB8C802C6F49___c** StaticGet___9()
	{
		return (::Class_1_A99EAB8C802C6F49___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A99EAB8C802C6F49___c_TypeDefinitionIndex)->GetStaticField(0x7928);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A99EAB8C802C6F49___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A99EAB8C802C6F49___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_495* a1, ::Class_2_208CC9941471731A_495* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_495*, ::Class_2_208CC9941471731A_495*))((::PBYTE)hIl2Cpp + CLASS_1_A99EAB8C802C6F49___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
