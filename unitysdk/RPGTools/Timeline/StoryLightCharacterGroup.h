#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/OverrideLightModule.h"
#include "unitysdk/RPGTools/Timeline/StoryLightCharacterGroup_StoryLightCharacterGroupType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Space.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryLightCharacterGroup_TypeDefinitionIndex = 46558;

	struct alignas(8) StoryLightCharacterGroup
	{
		::RPGTools::Timeline::StoryLightCharacterGroup_StoryLightCharacterGroupType GroupType; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* CustomCharacterList; // 0x18
		::UnityEngine::Space OverrideLightSpace; // 0x20
		::RPG::Client::TAUtils::OverrideLightModule OverrideLightModule; // 0x28
	};
}
