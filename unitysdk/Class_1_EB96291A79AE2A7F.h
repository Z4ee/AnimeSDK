#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define CLASS_1_EB96291A79AE2A7F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1104A810)

inline static constexpr unsigned int Class_1_EB96291A79AE2A7F_TypeDefinitionIndex = 57201;

class Class_1_EB96291A79AE2A7F : public ::System::Object
{
public:
	static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_Field_1_0()
	{
		return (::UnityEngine::ConsoleVariableIntProperty*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB96291A79AE2A7F_TypeDefinitionIndex)->GetStaticField(0x2F7E0);
	}
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_Field_1_1()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB96291A79AE2A7F_TypeDefinitionIndex)->GetStaticField(0x2F7F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB96291A79AE2A7F__CCTOR_OFFSET))();
	}
};
