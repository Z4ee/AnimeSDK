#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_D464F1E708404DBC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A6C6E0)
#define CLASS_3_D464F1E708404DBC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A6C720)
#define CLASS_3_D464F1E708404DBC___C___TRYAPPLY_B__4_0_OFFSET UNITYSDK_OFFSET(0x8A6C730)

inline static constexpr unsigned int Class_3_D464F1E708404DBC___c_TypeDefinitionIndex = 63011;

class Class_3_D464F1E708404DBC___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_49CAB3DE74280C58*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::Class_2_49CAB3DE74280C58*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D464F1E708404DBC___c_TypeDefinitionIndex)->GetStaticField(0x363B0);
	}
	static ::Class_3_D464F1E708404DBC___c** StaticGet___9()
	{
		return (::Class_3_D464F1E708404DBC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D464F1E708404DBC___c_TypeDefinitionIndex)->GetStaticField(0x363B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D464F1E708404DBC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D464F1E708404DBC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __TryApply_b__4_0(::Class_2_49CAB3DE74280C58* a, ::Class_2_49CAB3DE74280C58* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_3_D464F1E708404DBC___C___TRYAPPLY_B__4_0_OFFSET))(this, a, b);
	}
};
