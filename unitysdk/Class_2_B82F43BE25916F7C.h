#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD0A0FF0019FC986.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_2_B82F43BE25916F7C_APPLY_OFFSET UNITYSDK_OFFSET(0x184BF3C0)
#define CLASS_2_B82F43BE25916F7C_INIT_OFFSET UNITYSDK_OFFSET(0x184BF450)
#define CLASS_2_B82F43BE25916F7C_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x184BF4A0)
#define CLASS_2_B82F43BE25916F7C_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x184BF2C0)
#define CLASS_2_B82F43BE25916F7C_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x184BF310)
#define CLASS_2_B82F43BE25916F7C_ONFADING_OFFSET UNITYSDK_OFFSET(0x184BF260)
#define CLASS_2_B82F43BE25916F7C_RELEASE_OFFSET UNITYSDK_OFFSET(0x184BF410)
#define CLASS_2_B82F43BE25916F7C_TICK_OFFSET UNITYSDK_OFFSET(0x184BF360)
#define CLASS_2_B82F43BE25916F7C__CTOR_OFFSET UNITYSDK_OFFSET(0x184BF200)

inline static constexpr unsigned int Class_2_B82F43BE25916F7C_TypeDefinitionIndex = 49734;

class Class_2_B82F43BE25916F7C : public ::Class_1_AD0A0FF0019FC986
{
public:
	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_ONFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_ONFADINGBEGIN_OFFSET))(this, a1);
	}

	::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_ONFADINGEND_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_TICK_OFFSET))(this, a1);
	}

	::System::Void Apply(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_APPLY_OFFSET))(this, a1);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_RELEASE_OFFSET))(this);
	}

	::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_INIT_OFFSET))(this, a1);
	}

	::System::Void OnEnvObjEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_ONENVOBJENABLE_OFFSET))(this, a1);
	}
};
