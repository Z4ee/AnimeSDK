#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_4_2001B222AE86A6B3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x160A5CE0)
#define CLASS_4_2001B222AE86A6B3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x160A5D20)
#define CLASS_4_2001B222AE86A6B3___C___EVALUATEMODIFIERCONTAINER_B__2_0_OFFSET UNITYSDK_OFFSET(0x160A5D30)

inline static constexpr unsigned int Class_4_2001B222AE86A6B3___c_TypeDefinitionIndex = 73687;

class Class_4_2001B222AE86A6B3___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_B66C1067C0468FBB*, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::Class_2_B66C1067C0468FBB*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_2001B222AE86A6B3___c_TypeDefinitionIndex)->GetStaticField(0x2A9A0);
	}
	static ::Class_4_2001B222AE86A6B3___c** StaticGet___9()
	{
		return (::Class_4_2001B222AE86A6B3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_2001B222AE86A6B3___c_TypeDefinitionIndex)->GetStaticField(0x2A9A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_2001B222AE86A6B3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2001B222AE86A6B3___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __EvaluateModifierContainer_b__2_0(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_4_2001B222AE86A6B3___C___EVALUATEMODIFIERCONTAINER_B__2_0_OFFSET))(this, a1);
	}
};
