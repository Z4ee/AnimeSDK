#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournGameScoreSettleResult; }

#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULTEXT_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xDF57AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameScoreSettleResultExt_TypeDefinitionIndex = 67844;

	class RogueTournGameScoreSettleResultExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsEmpty(::RPG::Client::IRogueTournGameScoreSettleResult* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULTEXT_ISEMPTY_OFFSET))(a1);
		}
	};
}
