#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightPrayQuest; }

#define RPG_CLIENT_GRIDFIGHTPRAYQUESTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD2EBC10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPrayQuestEvent_TypeDefinitionIndex = 65151;

	class GridFightPrayQuestEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightPrayQuest* Quest; // 0x10
		::RPG::Client::GridFightBonusResultData* Bonus; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTEVENT__CTOR_OFFSET))(this);
		}
	};
}
