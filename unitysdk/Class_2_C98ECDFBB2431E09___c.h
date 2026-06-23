#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_2_C98ECDFBB2431E09___C_METHOD_1_18E436D8441F7C1E_1_OFFSET UNITYSDK_OFFSET(0x12D86900)
#define CLASS_2_C98ECDFBB2431E09___C_METHOD_1_18E436D8441F7C1E_OFFSET UNITYSDK_OFFSET(0x12D86800)
#define CLASS_2_C98ECDFBB2431E09___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D867B0)
#define CLASS_2_C98ECDFBB2431E09___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12D867F0)

inline static constexpr unsigned int Class_2_C98ECDFBB2431E09___c_TypeDefinitionIndex = 72380;

class Class_2_C98ECDFBB2431E09___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Boolean>** StaticGet___9__39_1()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C98ECDFBB2431E09___c_TypeDefinitionIndex)->GetStaticField(0x490C0);
	}
	static ::Class_2_C98ECDFBB2431E09___c** StaticGet___9()
	{
		return (::Class_2_C98ECDFBB2431E09___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C98ECDFBB2431E09___c_TypeDefinitionIndex)->GetStaticField(0x490C8);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet___9__39_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C98ECDFBB2431E09___c_TypeDefinitionIndex)->GetStaticField(0x490D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_18E436D8441F7C1E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09___C_METHOD_1_18E436D8441F7C1E_OFFSET))(this, a1);
	}

	::System::Void Method_1_18E436D8441F7C1E_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09___C_METHOD_1_18E436D8441F7C1E_1_OFFSET))(this, a1);
	}
};
