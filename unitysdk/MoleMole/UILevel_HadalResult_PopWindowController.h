#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_451601B8BB62C38C_3_Enum_3_3DCE6AAF7E47B319.h"
#include "unitysdk/Class_1_451601B8BB62C38C_3_Enum_3_A188519F532ACB95.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_21.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/MonoLevelResultPageConfig_DelayType.h"
#include "unitysdk/MoleMole/UILevelGeneralWinResultDialogPopWindowController.h"

class Class_1_5DA2E7556103D5A3_414;
class Class_2_468A4FBF2E9F527C;
namespace MoleMole { class MonoLevelResultPageConfig; }
namespace MoleMole { class UIHadalZoneLayer_RankingRowWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_ACQUIRETITLETEXT_OFFSET UNITYSDK_OFFSET(0x174CEA30)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_GETBUTTONCOMBINESTATE_OFFSET UNITYSDK_OFFSET(0x174CE880)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_GETPANELSTATE_OFFSET UNITYSDK_OFFSET(0x174CE9E0)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_ONPOPSHOWED_OFFSET UNITYSDK_OFFSET(0x174CF1F0)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x174CFB10)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__FILLCUSTOMRANKING_OFFSET UNITYSDK_OFFSET(0x174CEB50)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__HADALRATINGTORATING_OFFSET UNITYSDK_OFFSET(0x174CEAF0)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__ON_CUSTOMUI_DELAY_MESSAGE_OFFSET UNITYSDK_OFFSET(0x174CEF80)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___BASE__ON_CUSTOMUI_DELAY_MESSAGE_OFFSET UNITYSDK_OFFSET(0x174CFBA0)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___FILLCUSTOMRANKING_G____RANKING_7_0_OFFSET UNITYSDK_OFFSET(0x174CEC00)

namespace MoleMole
{
	inline static constexpr unsigned int UILevel_HadalResult_PopWindowController_TypeDefinitionIndex = 43782;

	class UILevel_HadalResult_PopWindowController : public ::MoleMole::UILevelGeneralWinResultDialogPopWindowController
	{
	public:
		// static const ::System::String* DAILY_CHALLENGE_TITLE_KEY; // 0x0
		::Class_1_5DA2E7556103D5A3_414* _nextLayer; // 0x378
		::System::Collections::Generic::List_1<::MoleMole::UIHadalZoneLayer_RankingRowWidgetController*>* _rankingRowWidgets; // 0x380
		::Class_2_468A4FBF2E9F527C* _hadalZoneModel; // 0x388

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_1_451601B8BB62C38C_3_Enum_3_3DCE6AAF7E47B319 GetButtonCombineState()
		{
			return ((::Class_1_451601B8BB62C38C_3_Enum_3_3DCE6AAF7E47B319(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_GETBUTTONCOMBINESTATE_OFFSET))(this);
		}

		::Class_1_451601B8BB62C38C_3_Enum_3_A188519F532ACB95 GetPanelState()
		{
			return ((::Class_1_451601B8BB62C38C_3_Enum_3_A188519F532ACB95(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_GETPANELSTATE_OFFSET))(this);
		}

		::System::Void AcquireTitleText(::System::String*& mainTitleTextID, ::System::String*& resultTitleTextID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_ACQUIRETITLETEXT_OFFSET))(this, mainTitleTextID, resultTitleTextID);
		}

		::MoleMole::Level::RatingType _HadalRatingToRating(::Enum_3_4608E37A1B3D374A_21 hadalRatingType)
		{
			return ((::MoleMole::Level::RatingType(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_21))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__HADALRATINGTORATING_OFFSET))(this, hadalRatingType);
		}

		::System::Void _FillCustomRanking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__FILLCUSTOMRANKING_OFFSET))(this);
		}

		::System::Void _On_CustomUI_Delay_Message(::MoleMole::MonoLevelResultPageConfig_DelayType delayType, ::MoleMole::MonoLevelResultPageConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoLevelResultPageConfig_DelayType, ::MoleMole::MonoLevelResultPageConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__ON_CUSTOMUI_DELAY_MESSAGE_OFFSET))(this, delayType, config);
		}

		::System::Void OnPopShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_ONPOPSHOWED_OFFSET))(this);
		}

		::System::Void __FillCustomRanking_g____Ranking_7_0(::MoleMole::Level::RatingType ratingType, ::System::Boolean bConfirm)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Level::RatingType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___FILLCUSTOMRANKING_G____RANKING_7_0_OFFSET))(this, ratingType, bConfirm);
		}

		::System::Void __base__On_CustomUI_Delay_Message(::MoleMole::MonoLevelResultPageConfig_DelayType P0, ::MoleMole::MonoLevelResultPageConfig* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoLevelResultPageConfig_DelayType, ::MoleMole::MonoLevelResultPageConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___BASE__ON_CUSTOMUI_DELAY_MESSAGE_OFFSET))(this, P0, P1);
		}
	};
}
