#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_2CBC8051822D14AC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIQuestionsAnswerScreenDetailContext; }
namespace MoleMole { class UIQuestionsAnswerScreenDetailWidgetController; }
namespace MoleMole { class UIQuestionsAnswerScreenSettleContext; }
namespace MoleMole { class UIQuestionsAnswerScreenSettleWidgetController; }
namespace MoleMole { class UIQuestionsAnswerScreenStandbyWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_CHANGETODETAIL_OFFSET UNITYSDK_OFFSET(0x15F57CA0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_CHANGETOSETTLE_OFFSET UNITYSDK_OFFSET(0x15F58130)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_CHANGETOSTANDBY_OFFSET UNITYSDK_OFFSET(0x15F57B70)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_DIRECTCHANGETOSETTLE_OFFSET UNITYSDK_OFFSET(0x15F57F30)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONANSWERSCREENUIPAGEDETAILFADEIN_OFFSET UNITYSDK_OFFSET(0x15F58250)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONANSWERSCREENUIPAGEDETAILFADEOUT_OFFSET UNITYSDK_OFFSET(0x15F581E0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONANSWERSCREENUIPAGESETTLEMENTFADEIN_OFFSET UNITYSDK_OFFSET(0x15F58330)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONANSWERSCREENUIPAGESETTLEMENTFADEOUT_OFFSET UNITYSDK_OFFSET(0x15F582C0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONSANSWERSCREENUIPAGESTANDBYFADEIN_OFFSET UNITYSDK_OFFSET(0x15F583A0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONSANSWERSCREENUIPAGESTANDBYFADEOUT_OFFSET UNITYSDK_OFFSET(0x15F58410)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_HIDEALL_OFFSET UNITYSDK_OFFSET(0x15F57D50)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_HIDESTANDBY_OFFSET UNITYSDK_OFFSET(0x15F57C10)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F57A60)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F57AF0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F57840)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F579F0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F58480)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F584E0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F58570)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F58600)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F58690)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerScreenWidgetController_TypeDefinitionIndex = 81795;

	class UIQuestionsAnswerScreenWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_2CBC8051822D14AC* _view; // 0x2C0
		::MoleMole::UIQuestionsAnswerScreenStandbyWidgetController* Standby; // 0x2C8
		::MoleMole::UIQuestionsAnswerScreenDetailWidgetController* Detail; // 0x2D0
		::MoleMole::UIQuestionsAnswerScreenSettleWidgetController* Settlement; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask ChangeToStandby()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_CHANGETOSTANDBY_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask HideStandBy()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_HIDESTANDBY_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask ChangeToDetail(::MoleMole::UIQuestionsAnswerScreenDetailContext* context)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::UIQuestionsAnswerScreenDetailContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_CHANGETODETAIL_OFFSET))(this, context);
		}

		::System::Void HideAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_HIDEALL_OFFSET))(this);
		}

		::System::Void DirectChangeToSettle(::MoleMole::UIQuestionsAnswerScreenSettleContext* context, ::System::Threading::CancellationToken cts)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIQuestionsAnswerScreenSettleContext*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_DIRECTCHANGETOSETTLE_OFFSET))(this, context, cts);
		}

		::Cysharp::Threading::Tasks::UniTask ChangeToSettle(::MoleMole::UIQuestionsAnswerScreenSettleContext* context, ::System::Threading::CancellationToken cts)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::UIQuestionsAnswerScreenSettleContext*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_CHANGETOSETTLE_OFFSET))(this, context, cts);
		}

		::System::String* GetQuestionAnswerScreenUIPageDetailFadeOut()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONANSWERSCREENUIPAGEDETAILFADEOUT_OFFSET))(this);
		}

		::System::String* GetQuestionAnswerScreenUIPageDetailFadeIn()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONANSWERSCREENUIPAGEDETAILFADEIN_OFFSET))(this);
		}

		::System::String* GetQuestionAnswerScreenUIPageSettlementFadeOut()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONANSWERSCREENUIPAGESETTLEMENTFADEOUT_OFFSET))(this);
		}

		::System::String* GetQuestionAnswerScreenUIPageSettlementFadeIn()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONANSWERSCREENUIPAGESETTLEMENTFADEIN_OFFSET))(this);
		}

		::System::String* GetQuestionsAnswerScreenUIPageStandbyFadeIn()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONSANSWERSCREENUIPAGESTANDBYFADEIN_OFFSET))(this);
		}

		::System::String* GetQuestionsAnswerScreenUIPageStandbyFadeOut()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONSANSWERSCREENUIPAGESTANDBYFADEOUT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
