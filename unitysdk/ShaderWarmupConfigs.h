#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define SHADERWARMUPCONFIGS_GET_ISPSOWARMUP_OFFSET UNITYSDK_OFFSET(0x1BF492E0)
#define SHADERWARMUPCONFIGS_GET_SUPPORTPSOWARMUP_OFFSET UNITYSDK_OFFSET(0x1BF492D0)
#define SHADERWARMUPCONFIGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF49340)

inline static constexpr unsigned int ShaderWarmupConfigs_TypeDefinitionIndex = 47893;

class ShaderWarmupConfigs : public ::System::Object
{
public:
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_EnableWarmupCVar()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(ShaderWarmupConfigs_TypeDefinitionIndex)->GetStaticField(0x1A8A0);
	}
	static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_PSOWarmupCountPerTickCVar()
	{
		return (::UnityEngine::ConsoleVariableIntProperty*)Il2CppClass::FromTypeDefinitionIndex(ShaderWarmupConfigs_TypeDefinitionIndex)->GetStaticField(0x1A8B0);
	}
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_PreferPSOWarmupCVar()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(ShaderWarmupConfigs_TypeDefinitionIndex)->GetStaticField(0x1A8C0);
	}
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_ForcePSOIgnoreUserSettingsCVar()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(ShaderWarmupConfigs_TypeDefinitionIndex)->GetStaticField(0x1A8D0);
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
