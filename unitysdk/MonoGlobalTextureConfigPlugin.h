#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOGLOBALTEXTURECONFIGPLUGIN_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C3F2320)
#define MONOGLOBALTEXTURECONFIGPLUGIN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C3F24E0)
#define MONOGLOBALTEXTURECONFIGPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3F2660)
#define MONOGLOBALTEXTURECONFIGPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F2600)

inline static constexpr unsigned int MonoGlobalTextureConfigPlugin_TypeDefinitionIndex = 27024;

class MonoGlobalTextureConfigPlugin : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Boolean* StaticGet_s_DisableDecalHeightMap()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoGlobalTextureConfigPlugin_TypeDefinitionIndex)->GetStaticField(0x6EA0);
	}
	static ::System::Int32* StaticGet_s_MaxAnisotropicSamplingLevel()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoGlobalTextureConfigPlugin_TypeDefinitionIndex)->GetStaticField(0x6EA4);
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
