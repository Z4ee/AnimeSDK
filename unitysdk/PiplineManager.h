#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define PIPLINEMANAGER_CACHERENDERERS_OFFSET UNITYSDK_OFFSET(0x1D5C7460)
#define PIPLINEMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D5C73D0)
#define PIPLINEMANAGER_REFRESHRENDERERS_OFFSET UNITYSDK_OFFSET(0x1D5C7F20)
#define PIPLINEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D5C7B00)
#define PIPLINEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5C7FD0)
#define PIPLINEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C7F70)

inline static constexpr unsigned int PiplineManager_TypeDefinitionIndex = 56436;

class PiplineManager : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::String** StaticGet_TargetShaderName()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PiplineManager_TypeDefinitionIndex)->GetStaticField(0x459E0);
	}
	static ::System::Int32* StaticGet_DisplacementStrengthID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PiplineManager_TypeDefinitionIndex)->GetStaticField(0x10230);
	}
	static ::System::Int32* StaticGet_RadiusFixID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PiplineManager_TypeDefinitionIndex)->GetStaticField(0x10234);
	}
	static ::System::Int32* StaticGet_CharacterPosID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PiplineManager_TypeDefinitionIndex)->GetStaticField(0x10238);
	}
	static ::System::Int32* StaticGet_EffectRadiusID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PiplineManager_TypeDefinitionIndex)->GetStaticField(0x1023C);
	}
	::UnityEngine::GameObject* characterProxy; // 0x18
	::System::Single effectRadius; // 0x20
	::System::Single displacementStrength; // 0x24
	::System::Single radiusFix; // 0x28
	::UnityEngine::MaterialPropertyBlock* _mpb; // 0x30
	::Il2CppArray<::UnityEngine::Renderer*>* _renderers; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPLINEMANAGER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPLINEMANAGER__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPLINEMANAGER_ONENABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPLINEMANAGER_UPDATE_OFFSET))(this);
	}

	::System::Void CacheRenderers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPLINEMANAGER_CACHERENDERERS_OFFSET))(this);
	}

	::System::Void RefreshRenderers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPLINEMANAGER_REFRESHRENDERERS_OFFSET))(this);
	}
};
