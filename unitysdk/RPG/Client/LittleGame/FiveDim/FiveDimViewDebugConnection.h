#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimEntityBehaviour; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEWDEBUGCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xBE14590)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimViewDebugConnection_TypeDefinitionIndex = 71396;

	class FiveDimViewDebugConnection : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LittleGame::FiveDim::FiveDimEntityBehaviour* Entity; // 0x18
		::RPG::Client::LittleGame::FiveDim::FiveDimEntityBehaviour* OwnerSpawnerEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEWDEBUGCONNECTION__CTOR_OFFSET))(this);
		}
	};
}
