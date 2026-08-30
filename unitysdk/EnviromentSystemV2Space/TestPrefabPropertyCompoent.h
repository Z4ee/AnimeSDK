#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PrefabPropertyComponent.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEMV2SPACE_TESTPREFABPROPERTYCOMPOENT_INIT_OFFSET UNITYSDK_OFFSET(0x153A7C50)
#define ENVIROMENTSYSTEMV2SPACE_TESTPREFABPROPERTYCOMPOENT_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x153A7BB0)
#define ENVIROMENTSYSTEMV2SPACE_TESTPREFABPROPERTYCOMPOENT_ONFADING_OFFSET UNITYSDK_OFFSET(0x153A7B00)
#define ENVIROMENTSYSTEMV2SPACE_TESTPREFABPROPERTYCOMPOENT__CTOR_OFFSET UNITYSDK_OFFSET(0x153A7CE0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int TestPrefabPropertyCompoent_TypeDefinitionIndex = 49737;

	class TestPrefabPropertyCompoent : public ::EnviromentSystemV2Space::PrefabPropertyComponent
	{
	public:
		::System::String* aaa; // 0x18
		::UnityEngine::Texture2D* tex; // 0x20
		::UnityEngine::Vector3 EJCFLGHGNNB; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TESTPREFABPROPERTYCOMPOENT__CTOR_OFFSET))(this);
		}

		::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TESTPREFABPROPERTYCOMPOENT_ONFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TESTPREFABPROPERTYCOMPOENT_ONFADINGEND_OFFSET))(this, a1);
		}

		::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TESTPREFABPROPERTYCOMPOENT_INIT_OFFSET))(this, a1);
		}
	};
}
