#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartySimpleTalkInfo; }
namespace RPG::GameCore { class PlayTrainPartySimpleTalk; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xA60F150)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartySimpleTalkInstance_TypeDefinitionIndex = 61104;

	class TrainPartySimpleTalkInstance : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySimpleTalkInfo*>* TalkInfos; // 0x10
		::System::Boolean IsAutoFinish; // 0x18

		::System::Void _ctor(::RPG::GameCore::PlayTrainPartySimpleTalk* simpleTalk)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayTrainPartySimpleTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINSTANCE__CTOR_OFFSET))(this, simpleTalk);
		}
	};
}
