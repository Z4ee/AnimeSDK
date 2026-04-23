#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/ShaderKeyword.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define LOCALENVIROVOLUME_AWAKE_OFFSET UNITYSDK_OFFSET(0x90BB000)
#define LOCALENVIROVOLUME_METHOD_5_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x90BB0E0)
#define LOCALENVIROVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x90BB960)
#define LOCALENVIROVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x90BB8E0)
#define LOCALENVIROVOLUME_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0x90BB9E0)
#define LOCALENVIROVOLUME_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x90BBA80)
#define LOCALENVIROVOLUME_START_OFFSET UNITYSDK_OFFSET(0x90BB060)
#define LOCALENVIROVOLUME_UPDATE_OFFSET UNITYSDK_OFFSET(0x90BBB10)
#define LOCALENVIROVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x90BBCD0)

inline static constexpr unsigned int LocalEnviroVolume_TypeDefinitionIndex = 44216;

class LocalEnviroVolume : public ::UnityEngine::MonoBehaviour
{
public:
	static ::UnityEngine::Rendering::ShaderKeyword* StaticGet_Field_5_21()
	{
		return (::UnityEngine::Rendering::ShaderKeyword*)Il2CppClass::FromTypeDefinitionIndex(LocalEnviroVolume_TypeDefinitionIndex)->GetStaticField(0x10330);
	}
	static ::System::Int32* StaticGet_Field_5_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalEnviroVolume_TypeDefinitionIndex)->GetStaticField(0x10334);
	}
	::System::Boolean inverse; // 0x18
	::UnityEngine::Gradient* FogColor; // 0x20
	::System::Single _Local_FogDensity; // 0x28
	::System::Single _Local_FogNear; // 0x2C
	::System::Single _Local_FogFar; // 0x30
	::UnityEngine::Gradient* HeightFogColor; // 0x38
	::System::Single _Local_HeightFogBaseHeight; // 0x40
	::System::Single _Local_HeightFogRange; // 0x44
	::System::Single _Local_HeightFogDensity; // 0x48
	::System::Single _Local_HeightFogFogNear; // 0x4C
	::System::Single _Local_HeightFogFogFar; // 0x50
	::System::Single _Local_FogMiddleDensityScale; // 0x54
	::System::Single _Local_FogFarDensityScale; // 0x58
	::System::Single _Local_FogSkyBoxScale; // 0x5C
	::System::Single _Local_HeightFogSkyBoxScale; // 0x60
	::UnityEngine::Texture2D* Field_5_15; // 0x68
	::UnityEngine::Vector3 _Local_SceneLightDir; // 0x70
	::UnityEngine::Color _Local_SceneLightColor; // 0x7C
	::System::Single _Local_SceneLightIntensity; // 0x8C
	::System::Boolean _LocalIndoor; // 0x90
	::System::Single _Local_AmbientIntensity; // 0x94
	::UnityEngine::Renderer* Field_5_22; // 0x98
	::UnityEngine::Vector4 Field_5_24; // 0xA0
	::System::String* PresetEnviroAsset; // 0xB0
	::System::Boolean Field_5_26; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALENVIROVOLUME__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALENVIROVOLUME_AWAKE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALENVIROVOLUME_START_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALENVIROVOLUME_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALENVIROVOLUME_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALENVIROVOLUME_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALENVIROVOLUME_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
	}

	::System::Void Method_5_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALENVIROVOLUME_METHOD_5_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALENVIROVOLUME_UPDATE_OFFSET))(this);
	}
};
