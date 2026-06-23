#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_ED4ACA5DF24CB4D6___C_METHOD_1_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x142EE3D0)
#define CLASS_2_ED4ACA5DF24CB4D6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x142EE380)
#define CLASS_2_ED4ACA5DF24CB4D6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x142EE3C0)

inline static constexpr unsigned int Class_2_ED4ACA5DF24CB4D6___c_TypeDefinitionIndex = 58733;

class Class_2_ED4ACA5DF24CB4D6___c : public ::System::Object
{
public:
	static ::Class_2_ED4ACA5DF24CB4D6___c** StaticGet___9()
	{
		return (::Class_2_ED4ACA5DF24CB4D6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED4ACA5DF24CB4D6___c_TypeDefinitionIndex)->GetStaticField(0x423E0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__11_1()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED4ACA5DF24CB4D6___c_TypeDefinitionIndex)->GetStaticField(0x423E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_ED4ACA5DF24CB4D6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED4ACA5DF24CB4D6___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED4ACA5DF24CB4D6___C_METHOD_1_8DC652D916C182B2_OFFSET))(this);
	}
};
