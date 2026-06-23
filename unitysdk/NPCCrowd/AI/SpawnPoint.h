#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define NPCCROWD_AI_SPAWNPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x106F5760)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int SpawnPoint_TypeDefinitionIndex = 50791;

	class SpawnPoint : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 rotation; // 0x1C
		::System::Single pathRatio; // 0x28
		::System::Int32 populationId; // 0x2C
		::System::Boolean spawnOnInit; // 0x30
		::System::String* movementStyle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_SPAWNPOINT__CTOR_OFFSET))(this);
		}
	};
}
