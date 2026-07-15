#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/WindTriggerData.h"
#include "unitysdk/EnviromentSystemV2Space/PrefabPropertyComponent.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_APPLY_OFFSET UNITYSDK_OFFSET(0x17C3F220)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0x17C3F410)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x17C3ECE0)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x17C3ED30)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_ONFADING_OFFSET UNITYSDK_OFFSET(0x17C3EC80)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_RELEASE_OFFSET UNITYSDK_OFFSET(0x17C3F2A0)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0x17C3EFB0)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17C3F560)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int WindZoneComponent_TypeDefinitionIndex = 47491;

	class WindZoneComponent : public ::EnviromentSystemV2Space::PrefabPropertyComponent
	{
	public:
		::System::Collections::Generic::List_1<::EnviromentSystem::WindTriggerData>* WindTriggerDatas; // 0x18
		::System::Boolean m_EnbaleGpuWindZone; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_ONFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_ONFADINGBEGIN_OFFSET))(this, a1);
		}

		::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_ONFADINGEND_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void Apply(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_APPLY_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_RELEASE_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_INIT_OFFSET))(this, a1);
		}
	};
}
