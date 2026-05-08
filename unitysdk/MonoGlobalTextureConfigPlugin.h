#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOGLOBALTEXTURECONFIGPLUGIN_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ACFD3B0)
#define MONOGLOBALTEXTURECONFIGPLUGIN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1ACFD570)
#define MONOGLOBALTEXTURECONFIGPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACFD6F0)
#define MONOGLOBALTEXTURECONFIGPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACFD690)

inline static constexpr unsigned int MonoGlobalTextureConfigPlugin_TypeDefinitionIndex = 29552;

class MonoGlobalTextureConfigPlugin : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Boolean* StaticGet_s_DisableDecalHeightMap()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoGlobalTextureConfigPlugin_TypeDefinitionIndex)->GetStaticField(0x7180);
	}
	static ::System::Int32* StaticGet_s_MaxAnisotropicSamplingLevel()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoGlobalTextureConfigPlugin_TypeDefinitionIndex)->GetStaticField(0x7184);
	}
	::System::Int32 OldAnisotropicSamplingLevel; // 0x18
	::System::Boolean disableDecalHeightMap; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGLOBALTEXTURECONFIGPLUGIN__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOGLOBALTEXTURECONFIGPLUGIN__CCTOR_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGLOBALTEXTURECONFIGPLUGIN_AWAKE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGLOBALTEXTURECONFIGPLUGIN_ONDESTROY_OFFSET))(this);
	}
};
