#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CE9B29BCEEDBFC4A;
namespace RPG::Client { class FriendRankingInfo; }

#define RPG_CLIENT_MULTIPLAYERCAREERDATA___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAAF0F30)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA___C__DISPLAYCLASS8_0__UPDATESELFRANKINGINFO_B__0_OFFSET UNITYSDK_OFFSET(0xAAF15A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiplayerCareerData___c__DisplayClass8_0_TypeDefinitionIndex = 61074;

	class MultiplayerCareerData___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Class_1_CE9B29BCEEDBFC4A* rankingInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateSelfRankingInfo_b__0(::RPG::Client::FriendRankingInfo* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FriendRankingInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA___C__DISPLAYCLASS8_0__UPDATESELFRANKINGINFO_B__0_OFFSET))(this, info);
		}
	};
}
