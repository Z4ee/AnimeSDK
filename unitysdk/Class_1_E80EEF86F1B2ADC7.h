#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianV2InitialFillMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define CLASS_1_E80EEF86F1B2ADC7_METHOD_1_9A015E0E585B34BD_OFFSET UNITYSDK_OFFSET(0x18812490)
#define CLASS_1_E80EEF86F1B2ADC7__CCTOR_OFFSET UNITYSDK_OFFSET(0x18812500)

inline static constexpr unsigned int Class_1_E80EEF86F1B2ADC7_TypeDefinitionIndex = 69296;

class Class_1_E80EEF86F1B2ADC7 : public ::System::Object
{
public:
	static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_LEKFCCMACGM()
	{
		return (::UnityEngine::ConsoleVariableIntProperty*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E80EEF86F1B2ADC7_TypeDefinitionIndex)->GetStaticField(0x59B60);
	}
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_OPJDJAIMMOG()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E80EEF86F1B2ADC7_TypeDefinitionIndex)->GetStaticField(0x59B70);
	}
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_LDEAODNEGCG()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E80EEF86F1B2ADC7_TypeDefinitionIndex)->GetStaticField(0x59B80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E80EEF86F1B2ADC7__CCTOR_OFFSET))();
	}

	static ::RPG::Client::EPedestrianV2InitialFillMode Method_1_9A015E0E585B34BD()
	{
		return ((::RPG::Client::EPedestrianV2InitialFillMode(*)())((::PBYTE)hIl2Cpp + CLASS_1_E80EEF86F1B2ADC7_METHOD_1_9A015E0E585B34BD_OFFSET))();
	}
};
