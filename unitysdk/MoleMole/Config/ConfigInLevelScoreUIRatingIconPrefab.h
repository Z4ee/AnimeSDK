#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGINLEVELSCOREUIRATINGICONPREFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B3F20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigInLevelScoreUIRatingIconPrefab_TypeDefinitionIndex = 53236;

	class ConfigInLevelScoreUIRatingIconPrefab : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Foundation::AssetPath>* RatingToIconAssetPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINLEVELSCOREUIRATINGICONPREFAB__CTOR_OFFSET))(this);
		}
	};
}
