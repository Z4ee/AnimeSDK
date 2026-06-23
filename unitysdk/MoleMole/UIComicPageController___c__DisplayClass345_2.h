#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicPageData; }
namespace MoleMole { class UIComicPageController___c__DisplayClass345_1; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS345_2__CTOR_OFFSET UNITYSDK_OFFSET(0x187D34D0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS345_2__PLAYCURRENTCHAPTER_B__1_OFFSET UNITYSDK_OFFSET(0x187D34E0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS345_2__PLAYCURRENTCHAPTER_B__2_OFFSET UNITYSDK_OFFSET(0x187D3550)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass345_2_TypeDefinitionIndex = 46630;

	class UIComicPageController___c__DisplayClass345_2 : public ::System::Object
	{
	public:
		::MoleMole::UIComicPageController___c__DisplayClass345_1* CS___8__locals2; // 0x10
		::MoleMole::ComicPageData* pageData; // 0x18
		::System::Boolean needResumeTimelineFromAuto; // 0x20
		::System::UInt32 pendingId; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS345_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlayCurrentChapter_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS345_2__PLAYCURRENTCHAPTER_B__1_OFFSET))(this);
		}

		::System::Void _PlayCurrentChapter_b__2(::System::UInt32 id, ::System::UInt32 __)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS345_2__PLAYCURRENTCHAPTER_B__2_OFFSET))(this, id, __);
		}
	};
}
