#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::TAUtils { class RendererSlots; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_CHARACTERARTMODELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCAC34A0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterArtModelConfig_TypeDefinitionIndex = 69720;

	class CharacterArtModelConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* StaticModelEffects; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::RendererSlots*>* StaticModelMaterials; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERARTMODELCONFIG__CTOR_OFFSET))(this);
		}
	};
}
