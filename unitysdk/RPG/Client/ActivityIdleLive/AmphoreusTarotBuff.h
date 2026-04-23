#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class AmphoreusTarotData; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTBUFF_GETACTIVATEBUFFTAROTIDS_OFFSET UNITYSDK_OFFSET(0x9B21CB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTBUFF_GETACTIVATETAROTDATAS_OFFSET UNITYSDK_OFFSET(0x9B22070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTBUFF_ISALLBUFFACTIVATED_OFFSET UNITYSDK_OFFSET(0x9B21F10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x9B219F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTBUFF__INITALLCARDS_OFFSET UNITYSDK_OFFSET(0x9B21A00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTBUFF__ISCARDBUFFACTIVATE_OFFSET UNITYSDK_OFFSET(0x9B21E80)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int AmphoreusTarotBuff_TypeDefinitionIndex = 69321;

	class AmphoreusTarotBuff : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::StoryLine* _StoryLineRef; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::AmphoreusTarotData*>* _Cards; // 0x18

		::System::Void _ctor(::RPG::Client::ActivityIdleLive::StoryLine* storyLine)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTBUFF__CTOR_OFFSET))(this, storyLine);
		}

		::System::Void _InitAllCards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTBUFF__INITALLCARDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetActivateBuffTarotIds()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTBUFF_GETACTIVATEBUFFTAROTIDS_OFFSET))(this);
		}

		::System::Boolean IsAllBuffActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTBUFF_ISALLBUFFACTIVATED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::AmphoreusTarotData*>* GetActivateTarotDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::AmphoreusTarotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTBUFF_GETACTIVATETAROTDATAS_OFFSET))(this);
		}

		::System::Boolean _IsCardBuffActivate(::RPG::Client::ActivityIdleLive::AmphoreusTarotData* card)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::AmphoreusTarotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTBUFF__ISCARDBUFFACTIVATE_OFFSET))(this, card);
		}
	};
}
