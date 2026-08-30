#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_B51RACING_B51RACINGFINISHGAMECAMERASETTING_GETDELAYSHOWFINISHPAGESECONDS_OFFSET UNITYSDK_OFFSET(0x19EFDCA0)
#define RPG_CLIENT_B51RACING_B51RACINGFINISHGAMECAMERASETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x19EFDCF0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingFinishGameCameraSetting_TypeDefinitionIndex = 80515;

	class B51RacingFinishGameCameraSetting : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _DelayShowFinishPageSeconds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGFINISHGAMECAMERASETTING__CTOR_OFFSET))(this);
		}

		::System::Single GetDelayShowFinishPageSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGFINISHGAMECAMERASETTING_GETDELAYSHOWFINISHPAGESECONDS_OFFSET))(this);
		}
	};
}
