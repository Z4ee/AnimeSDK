#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/AssetWarmupConfig.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PRELOADSINGLESTREAMINGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x141A35A0)

namespace MoleMole
{
	inline static constexpr unsigned int PreloadSingleStreaminGameConfig_TypeDefinitionIndex = 79716;

	class PreloadSingleStreaminGameConfig : public ::System::Object
	{
	public:
		::System::Int32 floorId; // 0x10
		::System::Boolean enableMonsterEffectLazyPreload; // 0x14
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* preloadPaths; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* preloadMonsters; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::AssetWarmupConfig>* warmupEffects; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADSINGLESTREAMINGAMECONFIG__CTOR_OFFSET))(this);
		}
	};
}
