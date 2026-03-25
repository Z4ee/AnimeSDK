#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_SHOWBOSSINFOPARAM_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xA47C8F0)
#define RPG_CLIENT_SHOWBOSSINFOPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA47C900)

namespace RPG::Client
{
	inline static constexpr unsigned int ShowBossInfoParam_TypeDefinitionIndex = 59050;

	class ShowBossInfoParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ReplacedEntity; // 0x10
		::RPG::GameCore::GameEntity* Entity; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOWBOSSINFOPARAM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOWBOSSINFOPARAM_GET_ISSHOW_OFFSET))(this);
		}
	};
}
