#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableStringProperty.h"

#define CLASS_1_534AF681CC2BD5FD_90_CLASS_1_95B92DE829696D52__CCTOR_OFFSET UNITYSDK_OFFSET(0x1636D570)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_90_Class_1_95B92DE829696D52_TypeDefinitionIndex = 56696;

class Class_1_534AF681CC2BD5FD_90_Class_1_95B92DE829696D52 : public ::System::Object
{
public:
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_Field_1_0()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_90_Class_1_95B92DE829696D52_TypeDefinitionIndex)->GetStaticField(0x321E0);
	}
	static ::UnityEngine::ConsoleVariableStringProperty* StaticGet_Field_1_1()
	{
		return (::UnityEngine::ConsoleVariableStringProperty*)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_90_Class_1_95B92DE829696D52_TypeDefinitionIndex)->GetStaticField(0x321F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_90_CLASS_1_95B92DE829696D52__CCTOR_OFFSET))();
	}
};
