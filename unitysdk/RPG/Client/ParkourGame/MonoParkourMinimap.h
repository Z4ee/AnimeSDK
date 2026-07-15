#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ParkourGame { class MonoParkourMinimap_MiniRoad; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURMINIMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E7AE0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourMinimap_TypeDefinitionIndex = 70753;

	class MonoParkourMinimap : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single TextureSize; // 0x0
		::UnityEngine::Vector3 Center; // 0x18
		::UnityEngine::Vector3 Size; // 0x24
		::Il2CppArray<::RPG::Client::ParkourGame::MonoParkourMinimap_MiniRoad*>* Roads; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURMINIMAP__CTOR_OFFSET))(this);
		}
	};
}
