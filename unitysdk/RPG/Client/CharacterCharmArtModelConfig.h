#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::TAUtils { class RendererSlots; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_CHARACTERCHARMARTMODELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB580EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterCharmArtModelConfig_TypeDefinitionIndex = 65213;

	class CharacterCharmArtModelConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* Renderers; // 0x18
		::Il2CppArray<::RPG::Client::TAUtils::RendererSlots*>* RendererSlots; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCHARMARTMODELCONFIG__CTOR_OFFSET))(this);
		}
	};
}
