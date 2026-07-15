#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG_METHOD_5_AC42E986FDC94B8E_OFFSET UNITYSDK_OFFSET(0x1BA097E0)
#define RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG_METHOD_5_E0B04FC56516A1CA_OFFSET UNITYSDK_OFFSET(0x1BA09830)
#define RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA09820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerCondInRogueSubModeConfig_TypeDefinitionIndex = 18805;

	class PlayerCondInRogueSubModeConfig : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_AC42E986FDC94B8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondInRogueSubModeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondInRogueSubModeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG_METHOD_5_AC42E986FDC94B8E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E0B04FC56516A1CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondInRogueSubModeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondInRogueSubModeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG_METHOD_5_E0B04FC56516A1CA_OFFSET))(a1, a2);
		}
	};
}
