#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsContainerWidgetController_MissionTipData; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15163CE0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_0__PLAYRECOMMENDTRACK_B__0_OFFSET UNITYSDK_OFFSET(0x15163CF0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_0__PLAYRECOMMENDTRACK_B__10_OFFSET UNITYSDK_OFFSET(0x15164550)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_0__PLAYRECOMMENDTRACK_B__8_OFFSET UNITYSDK_OFFSET(0x151640D0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_0__PLAYRECOMMENDTRACK_B__9_OFFSET UNITYSDK_OFFSET(0x151644C0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_0__PLAYRECOMMENDTRACK_G__PLAYFADEIN_2_OFFSET UNITYSDK_OFFSET(0x15163F50)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_0__PLAYRECOMMENDTRACK_G__PLAYRECOMMENDFADEIN_1_OFFSET UNITYSDK_OFFSET(0x15163D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass177_0_TypeDefinitionIndex = 91187;

	class UIMissionTipsContainerWidgetController___c__DisplayClass177_0 : public ::System::Object
	{
	public:
		::System::Action* __9__8; // 0x10
		::System::Action* __9__10; // 0x18
		::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* tipData; // 0x20
		::System::Action* __9__9; // 0x28
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_0__PLAYRECOMMENDTRACK_B__0_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_g__PlayRecommendFadeIn_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_0__PLAYRECOMMENDTRACK_G__PLAYRECOMMENDFADEIN_1_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_g__PlayFadeIn_2(::System::Boolean fadeInFlag, ::System::Single recommendDelay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_0__PLAYRECOMMENDTRACK_G__PLAYFADEIN_2_OFFSET))(this, fadeInFlag, recommendDelay);
		}

		::System::Void _PlayRecommendTrack_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_0__PLAYRECOMMENDTRACK_B__8_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_0__PLAYRECOMMENDTRACK_B__9_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS177_0__PLAYRECOMMENDTRACK_B__10_OFFSET))(this);
		}
	};
}
