#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERCONDHASAVATARCONFIG_METHOD_5_0F963D96DE8EB599_OFFSET UNITYSDK_OFFSET(0x18C25700)
#define RPG_GAMECORE_PLAYERCONDHASAVATARCONFIG_METHOD_5_1469F88C2084826D_OFFSET UNITYSDK_OFFSET(0x18C249F0)
#define RPG_GAMECORE_PLAYERCONDHASAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18C24930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerCondHasAvatarConfig_TypeDefinitionIndex = 18566;

	class PlayerCondHasAvatarConfig : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDHASAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_0F963D96DE8EB599(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondHasAvatarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondHasAvatarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDHASAVATARCONFIG_METHOD_5_0F963D96DE8EB599_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1469F88C2084826D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondHasAvatarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondHasAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDHASAVATARCONFIG_METHOD_5_1469F88C2084826D_OFFSET))(a1, a2);
		}
	};
}
