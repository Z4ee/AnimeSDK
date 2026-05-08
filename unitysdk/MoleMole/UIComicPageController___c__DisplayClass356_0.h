#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicPageData; }
namespace MoleMole { class UIComicPageController; }
namespace UnityEngine::Timeline { class SplitScreenEvent; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS356_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15EDBFA0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS356_0__SHOWSPLITSCREENPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0x15EDBFB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass356_0_TypeDefinitionIndex = 40037;

	class UIComicPageController___c__DisplayClass356_0 : public ::System::Object
	{
	public:
		::MoleMole::ComicPageData* tempPageData; // 0x10
		::UnityEngine::Timeline::SplitScreenEvent* splitScreenEventBase; // 0x18
		::MoleMole::UIComicPageController* __4__this; // 0x20
		::System::Int64 tempPageTimeStamp; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS356_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSplitScreenPerformance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS356_0__SHOWSPLITSCREENPERFORMANCE_B__0_OFFSET))(this);
		}
	};
}
