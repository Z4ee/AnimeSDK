#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_FIGHTACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1972F120)
#define RPG_CLIENT_FIGHTACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1972F110)

namespace RPG::Client
{
	inline static constexpr unsigned int FightActivityData_TypeDefinitionIndex = 58883;

	class FightActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}
