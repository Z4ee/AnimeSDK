#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicPageData; }
namespace MoleMole { class UIComicPageController; }
namespace System { class String; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS340_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16EE63D0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS340_0__PLAYCURRENTCHAPTER_G__AUDIOLISTMOVENEXT_0_OFFSET UNITYSDK_OFFSET(0x16EE63E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass340_0_TypeDefinitionIndex = 40032;

	class UIComicPageController___c__DisplayClass340_0 : public ::System::Object
	{
	public:
		::MoleMole::UIComicPageController* __4__this; // 0x10
		::System::Int64 tempPageTimeStamp; // 0x18
		::System::Int32 audioFinishTotalCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS340_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayCurrentChapter_g__AudioListMoveNext_0(::System::Boolean needResumeTimelineFromAuto, ::System::UInt32 pendingId, ::MoleMole::ComicPageData* pageData, ::System::String* pageStartAudioKey, ::System::Single audioDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::MoleMole::ComicPageData*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS340_0__PLAYCURRENTCHAPTER_G__AUDIOLISTMOVENEXT_0_OFFSET))(this, needResumeTimelineFromAuto, pendingId, pageData, pageStartAudioKey, audioDuration);
		}
	};
}
