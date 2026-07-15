#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildSubArea; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2AD370)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__DISPLAYCLASS3_0__GETSUBAREALIST_B__0_OFFSET UNITYSDK_OFFSET(0x1A2B7690)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildManager___c__DisplayClass3_0_TypeDefinitionIndex = 70904;

	class TrainPartyBuildManager___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 subAreaID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSubAreaList_b__0(::RPG::Client::TrainParty::TrainPartyBuildSubArea* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSubArea*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__DISPLAYCLASS3_0__GETSUBAREALIST_B__0_OFFSET))(this, a1);
		}
	};
}
