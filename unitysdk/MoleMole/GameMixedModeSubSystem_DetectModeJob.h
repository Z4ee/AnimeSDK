#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_DETECTMODEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7CECB0)

namespace MoleMole
{
	inline static constexpr unsigned int GameMixedModeSubSystem_DetectModeJob_TypeDefinitionIndex = 61534;

	struct alignas(4) GameMixedModeSubSystem_DetectModeJob
	{
		::UnityEngine::Vector3 pos; // 0x10

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_DETECTMODEJOB_EXECUTE_OFFSET))(this);
		}
	};
}
