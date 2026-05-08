#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_208CC9941471731A_261;
class Class_2_8D91CCB135292C21;
class Class_2_8D91CCB135292C21_Class_2_3DD13681DECC4A27;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDailyChallengeCardRowWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1578AFE0)
#define MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1578B700)
#define MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1578B790)
#define MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1578AFF0)
#define MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1578B230)
#define MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER_UPDATECARD_OFFSET UNITYSDK_OFFSET(0x1578B520)
#define MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1578B860)
#define MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER__UPDATECARD_G__SETNAME_10_0_OFFSET UNITYSDK_OFFSET(0x1578B800)
#define MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1578B870)
#define MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1578B900)
#define MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1578B910)
#define MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1578B920)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleEliteExhibitionPopWindowController_TypeDefinitionIndex = 82184;

	class UIDoubleEliteExhibitionPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_8D91CCB135292C21* _view; // 0x310
		::Class_2_8D91CCB135292C21_Class_2_3DD13681DECC4A27* _cardView; // 0x318
		::MoleMole::UIDailyChallengeCardRowWidgetController* _elite1; // 0x320
		::MoleMole::UIDailyChallengeCardRowWidgetController* _elite2; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateCard(::Class_2_208CC9941471731A_261* template_)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_261*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER_UPDATECARD_OFFSET))(this, template_);
		}

		static ::System::Void _UpdateCard_g__SetName_10_0(::UnityEngine::UI::Extension::UILocalizationText* text, ::System::Int32 cardId)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER__UPDATECARD_G__SETNAME_10_0_OFFSET))(text, cardId);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEEXHIBITIONPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
