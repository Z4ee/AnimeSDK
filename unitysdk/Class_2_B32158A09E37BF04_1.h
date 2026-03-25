#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD0A0FF0019FC986.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_303D5A33D1401D59;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }

#define CLASS_2_B32158A09E37BF04_1_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x89A43F0)
#define CLASS_2_B32158A09E37BF04_1_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x89A44A0)
#define CLASS_2_B32158A09E37BF04_1_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x89A4510)
#define CLASS_2_B32158A09E37BF04_1_ONFADING_OFFSET UNITYSDK_OFFSET(0x89A4440)
#define CLASS_2_B32158A09E37BF04_1_RELEASE_OFFSET UNITYSDK_OFFSET(0x89A4560)
#define CLASS_2_B32158A09E37BF04_1__CTOR_OFFSET UNITYSDK_OFFSET(0x89A4350)
#define CLASS_2_B32158A09E37BF04_1___IFIXBASEPROXY_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x89A45C0)
#define CLASS_2_B32158A09E37BF04_1___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x89A46A0)
#define CLASS_2_B32158A09E37BF04_1___IFIXBASEPROXY_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x89A4710)
#define CLASS_2_B32158A09E37BF04_1___IFIXBASEPROXY_ONFADING_OFFSET UNITYSDK_OFFSET(0x89A4630)
#define CLASS_2_B32158A09E37BF04_1___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x89A4780)

inline static constexpr unsigned int Class_2_B32158A09E37BF04_1_TypeDefinitionIndex = 39998;

class Class_2_B32158A09E37BF04_1 : public ::Class_1_AD0A0FF0019FC986
{
public:
	::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::RPG::GameCore::BlockNodeConfig* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Int32 a6, ::Class_1_303D5A33D1401D59* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::GameCore::BlockNodeConfig*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_2_B32158A09E37BF04_1__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void OnEnvObjEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B32158A09E37BF04_1_ONENVOBJENABLE_OFFSET))(this, a1);
	}

	::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_B32158A09E37BF04_1_ONFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_B32158A09E37BF04_1_ONFADINGBEGIN_OFFSET))(this, a1);
	}

	::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_B32158A09E37BF04_1_ONFADINGEND_OFFSET))(this, a1);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B32158A09E37BF04_1_RELEASE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnvObjEnable(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B32158A09E37BF04_1___IFIXBASEPROXY_ONENVOBJENABLE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_B32158A09E37BF04_1___IFIXBASEPROXY_ONFADING_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnFadingBegin(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_B32158A09E37BF04_1___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnFadingEnd(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_B32158A09E37BF04_1___IFIXBASEPROXY_ONFADINGEND_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B32158A09E37BF04_1___IFIXBASEPROXY_RELEASE_OFFSET))(this);
	}
};
