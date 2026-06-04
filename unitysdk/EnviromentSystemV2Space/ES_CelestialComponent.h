#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PrefabPropertyComponent.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_C7C4EDD02A4426B2;
namespace EnviromentSystemV2Space { class AtmosphereCelestial; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_APPLY_OFFSET UNITYSDK_OFFSET(0x135D0640)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x135D0230)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_GETALLCELESTIALS_OFFSET UNITYSDK_OFFSET(0x135D0320)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0x135D07D0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x135D0500)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x135D0550)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_ONFADING_OFFSET UNITYSDK_OFFSET(0x135D04A0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_REFRESHCELESTIALS_OFFSET UNITYSDK_OFFSET(0x135D0280)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_REFRESHOBSERVER_OFFSET UNITYSDK_OFFSET(0x135D0400)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_RELEASE_OFFSET UNITYSDK_OFFSET(0x135D0790)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0x135D05A0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x135D0840)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x135D0820)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_APPLY_OFFSET UNITYSDK_OFFSET(0x135D0B80)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x135D0CA0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x135D0980)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x135D0A20)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_ONFADING_OFFSET UNITYSDK_OFFSET(0x135D08C0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x135D0C20)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x135D0AC0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int ES_CelestialComponent_TypeDefinitionIndex = 46479;

	class ES_CelestialComponent : public ::EnviromentSystemV2Space::PrefabPropertyComponent
	{
	public:
		static ::System::Int32* StaticGet_CelestialSphere3ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_CelestialComponent_TypeDefinitionIndex)->GetStaticField(0xCC50);
		}
		static ::System::Int32* StaticGet_CelestialSphere0ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_CelestialComponent_TypeDefinitionIndex)->GetStaticField(0xCC54);
		}
		static ::System::Int32* StaticGet_CelestialSphere2ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_CelestialComponent_TypeDefinitionIndex)->GetStaticField(0xCC58);
		}
		static ::System::Int32* StaticGet_CelestialSphere1ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_CelestialComponent_TypeDefinitionIndex)->GetStaticField(0xCC5C);
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

		::System::Void RefreshObserver(::Class_1_C7C4EDD02A4426B2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C7C4EDD02A4426B2*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_REFRESHOBSERVER_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_ONFADING_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnFadingBegin(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnFadingEnd(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_ONFADINGEND_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Apply(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_APPLY_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_RELEASE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_INIT_OFFSET))(this, a1);
		}
	};
}
