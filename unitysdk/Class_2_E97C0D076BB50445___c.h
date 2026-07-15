#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_402DF9909D154129_1;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_E97C0D076BB50445___C__BUILDROBOTDECISIONS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1816EF70)
#define CLASS_2_E97C0D076BB50445___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1816EF20)
#define CLASS_2_E97C0D076BB50445___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1816EF60)

inline static constexpr unsigned int Class_2_E97C0D076BB50445___c_TypeDefinitionIndex = 35807;

class Class_2_E97C0D076BB50445___c : public ::System::Object
{
public:
	static ::Class_2_E97C0D076BB50445___c** StaticGet___9()
	{
		return (::Class_2_E97C0D076BB50445___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E97C0D076BB50445___c_TypeDefinitionIndex)->GetStaticField(0x59530);
	}
	static ::System::Comparison_1<::Class_1_402DF9909D154129_1*>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::Class_1_402DF9909D154129_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E97C0D076BB50445___c_TypeDefinitionIndex)->GetStaticField(0x59538);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E97C0D076BB50445___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E97C0D076BB50445___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _BuildRobotDecisions_b__2_0(::Class_1_402DF9909D154129_1* a1, ::Class_1_402DF9909D154129_1* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_402DF9909D154129_1*, ::Class_1_402DF9909D154129_1*))((::PBYTE)hIl2Cpp + CLASS_2_E97C0D076BB50445___C__BUILDROBOTDECISIONS_B__2_0_OFFSET))(this, a1, a2);
	}
};
