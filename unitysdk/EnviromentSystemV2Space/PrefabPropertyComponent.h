#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT_APPLY_OFFSET UNITYSDK_OFFSET(0x135D0BD0)
#define ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0x135D0CF0)
#define ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x135F17C0)
#define ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x135D09D0)
#define ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x135D0A70)
#define ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT_ONFADING_OFFSET UNITYSDK_OFFSET(0x135D0920)
#define ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT_RELEASE_OFFSET UNITYSDK_OFFSET(0x135D0C60)
#define ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0x135D0B20)
#define ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x135D0830)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int PrefabPropertyComponent_TypeDefinitionIndex = 46528;

	class PrefabPropertyComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT_ONFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT_ONFADINGBEGIN_OFFSET))(this, a1);
		}

		::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT_ONFADINGEND_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void Apply(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT_APPLY_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT_RELEASE_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT_INIT_OFFSET))(this, a1);
		}

		::System::Void OnEnvObjEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYCOMPONENT_ONENVOBJENABLE_OFFSET))(this, a1);
		}
	};
}
