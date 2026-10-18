#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define SHADERWARMUPCONFIGS_GET_ISPSOWARMUP_OFFSET UNITYSDK_OFFSET(0xE969860)
#define SHADERWARMUPCONFIGS_GET_SUPPORTPSOWARMUP_OFFSET UNITYSDK_OFFSET(0xE969850)
#define SHADERWARMUPCONFIGS__CCTOR_OFFSET UNITYSDK_OFFSET(0xE9698C0)

inline static constexpr unsigned int ShaderWarmupConfigs_TypeDefinitionIndex = 47433;

class ShaderWarmupConfigs : public ::System::Object
{
public:
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_ForcePSOIgnoreUserSettingsCVar()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(ShaderWarmupConfigs_TypeDefinitionIndex)->GetStaticField(0xB510);
	}
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_EnableWarmupCVar()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(ShaderWarmupConfigs_TypeDefinitionIndex)->GetStaticField(0xB520);
	}
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_PreferPSOWarmupCVar()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(ShaderWarmupConfigs_TypeDefinitionIndex)->GetStaticField(0xB530);
	}
	static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_PSOWarmupCountPerTickCVar()
	{
		return (::UnityEngine::ConsoleVariableIntProperty*)Il2CppClass::FromTypeDefinitionIndex(ShaderWarmupConfigs_TypeDefinitionIndex)->GetStaticField(0xB540);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SHADERWARMUPCONFIGS__CCTOR_OFFSET))();
	}

	static ::System::Boolean get_SupportPSOWarmup()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SHADERWARMUPCONFIGS_GET_SUPPORTPSOWARMUP_OFFSET))();
	}

	static ::System::Boolean get_IsPSOWarmup()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SHADERWARMUPCONFIGS_GET_ISPSOWARMUP_OFFSET))();
	}
};
