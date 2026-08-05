#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonSubsystem_ZenkovHighQualityDisplayData_TypeDefinitionIndex = 44147;

	struct alignas(8) BigSceneDungeonSubsystem_ZenkovHighQualityDisplayData
	{
		::MoleMole::EntityHandle OwnerEntity; // 0x10
		::MoleMole::EntityHandle GadgetEntity; // 0x20
		::MoleMole::EntityHandle EffectEntity; // 0x30
		::System::String* AttachPoint; // 0x40
		::UnityEngine::Vector3 GadgetOffset; // 0x48
	};
}
