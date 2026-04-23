#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD0A0FF0019FC986.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_2_0ECE3B0FF0603AAF_APPLY_OFFSET UNITYSDK_OFFSET(0x94FFDF0)
#define CLASS_2_0ECE3B0FF0603AAF_INIT_OFFSET UNITYSDK_OFFSET(0x94FFE80)
#define CLASS_2_0ECE3B0FF0603AAF_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x94FFED0)
#define CLASS_2_0ECE3B0FF0603AAF_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x94FFCF0)
#define CLASS_2_0ECE3B0FF0603AAF_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x94FFD40)
#define CLASS_2_0ECE3B0FF0603AAF_ONFADING_OFFSET UNITYSDK_OFFSET(0x94FFC90)
#define CLASS_2_0ECE3B0FF0603AAF_RELEASE_OFFSET UNITYSDK_OFFSET(0x94FFE40)
#define CLASS_2_0ECE3B0FF0603AAF_TICK_OFFSET UNITYSDK_OFFSET(0x94FFD90)
#define CLASS_2_0ECE3B0FF0603AAF__CTOR_OFFSET UNITYSDK_OFFSET(0x94FFC40)
#define CLASS_2_0ECE3B0FF0603AAF___IFIXBASEPROXY_APPLY_OFFSET UNITYSDK_OFFSET(0x95000E0)
#define CLASS_2_0ECE3B0FF0603AAF___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x95001E0)
#define CLASS_2_0ECE3B0FF0603AAF___IFIXBASEPROXY_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x9500250)
#define CLASS_2_0ECE3B0FF0603AAF___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x94FFF90)
#define CLASS_2_0ECE3B0FF0603AAF___IFIXBASEPROXY_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x9500000)
#define CLASS_2_0ECE3B0FF0603AAF___IFIXBASEPROXY_ONFADING_OFFSET UNITYSDK_OFFSET(0x94FFF20)
#define CLASS_2_0ECE3B0FF0603AAF___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x9500150)
#define CLASS_2_0ECE3B0FF0603AAF___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9500070)

inline static constexpr unsigned int Class_2_0ECE3B0FF0603AAF_TypeDefinitionIndex = 45906;

class Class_2_0ECE3B0FF0603AAF : public ::Class_1_AD0A0FF0019FC986
{
public:
	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0ECE3B0FF0603AAF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_0ECE3B0FF0603AAF_ONFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_0ECE3B0FF0603AAF_ONFADINGBEGIN_OFFSET))(this, a1);
	}

	::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_0ECE3B0FF0603AAF_ONFADINGEND_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0ECE3B0FF0603AAF_TICK_OFFSET))(this, a1);
	}

	::System::Void Apply(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_0ECE3B0FF0603AAF_APPLY_OFFSET))(this, a1);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ECE3B0FF0603AAF_RELEASE_OFFSET))(this);
	}

	::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_0ECE3B0FF0603AAF_INIT_OFFSET))(this, a1);
	}

	::System::Void OnEnvObjEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0ECE3B0FF0603AAF_ONENVOBJENABLE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_0ECE3B0FF0603AAF___IFIXBASEPROXY_ONFADING_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnFadingBegin(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_0ECE3B0FF0603AAF___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnFadingEnd(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_0ECE3B0FF0603AAF___IFIXBASEPROXY_ONFADINGEND_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0ECE3B0FF0603AAF___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Apply(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_0ECE3B0FF0603AAF___IFIXBASEPROXY_APPLY_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ECE3B0FF0603AAF___IFIXBASEPROXY_RELEASE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Init(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_0ECE3B0FF0603AAF___IFIXBASEPROXY_INIT_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnEnvObjEnable(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0ECE3B0FF0603AAF___IFIXBASEPROXY_ONENVOBJENABLE_OFFSET))(this, P0);
	}
};
