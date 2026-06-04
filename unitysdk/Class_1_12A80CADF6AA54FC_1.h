#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"

#define CLASS_1_12A80CADF6AA54FC_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x14530190)

inline static constexpr unsigned int Class_1_12A80CADF6AA54FC_1_TypeDefinitionIndex = 53776;

class Class_1_12A80CADF6AA54FC_1 : public ::System::Object
{
public:
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_Field_1_0()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(Class_1_12A80CADF6AA54FC_1_TypeDefinitionIndex)->GetStaticField(0x4BA70);
	}
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_Field_1_1()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(Class_1_12A80CADF6AA54FC_1_TypeDefinitionIndex)->GetStaticField(0x4BA80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12A80CADF6AA54FC_1__CCTOR_OFFSET))();
	}
};
