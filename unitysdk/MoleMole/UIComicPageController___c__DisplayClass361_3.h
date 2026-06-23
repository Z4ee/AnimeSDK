#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicPageData; }
namespace MoleMole { class UIComicPageController___c__DisplayClass361_2; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS361_3__CTOR_OFFSET UNITYSDK_OFFSET(0x18A77D70)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS361_3__SHOWSPLITSCREENPERFORMANCE_B__2_OFFSET UNITYSDK_OFFSET(0x18A77D80)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS361_3__SHOWSPLITSCREENPERFORMANCE_B__3_OFFSET UNITYSDK_OFFSET(0x18A77E00)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass361_3_TypeDefinitionIndex = 46618;

	class UIComicPageController___c__DisplayClass361_3 : public ::System::Object
	{
	public:
		::MoleMole::UIComicPageController___c__DisplayClass361_2* CS___8__locals3; // 0x10
		::MoleMole::ComicPageData* pageData; // 0x18
		::System::UInt32 pendingId; // 0x20
		::System::Boolean needResumeTimelineFromAuto; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS361_3__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSplitScreenPerformance_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS361_3__SHOWSPLITSCREENPERFORMANCE_B__2_OFFSET))(this);
		}

		::System::Void _ShowSplitScreenPerformance_b__3(::System::UInt32 id, ::System::UInt32 __)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS361_3__SHOWSPLITSCREENPERFORMANCE_B__3_OFFSET))(this, id, __);
		}
	};
}
