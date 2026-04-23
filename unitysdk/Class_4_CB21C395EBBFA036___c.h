#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_4_CB21C395EBBFA036___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A01E40)
#define CLASS_4_CB21C395EBBFA036___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9A01E80)
#define CLASS_4_CB21C395EBBFA036___C___EVALUATEMODIFIERCONTAINER_B__2_0_OFFSET UNITYSDK_OFFSET(0x9A01E90)

inline static constexpr unsigned int Class_4_CB21C395EBBFA036___c_TypeDefinitionIndex = 71224;

class Class_4_CB21C395EBBFA036___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_CB21C395EBBFA036___c_TypeDefinitionIndex)->GetStaticField(0x152D0);
	}
	static ::Class_4_CB21C395EBBFA036___c** StaticGet___9()
	{
		return (::Class_4_CB21C395EBBFA036___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_CB21C395EBBFA036___c_TypeDefinitionIndex)->GetStaticField(0x152D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_CB21C395EBBFA036___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CB21C395EBBFA036___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __EvaluateModifierContainer_b__2_0(::Class_2_49CAB3DE74280C58* target)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_4_CB21C395EBBFA036___C___EVALUATEMODIFIERCONTAINER_B__2_0_OFFSET))(this, target);
	}
};
