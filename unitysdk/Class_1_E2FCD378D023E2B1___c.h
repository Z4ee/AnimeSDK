#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CB66E39D32BF42FF_3;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_E2FCD378D023E2B1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBAA31B0)
#define CLASS_1_E2FCD378D023E2B1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBAA31F0)
#define CLASS_1_E2FCD378D023E2B1___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xBAA3200)

inline static constexpr unsigned int Class_1_E2FCD378D023E2B1___c_TypeDefinitionIndex = 79458;

class Class_1_E2FCD378D023E2B1___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_CB66E39D32BF42FF_3*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::Class_1_CB66E39D32BF42FF_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E2FCD378D023E2B1___c_TypeDefinitionIndex)->GetStaticField(0x55400);
	}
	static ::Class_1_E2FCD378D023E2B1___c** StaticGet___9()
	{
		return (::Class_1_E2FCD378D023E2B1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E2FCD378D023E2B1___c_TypeDefinitionIndex)->GetStaticField(0x55408);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E2FCD378D023E2B1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FCD378D023E2B1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ctor_b__0_0(::Class_1_CB66E39D32BF42FF_3* a1, ::Class_1_CB66E39D32BF42FF_3* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_CB66E39D32BF42FF_3*, ::Class_1_CB66E39D32BF42FF_3*))((::PBYTE)hIl2Cpp + CLASS_1_E2FCD378D023E2B1___C___CTOR_B__0_0_OFFSET))(this, a1, a2);
	}
};
