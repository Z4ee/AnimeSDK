#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicPageData; }
namespace MoleMole { class UIComicPageController; }
namespace UnityEngine::Timeline { class SplitScreenEvent; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS361_0__CTOR_OFFSET UNITYSDK_OFFSET(0x195867E0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS361_0__SHOWSPLITSCREENPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0x195867F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass361_0_TypeDefinitionIndex = 87103;

	class UIComicPageController___c__DisplayClass361_0 : public ::System::Object
	{
	public:
		::MoleMole::ComicPageData* tempPageData; // 0x10
		::MoleMole::UIComicPageController* __4__this; // 0x18
		::UnityEngine::Timeline::SplitScreenEvent* splitScreenEventBase; // 0x20
		::System::Int64 tempPageTimeStamp; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS361_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSplitScreenPerformance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS361_0__SHOWSPLITSCREENPERFORMANCE_B__0_OFFSET))(this);
		}
	};
}
