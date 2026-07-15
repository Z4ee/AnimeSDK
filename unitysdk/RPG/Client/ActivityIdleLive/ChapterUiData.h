#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveChapter; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERUIDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19D1F3F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1F5D0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int ChapterUiData_TypeDefinitionIndex = 71808;

	class ChapterUiData : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::System::String* BackgroundState; // 0x18
		::System::UInt32 ChapterId; // 0x20
		::System::UInt32 CurProgress; // 0x24
		::RPG::Client::TextID UnlockHint; // 0x28
		::System::UInt32 StarNum; // 0x38
		::System::UInt32 MaxProgress; // 0x3C
		::System::Boolean IsHardMode; // 0x40
		::System::Boolean IsFinished; // 0x41
		::System::Boolean IsUnlocked; // 0x42
		::RPG::Client::TextID Name; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERUIDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::ChapterUiData* Create(::RPG::Client::ActivityIdleLive::IdleLiveChapter* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::ChapterUiData*(*)(::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERUIDATA_CREATE_OFFSET))(a1);
		}
	};
}
