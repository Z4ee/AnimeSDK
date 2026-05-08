#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_66CC8308C1BCC0BB___C_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0xF817480)
#define CLASS_2_66CC8308C1BCC0BB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF817430)
#define CLASS_2_66CC8308C1BCC0BB___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF817470)

inline static constexpr unsigned int Class_2_66CC8308C1BCC0BB___c_TypeDefinitionIndex = 79873;

class Class_2_66CC8308C1BCC0BB___c : public ::System::Object
{
public:
	static ::Class_2_66CC8308C1BCC0BB___c** StaticGet___9()
	{
		return (::Class_2_66CC8308C1BCC0BB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_66CC8308C1BCC0BB___c_TypeDefinitionIndex)->GetStaticField(0x45EA0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__2_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_66CC8308C1BCC0BB___c_TypeDefinitionIndex)->GetStaticField(0x45EA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_66CC8308C1BCC0BB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66CC8308C1BCC0BB___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66CC8308C1BCC0BB___C_METHOD_1_BA1BB49741CFDFE1_OFFSET))(this);
	}
};
