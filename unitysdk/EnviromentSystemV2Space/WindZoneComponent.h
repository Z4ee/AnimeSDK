#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/WindTriggerData.h"
#include "unitysdk/EnviromentSystemV2Space/PrefabPropertyComponent.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_APPLY_OFFSET UNITYSDK_OFFSET(0xF93AF00)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0xF93B0D0)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0xF93AB40)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0xF93AB90)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_ONFADING_OFFSET UNITYSDK_OFFSET(0xF93AAE0)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_RELEASE_OFFSET UNITYSDK_OFFSET(0xF93AF80)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xF93AD50)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xF93B200)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT___IFIXBASEPROXY_APPLY_OFFSET UNITYSDK_OFFSET(0xF93B370)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xF93B400)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0xF93B270)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT___IFIXBASEPROXY_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0xF93B2C0)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT___IFIXBASEPROXY_ONFADING_OFFSET UNITYSDK_OFFSET(0xF93B210)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0xF93B3C0)
#define ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xF93B310)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int WindZoneComponent_TypeDefinitionIndex = 45943;

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

		::System::Void __iFixBaseProxy_OnFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT___IFIXBASEPROXY_ONFADING_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnFadingBegin(::ScenenLightManager::FadingState P0)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnFadingEnd(::ScenenLightManager::FadingState P0)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT___IFIXBASEPROXY_ONFADINGEND_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Apply(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT___IFIXBASEPROXY_APPLY_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT___IFIXBASEPROXY_RELEASE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_WINDZONECOMPONENT___IFIXBASEPROXY_INIT_OFFSET))(this, P0);
		}
	};
}
