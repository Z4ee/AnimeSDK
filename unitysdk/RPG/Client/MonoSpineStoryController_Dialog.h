#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSpineStoryController_Dialog_TypeDefinitionIndex = 57586;

	struct alignas(8) MonoSpineStoryController_Dialog
	{
		::System::String* uniqueName; // 0x10
		::UnityEngine::GameObject* root; // 0x18
		::RPG::Client::LocalizedText* text; // 0x20
	};
}
