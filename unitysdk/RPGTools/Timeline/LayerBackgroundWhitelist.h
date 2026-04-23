#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/LayerBackgroundWhitelist_LayerBackgroundMapEntity.h"
#include "unitysdk/RPGTools/Timeline/LayerBackgroundWhitelist_LayerBackgroundStageItem.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LayerBackgroundWhitelist_TypeDefinitionIndex = 44884;

	struct alignas(8) LayerBackgroundWhitelist
	{
		::Il2CppArray<::System::String*>* StoryCharacterUniqueNames; // 0x10
		::Il2CppArray<::System::String*>* StoryEffectUniqueNames; // 0x18
		::Il2CppArray<::RPGTools::Timeline::LayerBackgroundWhitelist_LayerBackgroundStageItem>* StageItems; // 0x20
		::Il2CppArray<::RPGTools::Timeline::LayerBackgroundWhitelist_LayerBackgroundMapEntity>* MapEntities; // 0x28
	};
}
