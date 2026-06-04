#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class CameraNormalConfigData; }

#define RPG_CLIENT_CAMERAFIGHTSTATECOMMONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BA160)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraFightStateCommonConfig_TypeDefinitionIndex = 65044;

	class CameraFightStateCommonConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::Client::CameraNormalConfigData* FightStateDefaultCommonConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATECOMMONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
