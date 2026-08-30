#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WormCompassPuzzleItemBase.h"

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLESTATICITEMBASE_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0x17B33350)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLESTATICITEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17B336A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleStaticItemBase_TypeDefinitionIndex = 78460;

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
