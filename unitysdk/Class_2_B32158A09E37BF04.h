#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD0A0FF0019FC986.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_303D5A33D1401D59;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }

#define CLASS_2_B32158A09E37BF04_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x19A1F4D0)
#define CLASS_2_B32158A09E37BF04_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x19A1F660)
#define CLASS_2_B32158A09E37BF04_ONFADING_OFFSET UNITYSDK_OFFSET(0x19A1F520)
#define CLASS_2_B32158A09E37BF04__CTOR_OFFSET UNITYSDK_OFFSET(0x19A1F430)

inline static constexpr unsigned int Class_2_B32158A09E37BF04_TypeDefinitionIndex = 49733;

class Class_2_B32158A09E37BF04 : public ::Class_1_AD0A0FF0019FC986
{
public:
	::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::RPG::GameCore::BlockNodeConfig* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Int32 a6, ::Class_1_303D5A33D1401D59* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::GameCore::BlockNodeConfig*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_2_B32158A09E37BF04__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void OnEnvObjEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B32158A09E37BF04_ONENVOBJENABLE_OFFSET))(this, a1);
	}

	::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_B32158A09E37BF04_ONFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_B32158A09E37BF04_ONFADINGEND_OFFSET))(this, a1);
	}
};
