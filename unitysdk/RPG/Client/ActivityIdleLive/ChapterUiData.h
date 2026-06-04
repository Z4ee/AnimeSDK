#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveChapter; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERUIDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB10AA80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB10AC60)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int ChapterUiData_TypeDefinitionIndex = 70285;

	class ChapterUiData : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::System::String* BackgroundState; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 MaxProgress; // 0x30
		::System::Boolean IsHardMode; // 0x34
		::System::Boolean IsUnlocked; // 0x35
		::System::Boolean IsFinished; // 0x36
		::System::UInt32 CurProgress; // 0x38
		::System::UInt32 ChapterId; // 0x3C
		::System::UInt32 StarNum; // 0x40
		::RPG::Client::TextID UnlockHint; // 0x48

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
