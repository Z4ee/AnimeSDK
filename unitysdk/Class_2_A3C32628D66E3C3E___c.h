#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_A3C32628D66E3C3E___C_METHOD_1_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x123F5D60)
#define CLASS_2_A3C32628D66E3C3E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x123F5D10)
#define CLASS_2_A3C32628D66E3C3E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x123F5D50)

inline static constexpr unsigned int Class_2_A3C32628D66E3C3E___c_TypeDefinitionIndex = 40475;

class Class_2_A3C32628D66E3C3E___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__8_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3C32628D66E3C3E___c_TypeDefinitionIndex)->GetStaticField(0x39660);
	}
	static ::Class_2_A3C32628D66E3C3E___c** StaticGet___9()
	{
		return (::Class_2_A3C32628D66E3C3E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3C32628D66E3C3E___c_TypeDefinitionIndex)->GetStaticField(0x39668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A3C32628D66E3C3E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3C32628D66E3C3E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3C32628D66E3C3E___C_METHOD_1_24B05D2E15A5C3C8_OFFSET))(this);
	}
};
