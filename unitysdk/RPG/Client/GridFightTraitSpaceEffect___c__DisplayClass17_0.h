#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitBonusConfig; }
namespace RPG::Client { class GridFightTraitSpaceEffect; }

#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98D9DD0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__DISPLAYCLASS17_0__GETCURRENTBONUSCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0x98DAB70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitSpaceEffect___c__DisplayClass17_0_TypeDefinitionIndex = 52321;

	class GridFightTraitSpaceEffect___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitSpaceEffect* __4__this; // 0x10
		::RPG::GameCore::GridFightTraitBonusType bonusType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCurrentBonusConfig_b__0(::RPG::Client::GridFightTraitBonusConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__DISPLAYCLASS17_0__GETCURRENTBONUSCONFIG_B__0_OFFSET))(this, config);
		}
	};
}
