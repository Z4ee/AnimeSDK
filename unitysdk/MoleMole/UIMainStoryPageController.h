#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_59BDA27C6F0F030A.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMainStoryPageController___c__DisplayClass95_0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3437E8F8CEFA7AE1;
class Class_1_E9529ED64113E4E9;
class Class_2_0A55B5A82A61DAFA;
class Class_2_208CC9941471731A_215;
class Class_2_208CC9941471731A_92;
class Class_2_33EA27A25F076E07;
class Class_2_79AE422BA06F6D26_220;
class Class_2_D6F9B792012303A1;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralBottomRewardInfoWidgetController; }
namespace MoleMole { class UIGeneralPopUpArrowWidgetController; }
namespace MoleMole { class UIMainStoryPersonalRowWidgetController; }
namespace MoleMole { class UIMainStoryRow03ChildWindowController; }
namespace MoleMole { class UITapesGroup3DModelController; }
namespace MoleMole::Config { class UIAnimDelayPara; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_CANNOTDRAGHANDLER_OFFSET UNITYSDK_OFFSET(0x18651310)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_CHECKPRESSCLAMP_OFFSET UNITYSDK_OFFSET(0x18657F20)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_CLEARARCHIVEFILES_OFFSET UNITYSDK_OFFSET(0x18659D20)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_CLEARLEVEL_OFFSET UNITYSDK_OFFSET(0x18653880)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_CLEARPERSONALLINE_OFFSET UNITYSDK_OFFSET(0x1865C6B0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_CLEARSTICKVAL_OFFSET UNITYSDK_OFFSET(0x1865A3F0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_CLOSEVIDEO_OFFSET UNITYSDK_OFFSET(0x1865B030)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_DESELECTLASTSELECTROW_OFFSET UNITYSDK_OFFSET(0x18654D40)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_DONTSHOWTAPE_OFFSET UNITYSDK_OFFSET(0x18656640)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ENABLESHOWTAPEUIANIM_OFFSET UNITYSDK_OFFSET(0x186567B0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ENABLEUIMANIPULATE_OFFSET UNITYSDK_OFFSET(0x1864FFC0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_FADEOUTDECKINFO_OFFSET UNITYSDK_OFFSET(0x18657B70)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_FINISHPERSONALLINE_OFFSET UNITYSDK_OFFSET(0x1864F270)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_GETSHOWCOUNT_OFFSET UNITYSDK_OFFSET(0x18653680)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_GETSTICKVAL_OFFSET UNITYSDK_OFFSET(0x1865A300)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_GET_ISSHOW2DUI_OFFSET UNITYSDK_OFFSET(0x1865F3D0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x18652C90)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1864E010)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_GOTOBATTLE_OFFSET UNITYSDK_OFFSET(0x1865E3A0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_GOTOSUBITEM_OFFSET UNITYSDK_OFFSET(0x1865DAA0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_HANDLEPERSONALFINISHFAIRY_OFFSET UNITYSDK_OFFSET(0x1865E530)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_HIDESCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1864F500)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_HIDETAPEDECKINFO_OFFSET UNITYSDK_OFFSET(0x18653090)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_HIDETAPGROUP_OFFSET UNITYSDK_OFFSET(0x186575B0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_INITARCHIVEFILES_OFFSET UNITYSDK_OFFSET(0x18659D80)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_INITLEVELID_OFFSET UNITYSDK_OFFSET(0x18653210)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_INITLEVEL_OFFSET UNITYSDK_OFFSET(0x18653A50)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_INITPERSONALLINE_OFFSET UNITYSDK_OFFSET(0x1865BB70)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_INITSELECTCTRL_OFFSET UNITYSDK_OFFSET(0x186548B0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ISANYSCROLLVIEWPLAYINGANIM_OFFSET UNITYSDK_OFFSET(0x18659760)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ISINSELECTZONE_OFFSET UNITYSDK_OFFSET(0x18657DA0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ITEMSFADEOUT_OFFSET UNITYSDK_OFFSET(0x18656D30)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18658B40)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1865B330)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONCLICKDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x18659C00)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONCLICKOKREAL_OFFSET UNITYSDK_OFFSET(0x18659FD0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x18659F20)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1864E020)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONDONTSHOWTAPEANIMFINISH_OFFSET UNITYSDK_OFFSET(0x1865F0D0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1865B180)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1865B510)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONENDNEWBIE_OFFSET UNITYSDK_OFFSET(0x18652950)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18658790)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x186581C0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1864FEB0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18657F90)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONMAINSTORYSTARTPERFORMFINISH_OFFSET UNITYSDK_OFFSET(0x18651FB0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONOPENNEWBIE_OFFSET UNITYSDK_OFFSET(0x18652650)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONPOINTUP_OFFSET UNITYSDK_OFFSET(0x1865B700)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x18652C40)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONSHOWTAPE_OFFSET UNITYSDK_OFFSET(0x18652CA0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1864E0B0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18651AC0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18650010)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x186578B0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_PLAYBMFADEINANIM_OFFSET UNITYSDK_OFFSET(0x18653800)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_PLAYBMFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x18653780)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHARCHIVEBTNS_OFFSET UNITYSDK_OFFSET(0x18656AA0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHARCHIVETYPEBTNS_OFFSET UNITYSDK_OFFSET(0x1864F570)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHBOTTOMREWARD_OFFSET UNITYSDK_OFFSET(0x1864EF90)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHINFOMEDIAVIEW_OFFSET UNITYSDK_OFFSET(0x18655F80)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHINVISIBLEAREANOTIFYHINT_OFFSET UNITYSDK_OFFSET(0x1865AA90)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHLEFTVIEW_OFFSET UNITYSDK_OFFSET(0x186554C0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHNOTIFYHINTFORARCHIVETYPES_OFFSET UNITYSDK_OFFSET(0x1865A680)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHNOTIFYHINTFORCURVHS_OFFSET UNITYSDK_OFFSET(0x1865A440)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHNOTIFYHINT_OFFSET UNITYSDK_OFFSET(0x1864FE50)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHPERSONALLEFTVIEW_OFFSET UNITYSDK_OFFSET(0x1865C850)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x18654470)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHRECOMMENDEDHITTYPES_OFFSET UNITYSDK_OFFSET(0x18654EF0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHSCROLLVIEWARROW_OFFSET UNITYSDK_OFFSET(0x1865B900)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SCROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0x18658730)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SETARCHIVETYPE_OFFSET UNITYSDK_OFFSET(0x18657C70)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SETCOMPLEXITYINFO_OFFSET UNITYSDK_OFFSET(0x1865D5C0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SETIMGNOISE_OFFSET UNITYSDK_OFFSET(0x18656530)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SETNOISE_OFFSET UNITYSDK_OFFSET(0x18651800)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x18651A50)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SETVHSTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x18657CC0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SET_ISSHOW2DUI_OFFSET UNITYSDK_OFFSET(0x1865F3C0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SHOWINFOBTN_OFFSET UNITYSDK_OFFSET(0x18651010)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SHOWINFO_OFFSET UNITYSDK_OFFSET(0x1865D8B0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SHOWSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1865B890)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SHOWTAPEDECKINFO_OFFSET UNITYSDK_OFFSET(0x186568F0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SHOWTAPGROUP_OFFSET UNITYSDK_OFFSET(0x18657730)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_TICKCENTERCHOOSEINDEX_OFFSET UNITYSDK_OFFSET(0x18658BA0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_TICKSCROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0x18658F90)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_TICKSCROLLVIEWSCROLLTOTARGETRESULT_OFFSET UNITYSDK_OFFSET(0x186595B0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_TRYOPENNEWTIPS_OFFSET UNITYSDK_OFFSET(0x1865E9B0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_TRYOPENTIPS_OFFSET UNITYSDK_OFFSET(0x18652590)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_TRYREADALLPERSONALENTRY_OFFSET UNITYSDK_OFFSET(0x18651E50)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__CLOSEVIDEO_B__70_0_OFFSET UNITYSDK_OFFSET(0x18660300)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1865F3E0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__INITLEVEL_B__22_0_OFFSET UNITYSDK_OFFSET(0x186601D0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__ITEMSFADEOUT_B__35_0_OFFSET UNITYSDK_OFFSET(0x186602A0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__ONMAINSTORYSTARTPERFORMFINISH_G__TRIGGERNEWBIE_10_0_OFFSET UNITYSDK_OFFSET(0x18652490)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x1865F510)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__ONUIINIT_B__5_1_OFFSET UNITYSDK_OFFSET(0x1865FC20)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__ONUIINIT_B__5_2_OFFSET UNITYSDK_OFFSET(0x1865FE20)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__ONUIINIT_B__5_3_OFFSET UNITYSDK_OFFSET(0x1865FF60)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__ONUIINIT_B__5_4_OFFSET UNITYSDK_OFFSET(0x1865FF70)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__REFRESHBOTTOMREWARD_G__GETGENERALCHALLENGEREWARDLIST_96_0_OFFSET UNITYSDK_OFFSET(0x1865F240)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__REFRESHBOTTOMREWARD_G__GETREWARDINFODATALIST_96_2_OFFSET UNITYSDK_OFFSET(0x18660670)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__REFRESHBOTTOMREWARD_G__ONREWARDINFOCLICKHANDLE_96_1_OFFSET UNITYSDK_OFFSET(0x18660340)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__REFRESHINFOMEDIAVIEW_B__30_0_OFFSET UNITYSDK_OFFSET(0x18660250)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__SETCOMPLEXITYINFO_G__SETTIMECOST_95_0_OFFSET UNITYSDK_OFFSET(0x1865F140)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__SETIMGNOISE_B__32_0_OFFSET UNITYSDK_OFFSET(0x18660260)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__SHOWINFOBTN_B__29_0_OFFSET UNITYSDK_OFFSET(0x186601E0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__TRYOPENNEWTIPS_G__WITHSHOWTIPSOFTAG_93_0_OFFSET UNITYSDK_OFFSET(0x1865EE80)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER__VIDEOPLAYER_PREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0x186517B0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186608F0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18660980)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18660A30)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18660AE0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18660B70)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x18660BA0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18660BB0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18660BC0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18660BD0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x18660BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController_TypeDefinitionIndex = 84546;

	class UIMainStoryPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 MAX_RECOMMENDEDHITTYPES_COUNT = 0x2; // 0x0
		// static const ::System::String* MainStoryDeckInfoFadeIn; // 0x0
		// static const ::System::String* MainStoryDeckInfoFadeOut; // 0x0
		// static const ::System::String* MainStoryDeckInfoUpFadeIn; // 0x0
		// static const ::System::String* MainStoryDeckInfoUpFadeOut; // 0x0
		// static const ::System::String* MainStoryDeckInfoDownFadeIn; // 0x0
		// static const ::System::String* MainStoryDeckInfoDownFadeOut; // 0x0
		// static const ::System::String* MainStoryPageSpecialUIFadeIn; // 0x0
		::System::Boolean _infoBtnShowed; // 0x318
		::UnityEngine::Vector2 _prvAxisValNormalized; // 0x31C
		::System::Single _AxisDragTimeStamp; // 0x324
		::System::Single _DpadDragTimeStamp; // 0x328
		::System::Boolean _personalLineMode; // 0x32C
		::System::Collections::Generic::List_1<::MoleMole::UIMainStoryPersonalRowWidgetController*>* _personalRows; // 0x330
		::MoleMole::UIMainStoryPersonalRowWidgetController* _selectedPersonalRow; // 0x338
		::System::Boolean _isLevelFadeIn; // 0x340
		::System::Boolean _isMoving; // 0x341
		::System::Boolean isStartPerformFinish; // 0x342
		::System::Action* _startPerformFinishAction; // 0x348
		::Class_2_79AE422BA06F6D26_220* _view; // 0x350
		::MoleMole::Config::UIAnimDelayPara* _delayPara; // 0x358
		::MoleMole::UITapesGroup3DModelController* _tapesGroup; // 0x360
		::System::Int32 _curArchiveType; // 0x368
		::System::Int32 _curVHSTemplateID; // 0x36C
		::Class_2_33EA27A25F076E07* _mainStoryModel; // 0x370
		::System::Collections::Generic::List_1<::System::Int32>* _cacheQuestIndexs; // 0x378
		::System::Single _dragBegTimeStamp; // 0x380
		::System::Single _dragEndTimeStamp; // 0x384
		::UnityEngine::Vector3 _dragBegPosition; // 0x388
		::UnityEngine::Vector3 _dragEndPosition; // 0x394
		::System::Collections::Generic::List_1<::MoleMole::UIMainStoryRow03ChildWindowController*>* _rowCtrls; // 0x3A0
		::MoleMole::UIMainStoryRow03ChildWindowController* _selectRow; // 0x3A8
		::Class_1_E9529ED64113E4E9* _playerHelper; // 0x3B0
		::UnityEngine::UI::RawImage* _videoRawImg; // 0x3B8
		::System::Int32 _curDiff; // 0x3C0
		::System::Boolean _isShow2DUI; // 0x3C4
		::Enum_3_59BDA27C6F0F030A curInfoMediaShowType; // 0x3C8
		::System::String* curInfoMediaShowResourceUrl; // 0x3D0
		::System::Single stickPressTimeCount; // 0x3D8
		::Class_2_D6F9B792012303A1* _fromBattleTaskCompletionSource; // 0x3E0
		::System::Boolean _showTapeDeckInfo; // 0x3E8
		::UnityEngine::RectTransform* _currentScrollToTarget; // 0x3F0
		::System::Boolean _needScrollToTarget; // 0x3F8
		::System::Boolean _personalWaitStartPerformFinish; // 0x3F9
		::System::Boolean _ignoreInProgressTips; // 0x3FA
		::MoleMole::UIGeneralBottomRewardInfoWidgetController* _bottomRewardInfo; // 0x400
		::UnityEngine::Color _deckTextColor; // 0x408
		::MoleMole::UIGeneralPopUpArrowWidgetController* _leftPopupArrowWidget; // 0x418
		::MoleMole::UIGeneralPopUpArrowWidgetController* _rightPopupArrowWidget; // 0x420

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Boolean CanNotDragHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_CANNOTDRAGHANDLER_OFFSET))(this);
		}

		::System::Void _videoPlayer_prepareCompleted(::Class_1_E9529ED64113E4E9* source)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__VIDEOPLAYER_PREPARECOMPLETED_OFFSET))(this, source);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnMainStoryStartPerformFinish(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONMAINSTORYSTARTPERFORMFINISH_OFFSET))(this, args);
		}

		::System::Void OnOpenNewBie(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONOPENNEWBIE_OFFSET))(this, args);
		}

		::System::Void OnEndNewBie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONENDNEWBIE_OFFSET))(this);
		}

		::System::Void OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::Enum_3_205B03D40B9BD873 get_MessageMatchPage()
		{
			return ((::Enum_3_205B03D40B9BD873(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::System::Void OnShowTape(::System::Int32 VHSTemplateID, ::System::Boolean playAnim, ::System::Action* callback, ::System::Boolean playSound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONSHOWTAPE_OFFSET))(this, VHSTemplateID, playAnim, callback, playSound);
		}

		::System::Void InitLevelID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_INITLEVELID_OFFSET))(this);
		}

		::System::Void PlayBMFadeOutAnim(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_PLAYBMFADEOUTANIM_OFFSET))(this, callback);
		}

		::System::Void PlayBMFadeInAnim(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_PLAYBMFADEINANIM_OFFSET))(this, callback);
		}

		::System::Int32 GetShowCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_GETSHOWCOUNT_OFFSET))(this);
		}

		::System::Void ClearLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_CLEARLEVEL_OFFSET))(this);
		}

		::System::Void InitLevel(::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_INITLEVEL_OFFSET))(this, playAnim);
		}

		::System::Void DeSelectLastSelectRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_DESELECTLASTSELECTROW_OFFSET))(this);
		}

		::System::Void InitSelectCtrl(::MoleMole::UIMainStoryRow03ChildWindowController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainStoryRow03ChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_INITSELECTCTRL_OFFSET))(this, ctrl);
		}

		::System::Void RefreshProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHPROGRESS_OFFSET))(this);
		}

		::System::Void RefreshRecommendedHitTypes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHRECOMMENDEDHITTYPES_OFFSET))(this);
		}

		::System::Void RefreshLeftView(::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHLEFTVIEW_OFFSET))(this, questID);
		}

		::System::Void ShowInfoBtn(::System::Boolean show, ::System::Boolean playAnim, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SHOWINFOBTN_OFFSET))(this, show, playAnim, force);
		}

		::System::Void RefreshInfoMediaView(::Enum_3_59BDA27C6F0F030A showType, ::System::String* resourceUrl)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_59BDA27C6F0F030A, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHINFOMEDIAVIEW_OFFSET))(this, showType, resourceUrl);
		}

		::System::Void SetNoise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SETNOISE_OFFSET))(this);
		}

		::System::Void SetImgNoise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SETIMGNOISE_OFFSET))(this);
		}

		::System::Void DontShowTape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_DONTSHOWTAPE_OFFSET))(this);
		}

		::System::Void EnableShowTapeUIAnim(::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ENABLESHOWTAPEUIANIM_OFFSET))(this, v);
		}

		::System::Single ItemsFadeOut()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ITEMSFADEOUT_OFFSET))(this);
		}

		::System::Void HideTapGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_HIDETAPGROUP_OFFSET))(this);
		}

		::System::Void ShowTapGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SHOWTAPGROUP_OFFSET))(this);
		}

		::System::Void HideTapeDeckInfo(::System::Boolean playFadeout, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_HIDETAPEDECKINFO_OFFSET))(this, playFadeout, callback);
		}

		::System::Void FadeOutDeckInfo(::System::Int32 switchDir, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_FADEOUTDECKINFO_OFFSET))(this, switchDir, callback);
		}

		::System::Void ShowTapeDeckInfo(::System::Int32 vhsTemplateID, ::System::Boolean playFade, ::System::Int32 switchDir)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SHOWTAPEDECKINFO_OFFSET))(this, vhsTemplateID, playFade, switchDir);
		}

		::System::Void SetArchiveType(::System::Int32 archiveType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SETARCHIVETYPE_OFFSET))(this, archiveType);
		}

		::System::Void SetVHSTemplateID(::System::Int32 vhsTemplateID, ::System::Boolean playFade, ::System::Int32 switchDir)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SETVHSTEMPLATEID_OFFSET))(this, vhsTemplateID, playFade, switchDir);
		}

		::System::Void PlayAnimation(::UnityEngine::Animation* anim, ::System::String* clipName, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_PLAYANIMATION_OFFSET))(this, anim, clipName, callback);
		}

		::System::Void EnableUIManipulate(::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ENABLEUIMANIPULATE_OFFSET))(this, v);
		}

		::System::Boolean IsInSelectZone(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ISINSELECTZONE_OFFSET))(this, point);
		}

		::System::Boolean CheckPressClamp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_CHECKPRESSCLAMP_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void TickCenterChooseIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_TICKCENTERCHOOSEINDEX_OFFSET))(this);
		}

		::System::Void TickScrollViewScrollToTargetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_TICKSCROLLVIEWSCROLLTOTARGETRESULT_OFFSET))(this);
		}

		::System::Void TickScrollToTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_TICKSCROLLTOTARGET_OFFSET))(this);
		}

		::System::Boolean IsAnyScrollViewPlayingAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ISANYSCROLLVIEWPLAYINGANIM_OFFSET))(this);
		}

		::System::Void RefreshArchiveTypeBtns(::System::Boolean disableInteractable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHARCHIVETYPEBTNS_OFFSET))(this, disableInteractable);
		}

		::System::Void RefreshArchiveBtns(::System::Boolean showArchiveTypeBtn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHARCHIVEBTNS_OFFSET))(this, showArchiveTypeBtn);
		}

		::System::Void ScrollToTarget(::UnityEngine::RectTransform* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SCROLLTOTARGET_OFFSET))(this, target);
		}

		::System::Void OnClickDifficulty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONCLICKDIFFICULTY_OFFSET))(this);
		}

		::System::Void OnClickOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONCLICKOK_OFFSET))(this);
		}

		::System::Void OnClickOKReal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONCLICKOKREAL_OFFSET))(this);
		}

		::System::Single GetStickVal(::System::Single axisVal)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_GETSTICKVAL_OFFSET))(this, axisVal);
		}

		::System::Void ClearStickVal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_CLEARSTICKVAL_OFFSET))(this);
		}

		::System::Void RefreshNotifyHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHNOTIFYHINT_OFFSET))(this);
		}

		::System::Void RefreshNotifyHintForCurVhs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHNOTIFYHINTFORCURVHS_OFFSET))(this);
		}

		::System::Void RefreshNotifyHintForArchiveTypes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHNOTIFYHINTFORARCHIVETYPES_OFFSET))(this);
		}

		::System::Void RefreshInvisibleAreaNotifyHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHINVISIBLEAREANOTIFYHINT_OFFSET))(this);
		}

		::System::Void CloseVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_CLOSEVIDEO_OFFSET))(this);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPointDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONDRAG_OFFSET))(this, eventData, worldPointDelta);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONBEGINDRAG_OFFSET))(this, eventData, worldPoint);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONENDDRAG_OFFSET))(this, eventData, worldPoint);
		}

		::System::Void OnPointUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONPOINTUP_OFFSET))(this, eventData);
		}

		::System::Void ShowScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SHOWSCROLLVIEW_OFFSET))(this);
		}

		::System::Void HideScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_HIDESCROLLVIEW_OFFSET))(this);
		}

		::System::Void RefreshScrollViewArrow(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHSCROLLVIEWARROW_OFFSET))(this, show);
		}

		::System::Void InitArchiveFiles(::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_INITARCHIVEFILES_OFFSET))(this, playAnim);
		}

		::System::Void ClearArchiveFiles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_CLEARARCHIVEFILES_OFFSET))(this);
		}

		::System::Void ClearPersonalLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_CLEARPERSONALLINE_OFFSET))(this);
		}

		::System::Void InitPersonalLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_INITPERSONALLINE_OFFSET))(this);
		}

		::System::Void RefreshPersonalLeftView(::Class_2_208CC9941471731A_215* template_)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_215*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHPERSONALLEFTVIEW_OFFSET))(this, template_);
		}

		::System::Void ShowInfo(::System::Int32 battleID, ::Class_2_208CC9941471731A_92* template_)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_208CC9941471731A_92*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SHOWINFO_OFFSET))(this, battleID, template_);
		}

		::System::Void GoToSubItem(::Class_2_208CC9941471731A_92* fileTemplate, ::System::Int32 subID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_92*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_GOTOSUBITEM_OFFSET))(this, fileTemplate, subID);
		}

		::System::Void GotoBattle(::Class_2_0A55B5A82A61DAFA* battleTemplate, ::System::Int32 archiveFileID, ::System::Boolean playFadeOut)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_GOTOBATTLE_OFFSET))(this, battleTemplate, archiveFileID, playFadeOut);
		}

		::System::Void FinishPersonalLine(::System::Int32 ovaContextID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_FINISHPERSONALLINE_OFFSET))(this, ovaContextID);
		}

		::System::Void HandlePersonalFinishFairy(::System::Int32 fairyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_HANDLEPERSONALFINISHFAIRY_OFFSET))(this, fairyID);
		}

		::System::Void TryOpenTips(::System::Boolean ignoreInProgressTips)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_TRYOPENTIPS_OFFSET))(this, ignoreInProgressTips);
		}

		::System::Void TryOpenNewTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_TRYOPENNEWTIPS_OFFSET))(this);
		}

		::System::Void OnDontShowTapeAnimFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_ONDONTSHOWTAPEANIMFINISH_OFFSET))(this);
		}

		::System::Void SetComplexityInfo(::System::String* complexity)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SETCOMPLEXITYINFO_OFFSET))(this, complexity);
		}

		::System::Void RefreshBottomReward(::System::Boolean show, ::System::Nullable_1<::System::Int32> rewardQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_REFRESHBOTTOMREWARD_OFFSET))(this, show, rewardQuestID);
		}

		::System::Void TryReadAllPersonalEntry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_TRYREADALLPERSONALENTRY_OFFSET))(this);
		}

		::System::Void set_IsShow2DUI(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_SET_ISSHOW2DUI_OFFSET))(this, value);
		}

		::System::Boolean get_IsShow2DUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_GET_ISSHOW2DUI_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__ONUIINIT_B__5_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__ONUIINIT_B__5_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__ONUIINIT_B__5_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__ONUIINIT_B__5_3_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__ONUIINIT_B__5_4_OFFSET))(this);
		}

		::System::Void _OnMainStoryStartPerformFinish_g__TriggerNewBie_10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__ONMAINSTORYSTARTPERFORMFINISH_G__TRIGGERNEWBIE_10_0_OFFSET))(this);
		}

		::System::Void _InitLevel_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__INITLEVEL_B__22_0_OFFSET))(this);
		}

		::System::Void _ShowInfoBtn_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__SHOWINFOBTN_B__29_0_OFFSET))(this);
		}

		::System::Void _RefreshInfoMediaView_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__REFRESHINFOMEDIAVIEW_B__30_0_OFFSET))(this);
		}

		::System::Void _SetImgNoise_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__SETIMGNOISE_B__32_0_OFFSET))(this);
		}

		::System::Void _ItemsFadeOut_b__35_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__ITEMSFADEOUT_B__35_0_OFFSET))(this);
		}

		::System::Void _CloseVideo_b__70_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__CLOSEVIDEO_B__70_0_OFFSET))(this);
		}

		static ::System::Boolean _TryOpenNewTips_g__WithShowTipsOfTag_93_0(::System::String* sourceTag)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__TRYOPENNEWTIPS_G__WITHSHOWTIPSOFTAG_93_0_OFFSET))(sourceTag);
		}

		static ::System::Void _SetComplexityInfo_g__SetTimeCost_95_0(::System::Int32 c, ::MoleMole::UIMainStoryPageController___c__DisplayClass95_0& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::MoleMole::UIMainStoryPageController___c__DisplayClass95_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__SETCOMPLEXITYINFO_G__SETTIMECOST_95_0_OFFSET))(c, a2);
		}

		static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* _RefreshBottomReward_g__GetGeneralChallengeRewardList_96_0(::System::Int32 questID)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__REFRESHBOTTOMREWARD_G__GETGENERALCHALLENGEREWARDLIST_96_0_OFFSET))(questID);
		}

		::System::Void _RefreshBottomReward_g__OnRewardInfoClickHandle_96_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__REFRESHBOTTOMREWARD_G__ONREWARDINFOCLICKHANDLE_96_1_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::Class_1_3437E8F8CEFA7AE1*>* _RefreshBottomReward_g__GetRewardInfoDataList_96_2(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* tempList)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_3437E8F8CEFA7AE1*>*(*)(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER__REFRESHBOTTOMREWARD_G__GETREWARDINFODATALIST_96_2_OFFSET))(tempList);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
