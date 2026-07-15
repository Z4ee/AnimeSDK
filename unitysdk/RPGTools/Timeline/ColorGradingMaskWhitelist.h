#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_MapEntity.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_StageItem.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_StoryVFX.h"
#include "unitysdk/System/ValueType.h"

namespace RPGTools::Timeline { class ColorGradingMaskWhitelist_StoryCharacter; }

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ColorGradingMaskWhitelist_TypeDefinitionIndex = 46671;

	struct alignas(8) ColorGradingMaskWhitelist
	{
		::System::Boolean InvertMask; // 0x10
		::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter*>* StoryCharacters; // 0x18
		::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX>* StoryVFXs; // 0x20
		::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem>* StageItems; // 0x28
		::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity>* MapEntities; // 0x30
	};
}
