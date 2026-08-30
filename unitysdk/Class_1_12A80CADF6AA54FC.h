#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"

#define CLASS_1_12A80CADF6AA54FC__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B1A920)

inline static constexpr unsigned int Class_1_12A80CADF6AA54FC_TypeDefinitionIndex = 50429;

class Class_1_12A80CADF6AA54FC : public ::System::Object
{
public:
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_LHGHGMBIIFO()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(Class_1_12A80CADF6AA54FC_TypeDefinitionIndex)->GetStaticField(0x5EB90);
	}
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_FNHMMANMDHK()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(Class_1_12A80CADF6AA54FC_TypeDefinitionIndex)->GetStaticField(0x5EBA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12A80CADF6AA54FC__CCTOR_OFFSET))();
	}
};
