#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FlipDevicePoint; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC34CA50)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS30_0__NEEDPRECESSFOLLOWPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0xC34E1C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PartialFlipDeviceComponent___c__DisplayClass30_0_TypeDefinitionIndex = 68474;

	class PartialFlipDeviceComponent___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* sourcePointEntity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _NeedPrecessFollowPlayer_b__0(::RPG::Client::FlipDevicePoint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FlipDevicePoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS30_0__NEEDPRECESSFOLLOWPLAYER_B__0_OFFSET))(this, a1);
		}
	};
}
