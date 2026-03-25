#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define SHADERWARMUPCONFIGS_GET_ISPSOWARMUP_OFFSET UNITYSDK_OFFSET(0xABC6630)
#define SHADERWARMUPCONFIGS_GET_SUPPORTPSOWARMUP_OFFSET UNITYSDK_OFFSET(0xABC6620)
#define SHADERWARMUPCONFIGS__CCTOR_OFFSET UNITYSDK_OFFSET(0xABC6690)

inline static constexpr unsigned int ShaderWarmupConfigs_TypeDefinitionIndex = 38297;

class ShaderWarmupConfigs : public ::System::Object
{
public:
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_PreferPSOWarmupCVar()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(ShaderWarmupConfigs_TypeDefinitionIndex)->GetStaticField(0x11B90);
	}
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_EnableWarmupCVar()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(ShaderWarmupConfigs_TypeDefinitionIndex)->GetStaticField(0x11BA0);
	}
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_ForcePSOIgnoreUserSettingsCVar()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(ShaderWarmupConfigs_TypeDefinitionIndex)->GetStaticField(0x11BB0);
	}
	static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_PSOWarmupCountPerTickCVar()
	{
		return (::UnityEngine::ConsoleVariableIntProperty*)Il2CppClass::FromTypeDefinitionIndex(ShaderWarmupConfigs_TypeDefinitionIndex)->GetStaticField(0x11BC0);
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
