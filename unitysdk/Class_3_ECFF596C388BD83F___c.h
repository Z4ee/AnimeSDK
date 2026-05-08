#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F41D242A20F8FE06;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_ECFF596C388BD83F___C_METHOD_1_329E658EDAF0BBD5_OFFSET UNITYSDK_OFFSET(0x114B0290)
#define CLASS_3_ECFF596C388BD83F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x114B0240)
#define CLASS_3_ECFF596C388BD83F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x114B0280)

inline static constexpr unsigned int Class_3_ECFF596C388BD83F___c_TypeDefinitionIndex = 51782;

class Class_3_ECFF596C388BD83F___c : public ::System::Object
{
public:
	static ::Class_3_ECFF596C388BD83F___c** StaticGet___9()
	{
		return (::Class_3_ECFF596C388BD83F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_ECFF596C388BD83F___c_TypeDefinitionIndex)->GetStaticField(0x2B850);
	}
	static ::System::Action_1<::Class_3_F41D242A20F8FE06*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_F41D242A20F8FE06*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_ECFF596C388BD83F___c_TypeDefinitionIndex)->GetStaticField(0x2B858);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_ECFF596C388BD83F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECFF596C388BD83F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_329E658EDAF0BBD5(::Class_3_F41D242A20F8FE06* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + CLASS_3_ECFF596C388BD83F___C_METHOD_1_329E658EDAF0BBD5_OFFSET))(this, a1);
	}
};
