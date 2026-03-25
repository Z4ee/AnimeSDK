#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournPersonaTalentGroupData; }

#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA3CACB0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__DISPLAYCLASS5_0__GETTALENTGROUP_B__0_OFFSET UNITYSDK_OFFSET(0xA3CB330)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaTalentInfo___c__DisplayClass5_0_TypeDefinitionIndex = 55268;

	class RogueTournPersonaTalentInfo___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 groupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTalentGroup_b__0(::RPG::Client::RogueTournPersonaTalentGroupData* group)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournPersonaTalentGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__DISPLAYCLASS5_0__GETTALENTGROUP_B__0_OFFSET))(this, group);
		}
	};
}
