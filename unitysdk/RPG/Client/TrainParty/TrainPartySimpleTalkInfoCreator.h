#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyRecordInfo; }
namespace RPG::Client::TrainParty { class TrainPartySimpleTalkInfo; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFOCREATOR_CREATETALKINFOBYRECORDINFO_OFFSET UNITYSDK_OFFSET(0xE277BC0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartySimpleTalkInfoCreator_TypeDefinitionIndex = 74223;

	class TrainPartySimpleTalkInfoCreator : public ::System::Object
	{
	public:
		static ::RPG::Client::TrainParty::TrainPartySimpleTalkInfo* CreateTalkInfoByRecordInfo(::RPG::Client::TrainParty::TrainPartyRecordInfo* a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartySimpleTalkInfo*(*)(::RPG::Client::TrainParty::TrainPartyRecordInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFOCREATOR_CREATETALKINFOBYRECORDINFO_OFFSET))(a1);
		}
	};
}
