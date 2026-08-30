#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOTRAINPARTYBUILDITEMDEBUG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C2896E0)
#define RPG_CLIENT_MONOTRAINPARTYBUILDITEMDEBUG_RESET_OFFSET UNITYSDK_OFFSET(0x1C289730)
#define RPG_CLIENT_MONOTRAINPARTYBUILDITEMDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C289820)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTrainPartyBuildItemDebug_TypeDefinitionIndex = 68843;

	class MonoTrainPartyBuildItemDebug : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAINPARTYBUILDITEMDEBUG__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAINPARTYBUILDITEMDEBUG_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAINPARTYBUILDITEMDEBUG_RESET_OFFSET))(this);
		}
	};
}
