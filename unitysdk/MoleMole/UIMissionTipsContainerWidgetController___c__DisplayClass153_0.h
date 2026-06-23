#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsContainerWidgetController_MissionTipData; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152FA920)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_0__PLAYRECOMMENDTRACK_B__0_OFFSET UNITYSDK_OFFSET(0x152FA930)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_0__PLAYRECOMMENDTRACK_B__10_OFFSET UNITYSDK_OFFSET(0x152FB190)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_0__PLAYRECOMMENDTRACK_B__8_OFFSET UNITYSDK_OFFSET(0x152FAD10)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_0__PLAYRECOMMENDTRACK_B__9_OFFSET UNITYSDK_OFFSET(0x152FB100)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_0__PLAYRECOMMENDTRACK_G__PLAYFADEIN_2_OFFSET UNITYSDK_OFFSET(0x152FAB90)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_0__PLAYRECOMMENDTRACK_G__PLAYRECOMMENDFADEIN_1_OFFSET UNITYSDK_OFFSET(0x152FA950)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass153_0_TypeDefinitionIndex = 69633;

	class UIMissionTipsContainerWidgetController___c__DisplayClass153_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x10
		::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* tipData; // 0x18
		::System::Action* __9__10; // 0x20
		::System::Action* __9__9; // 0x28
		::System::Action* __9__8; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_0__PLAYRECOMMENDTRACK_B__0_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_g__PlayRecommendFadeIn_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_0__PLAYRECOMMENDTRACK_G__PLAYRECOMMENDFADEIN_1_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_g__PlayFadeIn_2(::System::Boolean fadeInFlag, ::System::Single recommendDelay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_0__PLAYRECOMMENDTRACK_G__PLAYFADEIN_2_OFFSET))(this, fadeInFlag, recommendDelay);
		}

		::System::Void _PlayRecommendTrack_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_0__PLAYRECOMMENDTRACK_B__8_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_0__PLAYRECOMMENDTRACK_B__9_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS153_0__PLAYRECOMMENDTRACK_B__10_OFFSET))(this);
		}
	};
}
