#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ChenLingFesGameInstance; }

#define RPG_CLIENT_DEBUGCHENLINGFESRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xB735310)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugChenLingFesRuntime_TypeDefinitionIndex = 56370;

	class DebugChenLingFesRuntime : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::ChenLingFesGameInstance* ChenLingFesGameInstance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGCHENLINGFESRUNTIME__CTOR_OFFSET))(this);
		}
	};
}
