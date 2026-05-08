#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_1208881BFE20292A___C_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xF527B10)
#define CLASS_2_1208881BFE20292A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF527AC0)
#define CLASS_2_1208881BFE20292A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF527B00)

inline static constexpr unsigned int Class_2_1208881BFE20292A___c_TypeDefinitionIndex = 43858;

class Class_2_1208881BFE20292A___c : public ::System::Object
{
public:
	static ::Class_2_1208881BFE20292A___c** StaticGet___9()
	{
		return (::Class_2_1208881BFE20292A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1208881BFE20292A___c_TypeDefinitionIndex)->GetStaticField(0x40DD0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__12_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1208881BFE20292A___c_TypeDefinitionIndex)->GetStaticField(0x40DD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1208881BFE20292A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1208881BFE20292A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1208881BFE20292A___C_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}
};
