#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define CLASS_1_EB96291A79AE2A7F__CCTOR_OFFSET UNITYSDK_OFFSET(0xBA44C90)

inline static constexpr unsigned int Class_1_EB96291A79AE2A7F_TypeDefinitionIndex = 69924;

class Class_1_EB96291A79AE2A7F : public ::System::Object
{
public:
	static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_GFMGCKBFNOJ()
	{
		return (::UnityEngine::ConsoleVariableIntProperty*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB96291A79AE2A7F_TypeDefinitionIndex)->GetStaticField(0x16810);
	}
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_MOKKDBFNLGM()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB96291A79AE2A7F_TypeDefinitionIndex)->GetStaticField(0x16820);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB96291A79AE2A7F__CCTOR_OFFSET))();
	}
};
