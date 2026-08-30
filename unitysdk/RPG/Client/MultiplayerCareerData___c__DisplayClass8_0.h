#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D9C1712509F1BA29;
namespace RPG::Client { class FriendRankingInfo; }

#define RPG_CLIENT_MULTIPLAYERCAREERDATA___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD8E38D0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA___C__DISPLAYCLASS8_0__UPDATESELFRANKINGINFO_B__0_OFFSET UNITYSDK_OFFSET(0xD8E4030)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiplayerCareerData___c__DisplayClass8_0_TypeDefinitionIndex = 66348;

	class MultiplayerCareerData___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Class_1_D9C1712509F1BA29* rankingInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateSelfRankingInfo_b__0(::RPG::Client::FriendRankingInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FriendRankingInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA___C__DISPLAYCLASS8_0__UPDATESELFRANKINGINFO_B__0_OFFSET))(this, a1);
		}
	};
}
