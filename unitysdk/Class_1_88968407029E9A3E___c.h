#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_88968407029E9A3E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F8B700)
#define CLASS_1_88968407029E9A3E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8B740)
#define CLASS_1_88968407029E9A3E___C___TRYAPPLYSUMMONACTION_B__5_0_OFFSET UNITYSDK_OFFSET(0x17F8B750)

inline static constexpr unsigned int Class_1_88968407029E9A3E___c_TypeDefinitionIndex = 73653;

class Class_1_88968407029E9A3E___c : public ::System::Object
{
public:
	static ::Class_1_88968407029E9A3E___c** StaticGet___9()
	{
		return (::Class_1_88968407029E9A3E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88968407029E9A3E___c_TypeDefinitionIndex)->GetStaticField(0x43110);
	}
	static ::System::Func_2<::Class_2_B66C1067C0468FBB*, ::System::Int32>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::Class_2_B66C1067C0468FBB*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88968407029E9A3E___c_TypeDefinitionIndex)->GetStaticField(0x43118);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88968407029E9A3E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88968407029E9A3E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __TryApplySummonAction_b__5_0(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_88968407029E9A3E___C___TRYAPPLYSUMMONACTION_B__5_0_OFFSET))(this, a1);
	}
};
