#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveChapter; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERUIDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B24DD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B24FB0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int ChapterUiData_TypeDefinitionIndex = 69473;

	class ChapterUiData : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::System::String* BackgroundState; // 0x18
		::System::UInt32 ChapterId; // 0x20
		::System::UInt32 MaxProgress; // 0x24
		::System::Boolean IsFinished; // 0x28
		::System::Boolean IsUnlocked; // 0x29
		::System::Boolean IsHardMode; // 0x2A
		::RPG::Client::TextID UnlockHint; // 0x30
		::System::UInt32 StarNum; // 0x40
		::System::UInt32 CurProgress; // 0x44
		::RPG::Client::TextID Name; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERUIDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::ChapterUiData* Create(::RPG::Client::ActivityIdleLive::IdleLiveChapter* chapter)
		{
			return ((::RPG::Client::ActivityIdleLive::ChapterUiData*(*)(::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERUIDATA_CREATE_OFFSET))(chapter);
		}
	};
}
