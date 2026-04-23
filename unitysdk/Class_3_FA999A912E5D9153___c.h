#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_FA999A912E5D9153___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x123DBB10)
#define CLASS_3_FA999A912E5D9153___C__CTOR_OFFSET UNITYSDK_OFFSET(0x123DBB50)
#define CLASS_3_FA999A912E5D9153___C___TRYAPPLY_B__0_0_OFFSET UNITYSDK_OFFSET(0x123DBB60)

inline static constexpr unsigned int Class_3_FA999A912E5D9153___c_TypeDefinitionIndex = 71066;

class Class_3_FA999A912E5D9153___c : public ::System::Object
{
public:
	static ::Class_3_FA999A912E5D9153___c** StaticGet___9()
	{
		return (::Class_3_FA999A912E5D9153___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FA999A912E5D9153___c_TypeDefinitionIndex)->GetStaticField(0x6260);
	}
	static ::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FA999A912E5D9153___c_TypeDefinitionIndex)->GetStaticField(0x6268);
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
