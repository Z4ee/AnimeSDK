#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_3B8C7FC4E1E362DB;
class Class_2_1B1C05BC0A38A2D5_6;
class Class_2_208CC9941471731A_349;
class Class_2_DDDA8B6B2BF87559;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISearchObjectQuestionRowWidgetController; }
namespace MoleMole { class UISearchObjectQuestionWidgetControllerContext; }
namespace MoleMole { class UISearchObjectTaskRowWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_CLEARWRONGTIPS_OFFSET UNITYSDK_OFFSET(0x1302C7C0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_GETCURSELECTEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1302E1D0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_GETORADDWIDGET_OFFSET UNITYSDK_OFFSET(0x1302D320)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x1302CE60)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_GET_QAMAP_OFFSET UNITYSDK_OFFSET(0x1302D260)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_INITOPTIONS_OFFSET UNITYSDK_OFFSET(0x1302D680)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_ONCLICKNEXTOREND_OFFSET UNITYSDK_OFFSET(0x1302C0C0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1302CF30)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_ONOPTIONSELECTED_OFFSET UNITYSDK_OFFSET(0x1302DE50)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1302D060)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1302CFC0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1302BFB0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_REFRESHBYCTX_OFFSET UNITYSDK_OFFSET(0x1302D0C0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_REFRESHDESC_OFFSET UNITYSDK_OFFSET(0x1302D4C0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_REFRESHQUESTION_OFFSET UNITYSDK_OFFSET(0x1302C820)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_REFRESHSELECTIONACTIVE_OFFSET UNITYSDK_OFFSET(0x1302D7F0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_REFRESHSUBMITBTN_OFFSET UNITYSDK_OFFSET(0x1302DC10)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_SHOWSETTLETEMP_OFFSET UNITYSDK_OFFSET(0x1302CDF0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_SHOWSUBMITORNEXTBTN_OFFSET UNITYSDK_OFFSET(0x1302CD00)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1302E350)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1302E3C0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1302E450)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1302E4F0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1302E580)

namespace MoleMole
{
	inline static constexpr unsigned int UISearchObjectQuestionWidgetController_TypeDefinitionIndex = 80741;

	class UISearchObjectQuestionWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_1B1C05BC0A38A2D5_6* _view; // 0x2E8
		::System::Int32 m_dayQuestID; // 0x2F0
		::System::String* m_onShowSettleAnim; // 0x2F8
		::System::Boolean m_isPlayingAnim; // 0x300
		::System::Threading::CancellationTokenSource* m_resumeToContentSource; // 0x308
		::System::Int32 m_questionIndex; // 0x310
		::System::Int32 m_totalQuestionCount; // 0x314
		::System::Int32 m_groupID; // 0x318
		::System::Int32 m_curSelectedOptionCount; // 0x31C
		::System::Int32 m_curQuestionAnswerCount; // 0x320
		::Class_2_208CC9941471731A_349* m_groupCfg; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UISearchObjectQuestionRowWidgetController*>* m_optionWidgetList; // 0x330
		::System::Boolean m_optionWidgetInited; // 0x338
		::System::Collections::Generic::List_1<::System::Boolean>* m_selectedList; // 0x340
		::MoleMole::UISearchObjectTaskRowWidgetController* m_rowWidget; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnClickNextOrEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_ONCLICKNEXTOREND_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid ShowSettleTemp()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_SHOWSETTLETEMP_OFFSET))(this);
		}

		::Class_2_DDDA8B6B2BF87559* get_Model()
		{
			return ((::Class_2_DDDA8B6B2BF87559*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void ClearWrongTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_CLEARWRONGTIPS_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshByCtx(::MoleMole::UISearchObjectQuestionWidgetControllerContext* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISearchObjectQuestionWidgetControllerContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_REFRESHBYCTX_OFFSET))(this, ctx);
		}

		::System::Void ShowSubmitOrNextBtn(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_SHOWSUBMITORNEXTBTN_OFFSET))(this, show);
		}

		::System::Void RefreshQuestion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_REFRESHQUESTION_OFFSET))(this);
		}

		::System::Void InitOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_INITOPTIONS_OFFSET))(this);
		}

		::System::Void OnOptionSelected(::System::Int32 optionIndex, ::System::Boolean optionSelected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_ONOPTIONSELECTED_OFFSET))(this, optionIndex, optionSelected);
		}

		::System::Void RefreshDesc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_REFRESHDESC_OFFSET))(this);
		}

		::System::Void RefreshSubmitBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_REFRESHSUBMITBTN_OFFSET))(this);
		}

		::System::Int32 GetCurSelectedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_GETCURSELECTEDCOUNT_OFFSET))(this);
		}

		::System::Void RefreshSelectionActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_REFRESHSELECTIONACTIVE_OFFSET))(this);
		}

		::MoleMole::UISearchObjectTaskRowWidgetController* GetOrAddWidget()
		{
			return ((::MoleMole::UISearchObjectTaskRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_GETORADDWIDGET_OFFSET))(this);
		}

		::Class_1_3B8C7FC4E1E362DB* get_QAMap()
		{
			return ((::Class_1_3B8C7FC4E1E362DB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER_GET_QAMAP_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
