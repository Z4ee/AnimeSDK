#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_1A20B83F8902C509___C_METHOD_1_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x114B0D90)
#define CLASS_2_1A20B83F8902C509___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x114B0D40)
#define CLASS_2_1A20B83F8902C509___C__CTOR_OFFSET UNITYSDK_OFFSET(0x114B0D80)

inline static constexpr unsigned int Class_2_1A20B83F8902C509___c_TypeDefinitionIndex = 74621;

class Class_2_1A20B83F8902C509___c : public ::System::Object
{
public:
	static ::Class_2_1A20B83F8902C509___c** StaticGet___9()
	{
		return (::Class_2_1A20B83F8902C509___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A20B83F8902C509___c_TypeDefinitionIndex)->GetStaticField(0x31360);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__17_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A20B83F8902C509___c_TypeDefinitionIndex)->GetStaticField(0x31368);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1A20B83F8902C509___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A20B83F8902C509___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A20B83F8902C509___C_METHOD_1_9765352E01408D38_OFFSET))(this);
	}
};
