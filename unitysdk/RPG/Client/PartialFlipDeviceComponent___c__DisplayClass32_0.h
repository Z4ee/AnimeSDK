#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FlipDevicePoint; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F180E0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS32_0__FOLLOWPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x9F198E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PartialFlipDeviceComponent___c__DisplayClass32_0_TypeDefinitionIndex = 60088;

	class PartialFlipDeviceComponent___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* lookAtPointEntity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FollowPlayer_b__0(::RPG::Client::FlipDevicePoint* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FlipDevicePoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS32_0__FOLLOWPLAYER_B__0_OFFSET))(this, x);
		}
	};
}
