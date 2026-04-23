#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/Client/TAUtils/OverrideLightModule.h"
#include "unitysdk/UnityEngine/Space.h"

namespace RPG::Client { class OverrideLightBehavior; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_OVERRIDELIGHTMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xAC10DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int OverrideLightMonoPlugin_TypeDefinitionIndex = 64800;

	class OverrideLightMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::OverrideLightBehavior*>
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* Renderers; // 0x30
		::UnityEngine::Space OverrideLightSpace; // 0x38
		::RPG::Client::TAUtils::OverrideLightModule OverrideLightModule; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OVERRIDELIGHTMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
