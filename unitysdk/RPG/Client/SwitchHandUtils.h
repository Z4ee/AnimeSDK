#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_SWITCHHANDUTILS_GETHANDMAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x19C5C190)
#define RPG_CLIENT_SWITCHHANDUTILS_ISSHOWMAPSELFICON_OFFSET UNITYSDK_OFFSET(0x19C5BF60)
#define RPG_CLIENT_SWITCHHANDUTILS_ISSWITCHHANDBANROCKETPUNCH_OFFSET UNITYSDK_OFFSET(0x19C5BE60)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandUtils_TypeDefinitionIndex = 64999;

	class SwitchHandUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsSwitchHandBanRocketPunch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDUTILS_ISSWITCHHANDBANROCKETPUNCH_OFFSET))();
		}

		static ::System::Boolean IsShowMapSelfIcon()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDUTILS_ISSHOWMAPSELFICON_OFFSET))();
		}

		static ::System::UInt32 GetHandMapIconType(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDUTILS_GETHANDMAPICONTYPE_OFFSET))(a1);
		}
	};
}
