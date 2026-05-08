#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture2D; }

#define SCENEFOGCARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19A9E580)
#define SCENEFOGCARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19A9DC90)
#define SCENEFOGCARD_REFRESHMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x19A9E010)
#define SCENEFOGCARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A9E8A0)
#define SCENEFOGCARD__CTOR_OFFSET UNITYSDK_OFFSET(0x19A9E810)

inline static constexpr unsigned int SceneFogCard_TypeDefinitionIndex = 29483;

class SceneFogCard : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::String** StaticGet__VSpeed()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x23910);
	}
	static ::System::String** StaticGet__SofDepth()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x23918);
	}
	static ::System::String** StaticGet__Noise()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x23920);
	}
	static ::System::String** StaticGet__USpeed()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x23928);
	}
	static ::System::Int32* StaticGet__Coverage()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5E00);
	}
	static ::System::Int32* StaticGet__FallOff()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5E04);
	}
	static ::System::Int32* StaticGet__MainLightScatteringColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5E08);
	}
	static ::System::Int32* StaticGet__HeightFogColorBlend()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5E0C);
	}
	static ::System::Int32* StaticGet__MieG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5E10);
	}
	static ::UnityEngine::Color* StaticGet_weatherControledSceneFogCardAmbientScatteringColor()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5E14);
	}
	static ::System::Int32* StaticGet__NoiseScale()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5E24);
	}
	static ::System::Int32* StaticGet__Density()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5E28);
	}
	static ::System::Int32* StaticGet__AmbientScatteringColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5E2C);
	}
	static ::System::Int32* StaticGet__BottomFade()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5E30);
	}
	static ::System::Int32* StaticGet__EdgeFade()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5E34);
	}
	::UnityEngine::Color MainLightScatteringColor; // 0x18
	::UnityEngine::Color AmbientScatteringColor; // 0x28
	::System::Single MieG; // 0x38
	::System::Single HeightFogColorBlend; // 0x3C
	::System::Single Density; // 0x40
	::System::Single Coverage; // 0x44
	::System::Single FallOff; // 0x48
	::System::Single SofDepth; // 0x4C
	::System::Single EdgeFade; // 0x50
	::System::Single BottomFade; // 0x54
	::UnityEngine::Texture2D* NoiseTex; // 0x58
	::System::Single NoiseScale; // 0x60
	::System::Single USpeed; // 0x64
	::System::Single VSpeed; // 0x68
	::UnityEngine::MeshRenderer* renderer; // 0x70
	::UnityEngine::Material* instancedMaterial; // 0x78
	::UnityEngine::Material* rawMaterial; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEFOGCARD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENEFOGCARD__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEFOGCARD_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEFOGCARD_ONDESTROY_OFFSET))(this);
	}

	::System::Void RefreshMaterialProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEFOGCARD_REFRESHMATERIALPROPERTIES_OFFSET))(this);
	}
};
