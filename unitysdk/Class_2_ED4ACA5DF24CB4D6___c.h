#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_ED4ACA5DF24CB4D6___C_METHOD_1_9B6BAF49879647BD_OFFSET UNITYSDK_OFFSET(0xB19C110)
#define CLASS_2_ED4ACA5DF24CB4D6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB19C0C0)
#define CLASS_2_ED4ACA5DF24CB4D6___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB19C100)

inline static constexpr unsigned int Class_2_ED4ACA5DF24CB4D6___c_TypeDefinitionIndex = 76831;

class Class_2_ED4ACA5DF24CB4D6___c : public ::System::Object
{
public:
	static ::Class_2_ED4ACA5DF24CB4D6___c** StaticGet___9()
	{
		return (::Class_2_ED4ACA5DF24CB4D6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED4ACA5DF24CB4D6___c_TypeDefinitionIndex)->GetStaticField(0x3EBA0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__11_1()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED4ACA5DF24CB4D6___c_TypeDefinitionIndex)->GetStaticField(0x3EBA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_ED4ACA5DF24CB4D6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED4ACA5DF24CB4D6___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9B6BAF49879647BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED4ACA5DF24CB4D6___C_METHOD_1_9B6BAF49879647BD_OFFSET))(this);
	}
};
