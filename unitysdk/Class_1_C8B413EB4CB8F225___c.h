#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_129;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_C8B413EB4CB8F225___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x14F07A90)
#define CLASS_1_C8B413EB4CB8F225___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F07A40)
#define CLASS_1_C8B413EB4CB8F225___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14F07A80)

inline static constexpr unsigned int Class_1_C8B413EB4CB8F225___c_TypeDefinitionIndex = 16020;

class Class_1_C8B413EB4CB8F225___c : public ::System::Object
{
public:
	static ::Class_1_C8B413EB4CB8F225___c** StaticGet___9()
	{
		return (::Class_1_C8B413EB4CB8F225___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8B413EB4CB8F225___c_TypeDefinitionIndex)->GetStaticField(0x7830);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_129*>** StaticGet___9__11_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_129*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8B413EB4CB8F225___c_TypeDefinitionIndex)->GetStaticField(0x7838);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8B413EB4CB8F225___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8B413EB4CB8F225___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_129* a1, ::Class_2_208CC9941471731A_129* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_129*, ::Class_2_208CC9941471731A_129*))((::PBYTE)hIl2Cpp + CLASS_1_C8B413EB4CB8F225___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
