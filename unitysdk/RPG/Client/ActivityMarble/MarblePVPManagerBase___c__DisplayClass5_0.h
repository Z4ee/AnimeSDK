#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarblePVPManagerBase; }
namespace RPG::Client::ActivityMarble { class MarblePVPMatchContext; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC53F6F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS5_0__OPENMATCHPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xC544A90)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPManagerBase___c__DisplayClass5_0_TypeDefinitionIndex = 76012;

	class MarblePVPManagerBase___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityMarble::MarblePVPManagerBase* __4__this; // 0x10
		::RPG::Client::ActivityMarble::MarblePVPMatchContext* context; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenMatchPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS5_0__OPENMATCHPAGE_B__0_OFFSET))(this);
		}
	};
}
