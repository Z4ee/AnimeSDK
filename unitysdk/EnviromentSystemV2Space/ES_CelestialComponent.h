#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PrefabPropertyComponent.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_C7C4EDD02A4426B2;
namespace EnviromentSystemV2Space { class AtmosphereCelestial; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_APPLY_OFFSET UNITYSDK_OFFSET(0x10351AD0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xFBC73F0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_GETALLCELESTIALS_OFFSET UNITYSDK_OFFSET(0xFBC74E0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0x10351C60)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x10351980)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x103519D0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_ONFADING_OFFSET UNITYSDK_OFFSET(0x10351920)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_REFRESHCELESTIALS_OFFSET UNITYSDK_OFFSET(0xFBC7440)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_REFRESHOBSERVER_OFFSET UNITYSDK_OFFSET(0x10351880)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_RELEASE_OFFSET UNITYSDK_OFFSET(0x10351C20)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0x10351A20)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x10351CD0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x10351CB0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_APPLY_OFFSET UNITYSDK_OFFSET(0x10352010)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x10352130)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x10351E10)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x10351EB0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_ONFADING_OFFSET UNITYSDK_OFFSET(0x10351D50)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x103520B0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CELESTIALCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10351F50)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int ES_CelestialComponent_TypeDefinitionIndex = 39987;

	class ES_CelestialComponent : public ::EnviromentSystemV2Space::PrefabPropertyComponent
	{
	public:
		static ::System::Int32* StaticGet_CelestialSphere3ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_CelestialComponent_TypeDefinitionIndex)->GetStaticField(0x5210);
		}
		static ::System::Int32* StaticGet_CelestialSphere0ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_CelestialComponent_TypeDefinitionIndex)->GetStaticField(0x5214);
		}
		static ::System::Int32* StaticGet_CelestialSphere1ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_CelestialComponent_TypeDefinitionIndex)->GetStaticField(0x5218);
		}
		static ::System::Int32* StaticGet_CelestialSphere2ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_CelestialComponent_TypeDefinitionIndex)->GetStaticField(0x521C);
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
