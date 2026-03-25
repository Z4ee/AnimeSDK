#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_FA999A912E5D9153___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1CBF00)
#define CLASS_3_FA999A912E5D9153___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA1CBF40)
#define CLASS_3_FA999A912E5D9153___C___TRYAPPLY_B__0_0_OFFSET UNITYSDK_OFFSET(0xA1CBF50)

inline static constexpr unsigned int Class_3_FA999A912E5D9153___c_TypeDefinitionIndex = 63026;

class Class_3_FA999A912E5D9153___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FA999A912E5D9153___c_TypeDefinitionIndex)->GetStaticField(0x235E0);
	}
	static ::Class_3_FA999A912E5D9153___c** StaticGet___9()
	{
		return (::Class_3_FA999A912E5D9153___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FA999A912E5D9153___c_TypeDefinitionIndex)->GetStaticField(0x235E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FA999A912E5D9153___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA999A912E5D9153___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __TryApply_b__0_0(::Class_2_49CAB3DE74280C58* target)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_3_FA999A912E5D9153___C___TRYAPPLY_B__0_0_OFFSET))(this, target);
	}
};
