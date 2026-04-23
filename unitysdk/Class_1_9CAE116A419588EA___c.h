#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_9CAE116A419588EA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE023D40)
#define CLASS_1_9CAE116A419588EA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE023D80)
#define CLASS_1_9CAE116A419588EA___C___TRYAPPLYSUMMONACTION_B__5_0_OFFSET UNITYSDK_OFFSET(0xE023D90)

inline static constexpr unsigned int Class_1_9CAE116A419588EA___c_TypeDefinitionIndex = 71190;

class Class_1_9CAE116A419588EA___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CAE116A419588EA___c_TypeDefinitionIndex)->GetStaticField(0x8410);
	}
	static ::Class_1_9CAE116A419588EA___c** StaticGet___9()
	{
		return (::Class_1_9CAE116A419588EA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CAE116A419588EA___c_TypeDefinitionIndex)->GetStaticField(0x8418);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CAE116A419588EA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CAE116A419588EA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __TryApplySummonAction_b__5_0(::Class_2_49CAB3DE74280C58* target)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_9CAE116A419588EA___C___TRYAPPLYSUMMONACTION_B__5_0_OFFSET))(this, target);
	}
};
