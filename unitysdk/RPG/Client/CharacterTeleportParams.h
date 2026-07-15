#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_CHARACTERTELEPORTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x19623D40)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterTeleportParams_TypeDefinitionIndex = 57452;

	class CharacterTeleportParams : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::Boolean ClearSpecialVision; // 0x18
		::System::Boolean ResetCamera; // 0x19
		::System::Boolean ResetCameraImmediately; // 0x1A
		::System::Boolean KeepCameraBlend; // 0x1B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTELEPORTPARAMS__CTOR_OFFSET))(this);
		}
	};
}
