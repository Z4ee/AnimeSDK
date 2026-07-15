#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WormCompassPuzzleItemBase.h"

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLESTATICITEMBASE_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0x16133ED0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLESTATICITEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16134220)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleStaticItemBase_TypeDefinitionIndex = 74975;

	class WormCompassPuzzleStaticItemBase : public ::RPG::Client::Prop::WormCompassPuzzleItemBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLESTATICITEMBASE__CTOR_OFFSET))(this);
		}

		::System::Void RefreshObjectStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLESTATICITEMBASE_REFRESHOBJECTSTATUS_OFFSET))(this);
		}
	};
}
