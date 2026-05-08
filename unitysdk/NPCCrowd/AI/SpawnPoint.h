#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define NPCCROWD_AI_SPAWNPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC7120)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int SpawnPoint_TypeDefinitionIndex = 49790;

	class SpawnPoint : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 rotation; // 0x1C
		::System::Int32 populationId; // 0x28
		::System::Boolean spawnOnInit; // 0x2C
		::System::String* movementStyle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_SPAWNPOINT__CTOR_OFFSET))(this);
		}
	};
}
