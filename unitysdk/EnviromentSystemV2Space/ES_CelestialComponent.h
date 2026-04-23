#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PrefabPropertyComponent.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_B69B8B108BBE7284;
namespace EnviromentSystemV2Space { class AtmosphereCelestial; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_APPLY_OFFSET UNITYSDK_OFFSET(0xF918860)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xF918440)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_GETALLCELESTIALS_OFFSET UNITYSDK_OFFSET(0xF918530)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0xF9189F0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0xF918710)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0xF918760)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_ONFADING_OFFSET UNITYSDK_OFFSET(0xF9186B0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_REFRESHCELESTIALS_OFFSET UNITYSDK_OFFSET(0xF918490)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_REFRESHOBSERVER_OFFSET UNITYSDK_OFFSET(0xF918610)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_RELEASE_OFFSET UNITYSDK_OFFSET(0xF9189B0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xF9187B0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xF918A60)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xF918A40)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_APPLY_OFFSET UNITYSDK_OFFSET(0xF918DA0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xF918EC0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0xF918BA0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0xF918C40)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_ONFADING_OFFSET UNITYSDK_OFFSET(0xF918AE0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0xF918E40)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xF918CE0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int ES_CelestialComponent_TypeDefinitionIndex = 45896;

	class ES_CelestialComponent : public ::EnviromentSystemV2Space::PrefabPropertyComponent
	{
	public:
		static ::System::Int32* StaticGet_CelestialSphere0ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_CelestialComponent_TypeDefinitionIndex)->GetStaticField(0x47C0);
		}
		static ::System::Int32* StaticGet_CelestialSphere3ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_CelestialComponent_TypeDefinitionIndex)->GetStaticField(0x47C4);
		}
		static ::System::Int32* StaticGet_CelestialSphere2ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_CelestialComponent_TypeDefinitionIndex)->GetStaticField(0x47C8);
		}
		static ::System::Int32* StaticGet_CelestialSphere1ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_CelestialComponent_TypeDefinitionIndex)->GetStaticField(0x47CC);
		}
		::System::String* bindSolarSystemName; // 0x18
		::Il2CppArray<::EnviromentSystemV2Space::AtmosphereCelestial*>* Field_6_5; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_AWAKE_OFFSET))(this);
		}

		::System::Void GetAllCelestials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_GETALLCELESTIALS_OFFSET))(this);
		}

		::System::Void RefreshCelestials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_REFRESHCELESTIALS_OFFSET))(this);
		}

		::System::Void RefreshObserver(::Class_1_B69B8B108BBE7284* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B69B8B108BBE7284*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_REFRESHOBSERVER_OFFSET))(this, a1);
		}

		::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_ONFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_ONFADINGBEGIN_OFFSET))(this, a1);
		}

		::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_ONFADINGEND_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void Apply(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_APPLY_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_RELEASE_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_INIT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_ONFADING_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnFadingBegin(::ScenenLightManager::FadingState P0)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnFadingEnd(::ScenenLightManager::FadingState P0)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_ONFADINGEND_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Apply(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_APPLY_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_RELEASE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_INIT_OFFSET))(this, P0);
		}
	};
}
