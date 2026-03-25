#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F381659723E3F143_1;
namespace RPG::Client { class FriendRankingInfo; }

#define RPG_CLIENT_MULTIPLAYERCAREERDATA___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DAA520)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA___C__DISPLAYCLASS8_0__UPDATESELFRANKINGINFO_B__0_OFFSET UNITYSDK_OFFSET(0x9DAAB90)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiplayerCareerData___c__DisplayClass8_0_TypeDefinitionIndex = 53929;

	class MultiplayerCareerData___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Class_1_F381659723E3F143_1* rankingInfo; // 0x10

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
