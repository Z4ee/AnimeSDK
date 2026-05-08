#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_24C014472A8CBA5E.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Comic/ComicBubbleImgType.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIComicPageController_ComicUIState.h"
#include "unitysdk/MoleMole/UIComicPageController_FadeInMode.h"
#include "unitysdk/MoleMole/UIComicPageController_ImgMoveDir.h"
#include "unitysdk/MoleMole/UIComicPageController_UIPlayMode.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_199;
class Class_0_16E4307DCC419505_200;
class Class_1_53B1E8B375F98B91;
class Class_1_6708F667CD105CA8;
class Class_1_77073945F3D43FF8;
class Class_1_A35D3F2E1A161616;
class Class_1_C7E6991E78CB1409;
class Class_2_18AF7D3DA799666F;
class Class_2_18AF7D3DA799666F_1;
class Class_2_1E72F52D475DC53E;
class Class_2_471AD45365081843;
class Class_2_79F6D62CE30E3F8E_25;
class PopText;
class UIDragComponent;
namespace MoleMole { class ComicConfig; }
namespace MoleMole { class ComicPageData; }
namespace MoleMole { class ComicSwitchSceneNarratorInfo; }
namespace MoleMole { class UIComicPageController_AnimationPlayable; }
namespace MoleMole { class UIComicPageController_ComicPageDelayAction; }
namespace MoleMole { class UIComicPageController_audioPlayingState; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UserLocalDataItem; }
namespace MoleMole { template <typename T> class UIComicPageController_RecyclePool_1; }
namespace MoleMole::Comic { class ComicBubbleImgTypePicConfig; }
namespace MoleMole::Comic { class DialogueAudioContent; }
namespace MoleMole::Comic { class MonoComicBGExchangeDecoration; }
namespace MoleMole::Comic { class MonoComicBubble; }
namespace MoleMole::Comic { class MonoComicDecorateEventBase; }
namespace MoleMole::Comic { class MonoComicEventBase; }
namespace MoleMole::Comic { class MonoComicImgComponent; }
namespace MoleMole::Comic { class MonoComicKeyEventBase; }
namespace MoleMole::Comic { class MonoComicPictureDecoration; }
namespace MoleMole::Comic { class MonoComicVoiceDecoration; }
namespace MoleMole::Comic { class RuntimeComicClearEvent; }
namespace MoleMole::Comic { class RuntimeComicLogicEventBase; }
namespace MoleMole::Comic { class RuntimeComicShakeEvent; }
namespace MoleMole::Config { class UIComicTweenMoveConfig; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class BubbleEvent; }
namespace UnityEngine::Timeline { class ComicClearEvent; }
namespace UnityEngine::Timeline { class ComicEventBase; }
namespace UnityEngine::Timeline { class ComicShakeEvent; }
namespace UnityEngine::Timeline { class DecorateEventBase; }
namespace UnityEngine::Timeline { class INapNotifyData; }
namespace UnityEngine::Timeline { class ImageExchangeEvent; }
namespace UnityEngine::Timeline { class ImageExchangeEventZoneVer; }
namespace UnityEngine::Timeline { class KeyEventBase; }
namespace UnityEngine::Timeline { class LogicEventBase; }
namespace UnityEngine::Timeline { class PictureDecorateEvent; }
namespace UnityEngine::Timeline { class SplitScreenEvent; }
namespace UnityEngine::Timeline { class VoiceDecorateEvent; }
namespace UnityEngine::Timeline::Comic::DataSplitter { class PageData; }

#define MOLEMOLE_UICOMICPAGECONTROLLER_ADDEVENTTOHIDELIST_OFFSET UNITYSDK_OFFSET(0x142FA900)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ADDEVENTTOMOVEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x142FA9D0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ADDTOACTIVEEVENTLIST_OFFSET UNITYSDK_OFFSET(0x142F4850)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ADDTOCURRENTDECORATEEVENTLIST_OFFSET UNITYSDK_OFFSET(0x142F46C0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ADDTOCURRENTKEYEVENTLIST_OFFSET UNITYSDK_OFFSET(0x142FD0C0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ADDTOCURRENTLOGICEVENTLIST_OFFSET UNITYSDK_OFFSET(0x142FD350)
#define MOLEMOLE_UICOMICPAGECONTROLLER_BINDTIMELINEDATA_OFFSET UNITYSDK_OFFSET(0x142F7900)
#define MOLEMOLE_UICOMICPAGECONTROLLER_BUILDSWITCHNARRATORINFO_OFFSET UNITYSDK_OFFSET(0x142E1390)
#define MOLEMOLE_UICOMICPAGECONTROLLER_CHANGESTORYBGM_OFFSET UNITYSDK_OFFSET(0x142F73F0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_CHECKALLAUDIOFINISH_OFFSET UNITYSDK_OFFSET(0x142F3C50)
#define MOLEMOLE_UICOMICPAGECONTROLLER_CHECKCANTRIGGERCOMICNEXT_OFFSET UNITYSDK_OFFSET(0x142FF620)
#define MOLEMOLE_UICOMICPAGECONTROLLER_CHECKDECOEVENTSINMARKERFINISH_OFFSET UNITYSDK_OFFSET(0x142F3910)
#define MOLEMOLE_UICOMICPAGECONTROLLER_CHECKEVENTSINMARKERFINISH_OFFSET UNITYSDK_OFFSET(0x142F2D00)
#define MOLEMOLE_UICOMICPAGECONTROLLER_CHECKKEYEVENTSINMARKERFINISH_OFFSET UNITYSDK_OFFSET(0x142F3740)
#define MOLEMOLE_UICOMICPAGECONTROLLER_CHECKLOGICEVENTSINMARKERFINISH_OFFSET UNITYSDK_OFFSET(0x142F3AB0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_CLEARACTION_OFFSET UNITYSDK_OFFSET(0x142DB5C0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_CLEARASSET_OFFSET UNITYSDK_OFFSET(0x142F22D0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_CLOSEMENU_OFFSET UNITYSDK_OFFSET(0x142EB440)
#define MOLEMOLE_UICOMICPAGECONTROLLER_COLLECTALLACTIVEEVENTS_OFFSET UNITYSDK_OFFSET(0x142E5DC0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_COLLECTALLBUBBLE_OFFSET UNITYSDK_OFFSET(0x142E54C0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_COLLECTALLDECORATEEVENTS_OFFSET UNITYSDK_OFFSET(0x142E5830)
#define MOLEMOLE_UICOMICPAGECONTROLLER_COLLECTALLHIDEANDMOVEEVENTS_OFFSET UNITYSDK_OFFSET(0x142F49E0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_COLLECTALLKEYEVENTS_OFFSET UNITYSDK_OFFSET(0x142E5640)
#define MOLEMOLE_UICOMICPAGECONTROLLER_COLLECTALLLOGICEVENTS_OFFSET UNITYSDK_OFFSET(0x142E5AC0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_COLLECTCOMICIMGCONTENT_OFFSET UNITYSDK_OFFSET(0x142F3DA0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_COLLECTDELAYACTION_OFFSET UNITYSDK_OFFSET(0x142E5C50)
#define MOLEMOLE_UICOMICPAGECONTROLLER_CREATEBUBBLE_OFFSET UNITYSDK_OFFSET(0x142FC220)
#define MOLEMOLE_UICOMICPAGECONTROLLER_CREATEIMGGROUPBYCONFIG_OFFSET UNITYSDK_OFFSET(0x142E15E0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_CREATEPICTUREDECORATION_OFFSET UNITYSDK_OFFSET(0x142FEC80)
#define MOLEMOLE_UICOMICPAGECONTROLLER_CREATEVOICEDECORATION_OFFSET UNITYSDK_OFFSET(0x142FE8D0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_DESTROYDATAPOOL_OFFSET UNITYSDK_OFFSET(0x142E2EA0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_DOSKIP_OFFSET UNITYSDK_OFFSET(0x142F6AD0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_DRAGIMGBEGIN_OFFSET UNITYSDK_OFFSET(0x142ECA30)
#define MOLEMOLE_UICOMICPAGECONTROLLER_DRAGIMGEND_OFFSET UNITYSDK_OFFSET(0x142ECA90)
#define MOLEMOLE_UICOMICPAGECONTROLLER_DRAGMOVEPAGE_OFFSET UNITYSDK_OFFSET(0x142ED2F0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ENABLENEXTPAGECLICK_OFFSET UNITYSDK_OFFSET(0x142F1F20)
#define MOLEMOLE_UICOMICPAGECONTROLLER_FADEINSWITCHSCENENARRATOR_OFFSET UNITYSDK_OFFSET(0x142EBEC0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_FADEOUTMOVEMENT_OFFSET UNITYSDK_OFFSET(0x142F1F70)
#define MOLEMOLE_UICOMICPAGECONTROLLER_FADEOUTSWITCHSCENENARRATOR_OFFSET UNITYSDK_OFFSET(0x142EC8D0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_FINISHFADEOUTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x142F1BE0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_GETAUDIOSTATEFROMPOOL_OFFSET UNITYSDK_OFFSET(0x142EC620)
#define MOLEMOLE_UICOMICPAGECONTROLLER_GETCURRENTBUBBLEROOT_OFFSET UNITYSDK_OFFSET(0x142FA7D0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_GETCUSTOMHIDE3DTIME_OFFSET UNITYSDK_OFFSET(0x142E4B80)
#define MOLEMOLE_UICOMICPAGECONTROLLER_GETDECORATIONROOTBYIMAGEIDX_OFFSET UNITYSDK_OFFSET(0x142FEB50)
#define MOLEMOLE_UICOMICPAGECONTROLLER_GETHIDEEVENTSWHENSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x142F92E0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_GETIMGCOMPONENTSTYLEKEY_OFFSET UNITYSDK_OFFSET(0x142EBAA0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_GETIMGDECORATIONROOTBYINDEX_OFFSET UNITYSDK_OFFSET(0x142FEE80)
#define MOLEMOLE_UICOMICPAGECONTROLLER_GETPERFORMTYPE_OFFSET UNITYSDK_OFFSET(0x142DB520)
#define MOLEMOLE_UICOMICPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x142DB420)
#define MOLEMOLE_UICOMICPAGECONTROLLER_GET_PERFORMID_OFFSET UNITYSDK_OFFSET(0x142DB440)
#define MOLEMOLE_UICOMICPAGECONTROLLER_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x142DB460)
#define MOLEMOLE_UICOMICPAGECONTROLLER_GET_UISTATE_OFFSET UNITYSDK_OFFSET(0x142DB430)
#define MOLEMOLE_UICOMICPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x142DB410)
#define MOLEMOLE_UICOMICPAGECONTROLLER_HAVESWITCHSCENNENARRATOR_OFFSET UNITYSDK_OFFSET(0x142EBE60)
#define MOLEMOLE_UICOMICPAGECONTROLLER_HIDEEVENT_OFFSET UNITYSDK_OFFSET(0x142F9610)
#define MOLEMOLE_UICOMICPAGECONTROLLER_INITARROW_OFFSET UNITYSDK_OFFSET(0x142E9E80)
#define MOLEMOLE_UICOMICPAGECONTROLLER_INITAUDIOSTATEPOOL_OFFSET UNITYSDK_OFFSET(0x142EF010)
#define MOLEMOLE_UICOMICPAGECONTROLLER_INITBUBBLERANGE_OFFSET UNITYSDK_OFFSET(0x142E9E00)
#define MOLEMOLE_UICOMICPAGECONTROLLER_INITDATAPOOL_OFFSET UNITYSDK_OFFSET(0x142DC590)
#define MOLEMOLE_UICOMICPAGECONTROLLER_INITDELAYACTIONPARAM_OFFSET UNITYSDK_OFFSET(0x142E9CF0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_INITDRAG_OFFSET UNITYSDK_OFFSET(0x142EA170)
#define MOLEMOLE_UICOMICPAGECONTROLLER_INITENTERANDQUITANIM_OFFSET UNITYSDK_OFFSET(0x142E1DC0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_INITFRONTNENDDECORATEIMG_OFFSET UNITYSDK_OFFSET(0x142EA880)
#define MOLEMOLE_UICOMICPAGECONTROLLER_INITMENUSETTING_OFFSET UNITYSDK_OFFSET(0x142E9B80)
#define MOLEMOLE_UICOMICPAGECONTROLLER_INITPRELOADEVENTLIST_OFFSET UNITYSDK_OFFSET(0x142E1CA0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_INITSWITCHSCENENARRATORITEM_OFFSET UNITYSDK_OFFSET(0x142EA520)
#define MOLEMOLE_UICOMICPAGECONTROLLER_INITUIITEM_OFFSET UNITYSDK_OFFSET(0x142E64A0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ISLASTCHAPTER_OFFSET UNITYSDK_OFFSET(0x142ED380)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ISPLAYINGEVENT_OFFSET UNITYSDK_OFFSET(0x142F2F50)
#define MOLEMOLE_UICOMICPAGECONTROLLER_JUMPTHROUGHMARKEREVENTS_OFFSET UNITYSDK_OFFSET(0x142F5C20)
#define MOLEMOLE_UICOMICPAGECONTROLLER_MOVEPAGEWITHDIR_OFFSET UNITYSDK_OFFSET(0x142FF2C0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x142F3520)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONCLICKCHANGEAUTOPLAYSTATEFROMOUTSIDE_OFFSET UNITYSDK_OFFSET(0x142EB6B0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONCLICKCHANGEAUTOPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x142EB040)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONCLICKMENUBACKGROUNDBTN_OFFSET UNITYSDK_OFFSET(0x142F6810)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONCLICKMENUBTN_OFFSET UNITYSDK_OFFSET(0x142EAB80)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0x142F6590)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONCLICKSKIPUI_OFFSET UNITYSDK_OFFSET(0x142F6950)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONCLICKSWITCHSCENENARRATOR_OFFSET UNITYSDK_OFFSET(0x142EC720)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONCLICKVIEWBTN_OFFSET UNITYSDK_OFFSET(0x142ECDA0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONCLOSEPERFORMPAGEFROMOUTSIDE_OFFSET UNITYSDK_OFFSET(0x142F2530)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x142DB650)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONEXITPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x142E60B0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONEXITPLAYINGNEXTGALGAME_OFFSET UNITYSDK_OFFSET(0x142F2070)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONFINISHPLAYINGZONE_OFFSET UNITYSDK_OFFSET(0x142FD640)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x142E4BE0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x142FF070)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONMENUBTNLONGPRESSTRIGGER_OFFSET UNITYSDK_OFFSET(0x142EAF80)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONMENUBTNLONGPRESSUP_OFFSET UNITYSDK_OFFSET(0x142EAFE0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONMOVENEXTSTOP_OFFSET UNITYSDK_OFFSET(0x142F2FB0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONNOTIFYMARKERINFO_OFFSET UNITYSDK_OFFSET(0x142FCE30)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONNOTIFYPAGEEND_OFFSET UNITYSDK_OFFSET(0x142FC760)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONNOTIFYPAUSEWAITINFO_OFFSET UNITYSDK_OFFSET(0x142FC820)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONNOTIFYZONEINFO_OFFSET UNITYSDK_OFFSET(0x142FC9C0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONPLAYBUBBLEAUDIOFORDEBUG_OFFSET UNITYSDK_OFFSET(0x142FC060)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONPLAYCOMICFINISH_OFFSET UNITYSDK_OFFSET(0x142F8FA0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONPLAYENTERFINISH_OFFSET UNITYSDK_OFFSET(0x142F1700)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONPLAYEVENTAUDIOFINISH_OFFSET UNITYSDK_OFFSET(0x142F8FF0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x142DB6E0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONSWITCHSCENENARRATORPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x142EC850)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONTOUCHIMGEND_OFFSET UNITYSDK_OFFSET(0x142ECCF0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONTOUCHIMGSTART_OFFSET UNITYSDK_OFFSET(0x142ECC90)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x142E8160)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x142E6450)
#define MOLEMOLE_UICOMICPAGECONTROLLER_OPENMENU_OFFSET UNITYSDK_OFFSET(0x142EAD80)
#define MOLEMOLE_UICOMICPAGECONTROLLER_PERFORMPLAYBLACKMASKFADEIN_OFFSET UNITYSDK_OFFSET(0x142DB570)
#define MOLEMOLE_UICOMICPAGECONTROLLER_PLAYBLACKMASKFADEIN_OFFSET UNITYSDK_OFFSET(0x142F0FC0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_PLAYCHAPTERSTARTBMG_OFFSET UNITYSDK_OFFSET(0x142EF1A0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_PLAYCHAPTER_OFFSET UNITYSDK_OFFSET(0x142F51D0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_PLAYCURPAGEBGM_OFFSET UNITYSDK_OFFSET(0x142F7580)
#define MOLEMOLE_UICOMICPAGECONTROLLER_PLAYCURRENTCHAPTER_OFFSET UNITYSDK_OFFSET(0x142F7BB0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_PLAYENTER_OFFSET UNITYSDK_OFFSET(0x142E2A90)
#define MOLEMOLE_UICOMICPAGECONTROLLER_PLAYEXIT_OFFSET UNITYSDK_OFFSET(0x142ED500)
#define MOLEMOLE_UICOMICPAGECONTROLLER_PLAYIMGFADE_OFFSET UNITYSDK_OFFSET(0x142F0AB0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_PLAYNORMALFADEIN_OFFSET UNITYSDK_OFFSET(0x142F0D00)
#define MOLEMOLE_UICOMICPAGECONTROLLER_PLAYSPECIALBLACKMASKFADEIN_OFFSET UNITYSDK_OFFSET(0x142F1360)
#define MOLEMOLE_UICOMICPAGECONTROLLER_POPBUBBLE_OFFSET UNITYSDK_OFFSET(0x142FA720)
#define MOLEMOLE_UICOMICPAGECONTROLLER_POPCOMICIMGCOMPONENT_OFFSET UNITYSDK_OFFSET(0x142EBB40)
#define MOLEMOLE_UICOMICPAGECONTROLLER_POPDELAYACTION_OFFSET UNITYSDK_OFFSET(0x142F1C40)
#define MOLEMOLE_UICOMICPAGECONTROLLER_POPPICTUREDECORATION_OFFSET UNITYSDK_OFFSET(0x142FEDF0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_POPVOICEDECORATION_OFFSET UNITYSDK_OFFSET(0x142FEA60)
#define MOLEMOLE_UICOMICPAGECONTROLLER_PRECREATEBUBBLE_OFFSET UNITYSDK_OFFSET(0x142FC0E0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_PRECREATEEVENTOBJECTPOOL_OFFSET UNITYSDK_OFFSET(0x142E9B20)
#define MOLEMOLE_UICOMICPAGECONTROLLER_PRECREATEPICTUREDECORATION_OFFSET UNITYSDK_OFFSET(0x142FD790)
#define MOLEMOLE_UICOMICPAGECONTROLLER_PRECREATEVOICEDECORATION_OFFSET UNITYSDK_OFFSET(0x142FD690)
#define MOLEMOLE_UICOMICPAGECONTROLLER_PROCESSDRAG_OFFSET UNITYSDK_OFFSET(0x142ECB40)
#define MOLEMOLE_UICOMICPAGECONTROLLER_RECYCLEAUDIOSTATETOPOOL_OFFSET UNITYSDK_OFFSET(0x142FEF80)
#define MOLEMOLE_UICOMICPAGECONTROLLER_RECYCLEPAGEDATA_OFFSET UNITYSDK_OFFSET(0x142E3200)
#define MOLEMOLE_UICOMICPAGECONTROLLER_RELEASEBUBBLE_OFFSET UNITYSDK_OFFSET(0x142E8390)
#define MOLEMOLE_UICOMICPAGECONTROLLER_RESETEVENTPLAYINGSTATE_OFFSET UNITYSDK_OFFSET(0x142EB310)
#define MOLEMOLE_UICOMICPAGECONTROLLER_RESETMARKEREVENTSPARAMS_OFFSET UNITYSDK_OFFSET(0x142F36C0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_RESETUIDISPLAY_OFFSET UNITYSDK_OFFSET(0x142E5360)
#define MOLEMOLE_UICOMICPAGECONTROLLER_RESETUIPOS_OFFSET UNITYSDK_OFFSET(0x142E4FD0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_RESURRECTTIMELINEINFO_OFFSET UNITYSDK_OFFSET(0x142DC710)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SETACTIVEPROCESSBTNS_OFFSET UNITYSDK_OFFSET(0x142EB780)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SETALLAUDIOSTATEFINISH_OFFSET UNITYSDK_OFFSET(0x142FD4E0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SETARROWHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x142EE9E0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SETARROWSTATE_OFFSET UNITYSDK_OFFSET(0x142EEC90)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SETAUTOPLAYTOLOCALCONFIG_OFFSET UNITYSDK_OFFSET(0x142EB2B0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SETDECORATEIMGANDSHOW_OFFSET UNITYSDK_OFFSET(0x142EF460)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SETDISPLAYIMAGE_OFFSET UNITYSDK_OFFSET(0x142EF770)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SETLEFTARROWDISPLAY_OFFSET UNITYSDK_OFFSET(0x142EEAF0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SETOUTSIDEBTNSTATE_OFFSET UNITYSDK_OFFSET(0x142E2D30)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SETPRELOADDECORATION_OFFSET UNITYSDK_OFFSET(0x142F0220)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SETPRESSMENUBTNTIME_OFFSET UNITYSDK_OFFSET(0x142EBA10)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SETRIGHTARROWDISPLAY_OFFSET UNITYSDK_OFFSET(0x142EEBC0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x142E80D0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SETUPAUTOPLAYANIM_OFFSET UNITYSDK_OFFSET(0x142EB180)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SETUPBUBBLEAUDIOS_OFFSET UNITYSDK_OFFSET(0x142FB090)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SETUPPAGESPLITSCREENAUDIO_OFFSET UNITYSDK_OFFSET(0x142E3C70)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SETUPPAGESTARTAUDIO_OFFSET UNITYSDK_OFFSET(0x142E38E0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SET_PERFORMID_OFFSET UNITYSDK_OFFSET(0x142DB450)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SHIFTIMGPOSITION_OFFSET UNITYSDK_OFFSET(0x142F5230)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SHOWBUBBLE_OFFSET UNITYSDK_OFFSET(0x142FA0B0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SHOWEXCHANGEIMGZONEVER_OFFSET UNITYSDK_OFFSET(0x142FCCD0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SHOWEXCHANGEIMG_OFFSET UNITYSDK_OFFSET(0x142FE770)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SHOWNARRATORTEXT_OFFSET UNITYSDK_OFFSET(0x142EC050)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SHOWPICTUREDECORATION_OFFSET UNITYSDK_OFFSET(0x142FE500)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SHOWSKIPTIP_OFFSET UNITYSDK_OFFSET(0x142F31E0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SHOWSPLITSCREENPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x142FC410)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SHOWVOICEDECORATION_OFFSET UNITYSDK_OFFSET(0x142FE360)
#define MOLEMOLE_UICOMICPAGECONTROLLER_STARTMOVE_OFFSET UNITYSDK_OFFSET(0x142EDE30)
#define MOLEMOLE_UICOMICPAGECONTROLLER_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x142F19A0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_STARTSWITCHSCENENARRATOR_OFFSET UNITYSDK_OFFSET(0x142EBF40)
#define MOLEMOLE_UICOMICPAGECONTROLLER_STARTWAITPLAYBGM_OFFSET UNITYSDK_OFFSET(0x142F71F0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_STOPCURRENTPAGEAUDIOS_OFFSET UNITYSDK_OFFSET(0x142F4D30)
#define MOLEMOLE_UICOMICPAGECONTROLLER_STOPCURVOICE_OFFSET UNITYSDK_OFFSET(0x142F1CE0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_STOPLASTPAGETRANSITIONAUDIO_OFFSET UNITYSDK_OFFSET(0x142F7280)
#define MOLEMOLE_UICOMICPAGECONTROLLER_STOPPAGEAUDIOS_OFFSET UNITYSDK_OFFSET(0x142E5E30)
#define MOLEMOLE_UICOMICPAGECONTROLLER_STOPSWITCHSCENEAUDIO_OFFSET UNITYSDK_OFFSET(0x142E5E80)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SWITCHBUBBLEFOCUSANIM_OFFSET UNITYSDK_OFFSET(0x142FF6C0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_SWITCHBUBBLEFOCUS_OFFSET UNITYSDK_OFFSET(0x142FF4D0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_TICKEVENTDELAY_OFFSET UNITYSDK_OFFSET(0x142F29E0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_TRIGGERBGSHAKE_OFFSET UNITYSDK_OFFSET(0x142FD9F0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_TRIGGERCLEAREVENT_OFFSET UNITYSDK_OFFSET(0x142FD8D0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_TRIGGERDECORATEEVENT_OFFSET UNITYSDK_OFFSET(0x142F4010)
#define MOLEMOLE_UICOMICPAGECONTROLLER_TRIGGERHIDEEVENTSWHENSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x142F91A0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_TRIGGERLOGICEVENT_OFFSET UNITYSDK_OFFSET(0x142FD250)
#define MOLEMOLE_UICOMICPAGECONTROLLER_TRIGGERMOVEEVENTSWHENSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x142F9960)
#define MOLEMOLE_UICOMICPAGECONTROLLER_UPDATEACTIVEEVENTS_OFFSET UNITYSDK_OFFSET(0x142F2880)
#define MOLEMOLE_UICOMICPAGECONTROLLER_UPDATEDELAYACTION_OFFSET UNITYSDK_OFFSET(0x142E86C0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_UPDATEFADEIN_OFFSET UNITYSDK_OFFSET(0x142E8A90)
#define MOLEMOLE_UICOMICPAGECONTROLLER_UPDATEFADEOUT_OFFSET UNITYSDK_OFFSET(0x142E8C00)
#define MOLEMOLE_UICOMICPAGECONTROLLER_UPDATEFROMTLMANAGER_OFFSET UNITYSDK_OFFSET(0x142E8590)
#define MOLEMOLE_UICOMICPAGECONTROLLER_UPDATEMENUBTNPROGRESS_OFFSET UNITYSDK_OFFSET(0x142F2D90)
#define MOLEMOLE_UICOMICPAGECONTROLLER_UPDATENARRATORANIMATION_OFFSET UNITYSDK_OFFSET(0x142E8980)
#define MOLEMOLE_UICOMICPAGECONTROLLER_UPDATEPLAY_OFFSET UNITYSDK_OFFSET(0x142E9810)
#define MOLEMOLE_UICOMICPAGECONTROLLER_UPDATESWITCHSCENEPLAY_OFFSET UNITYSDK_OFFSET(0x142E9AC0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_UPDATETURNPAGE_OFFSET UNITYSDK_OFFSET(0x142E95B0)
#define MOLEMOLE_UICOMICPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x142FFB10)
#define MOLEMOLE_UICOMICPAGECONTROLLER__FADEOUTSWITCHSCENENARRATOR_B__268_0_OFFSET UNITYSDK_OFFSET(0x14300150)
#define MOLEMOLE_UICOMICPAGECONTROLLER__ONCLICKCHANGEAUTOPLAYSTATEFROMOUTSIDE_B__251_0_OFFSET UNITYSDK_OFFSET(0x14300050)
#define MOLEMOLE_UICOMICPAGECONTROLLER__ONCLICKSKIPUI_B__330_0_OFFSET UNITYSDK_OFFSET(0x14300B70)
#define MOLEMOLE_UICOMICPAGECONTROLLER__ONEXITPLAYFINISH_B__300_0_OFFSET UNITYSDK_OFFSET(0x143008E0)
#define MOLEMOLE_UICOMICPAGECONTROLLER__OPENMENU_B__253_0_OFFSET UNITYSDK_OFFSET(0x14300100)
#define MOLEMOLE_UICOMICPAGECONTROLLER__PLAYNORMALFADEIN_B__288_0_OFFSET UNITYSDK_OFFSET(0x143002D0)
#define MOLEMOLE_UICOMICPAGECONTROLLER__SHOWNARRATORTEXT_B__265_0_OFFSET UNITYSDK_OFFSET(0x14300140)
#define MOLEMOLE_UICOMICPAGECONTROLLER__SHOWSKIPTIP_B__331_0_OFFSET UNITYSDK_OFFSET(0x14300B80)
#define MOLEMOLE_UICOMICPAGECONTROLLER__UPDATEFADEOUT_B__294_0_OFFSET UNITYSDK_OFFSET(0x143004D0)
#define MOLEMOLE_UICOMICPAGECONTROLLER__UPDATEMENUBTNPROGRESS_B__307_0_OFFSET UNITYSDK_OFFSET(0x14300A00)
#define MOLEMOLE_UICOMICPAGECONTROLLER___BASE_GETCUSTOMHIDE3DTIME_OFFSET UNITYSDK_OFFSET(0x14300B90)
#define MOLEMOLE_UICOMICPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14300C20)
#define MOLEMOLE_UICOMICPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x14300CB0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14300D40)
#define MOLEMOLE_UICOMICPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14300D70)
#define MOLEMOLE_UICOMICPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14300D80)
#define MOLEMOLE_UICOMICPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14300D90)
#define MOLEMOLE_UICOMICPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x14300DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController_TypeDefinitionIndex = 40014;

	class UIComicPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 moveCenterIndex = 0x1; // 0x0
		// static const ::System::Single curtainCoverWaitTime; // 0x0
		// static const ::System::Single curtainCoverAnimTime; // 0x0
		// static const ::MoleMole::UIComicPageController_ImgMoveDir defaultMoveDir; // 0x0
		// static const ::System::String* pageViewEnterAnimation; // 0x0
		// static const ::System::String* pageViewExitAniamtion; // 0x0
		// static const ::System::String* pageViewMaskFadeInAnimation; // 0x0
		// static const ::System::String* pageViewBlackMaskExitAnimation; // 0x0
		// static const ::System::String* pageSpecialMaskFadeInAnimation; // 0x0
		// static const ::System::String* pageSpecialMaskFadeoutAnimation; // 0x0
		// static const ::System::String* nextBtnFadeInAnimation; // 0x0
		// static const ::System::String* nextBtnFadeOutAnimation; // 0x0
		// static const ::System::String* bubblePath; // 0x0
		// static const ::System::String* bubblePath2; // 0x0
		// static const ::System::String* pictureDecoPath; // 0x0
		// static const ::System::String* voiceDecoPath; // 0x0
		// static const ::System::Int32 maxBubbleNum = 0x4; // 0x0
		// static const ::System::Single _SCALE_FACTOR; // 0x0
		// static const ::System::Double oneFrameProtectTime; // 0x0
		// static const ::System::Int32 maxVoiceDecorateNum = 0x4; // 0x0
		// static const ::System::Int32 maxPictureDecorateNum = 0x4; // 0x0
		// static const ::System::Int32 AUDIO_POOL_SIZE = 0x4; // 0x0
		// static const ::System::Single dragImgMoveMiniDistance; // 0x0
		// static const ::System::String* narratorFadeIn; // 0x0
		// static const ::System::String* narratorFadeOut; // 0x0
		// static const ::System::String* imgTitleFadeInAnimation; // 0x0
		// static const ::System::String* imgTitleFadeOutAnimation; // 0x0
		// static const ::System::Single _AUTO_CLICK_COUNT_DOWN_PAUSE_WAIT; // 0x0
		// static const ::System::Single _AUTO_CLICK_COUNT_DOWN_TURN_PAGE; // 0x0
		// static const ::System::String* OPEN_MENU_ANIM; // 0x0
		// static const ::System::String* CLOSE_MENU_ANIM; // 0x0
		// static const ::System::String* AUTO_BTN_ANIM; // 0x0
		::Class_2_79F6D62CE30E3F8E_25* _view; // 0x310
		::System::Boolean _skip; // 0x318
		::UnityEngine::Animation* pageAnimation; // 0x320
		::System::Int32 displayIndex; // 0x328
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* imageRootList; // 0x330
		::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>* imageCanvasGroupList; // 0x338
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* keyRootList; // 0x340
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* decorateRootList; // 0x348
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* imgDecorateRootList; // 0x350
		::System::Collections::Generic::List_1<::UnityEngine::Animation*>* imgeFadeAnimList; // 0x358
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* imgContentRootList; // 0x360
		::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicImgComponent*>* displayImgComponentList; // 0x368
		::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicImgComponent*>* imgComponentList; // 0x370
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicDecorateEventBase*>*>* preloadDisplayDecoEventList; // 0x378
		::System::Int32 SplitScreenImgCount; // 0x380
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicImgComponent*>*>* imgComponentCacheDic; // 0x388
		::System::Collections::Generic::List_1<::System::Int32>* imgDisplayIndex; // 0x390
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* imageOriginOffset; // 0x398
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* imgDecorateOriginOffset; // 0x3A0
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* keyScreenOriginOffset; // 0x3A8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* decorateScreenOriginOffset; // 0x3B0
		::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicEventBase*>* activeComicEventList; // 0x3B8
		::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicBubble*>* bubbleList; // 0x3C0
		::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicBubble*>* activeBubbleList; // 0x3C8
		::System::Int32 focusBubbleIdx; // 0x3D0
		::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicKeyEventBase*>* markerKeyEventList; // 0x3D8
		::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicDecorateEventBase*>* markerDecorateEventList; // 0x3E0
		::System::Collections::Generic::List_1<::MoleMole::Comic::RuntimeComicLogicEventBase*>* markerLogicEventList; // 0x3E8
		::System::Collections::Generic::List_1<::MoleMole::UIComicPageController_ComicPageDelayAction*>* delayActionList; // 0x3F0
		::System::Collections::Generic::Queue_1<::MoleMole::UIComicPageController_ComicPageDelayAction*>* delayActonQueue; // 0x3F8
		::System::Single imgOffset; // 0x400
		::UnityEngine::Vector2 rootAnchorPos; // 0x404
		::UnityEngine::Playables::PlayableDirector* director; // 0x410
		::MoleMole::UIComicPageController_ComicUIState uiState; // 0x418
		::MoleMole::UIComicPageController_UIPlayMode uiPlayMode; // 0x419
		::MoleMole::UIComicPageController_FadeInMode fadeInAnimationMode; // 0x41A
		::MoleMole::UIComicPageController_ImgMoveDir currentMoveDir; // 0x41B
		::Class_1_77073945F3D43FF8* enterAnim; // 0x420
		::Class_1_77073945F3D43FF8* quitAnim; // 0x428
		::Class_1_53B1E8B375F98B91* quitWaitAnim; // 0x430
		::UnityEngine::Animation* leftArrowAnimation; // 0x438
		::UnityEngine::Animation* rightArrowAnimation; // 0x440
		::UnityEngine::CanvasGroup* leftArrowCanvasGroup; // 0x448
		::UnityEngine::CanvasGroup* rightArrowCanvasGroup; // 0x450
		::System::Boolean leftArrowDisplayState; // 0x458
		::System::Boolean rightArrowDisplayState; // 0x459
		::System::Boolean arrowHighlight; // 0x45A
		::System::Single pageAnimationTime; // 0x45C
		::System::Boolean allowNextPageClick; // 0x460
		::System::Single timer; // 0x464
		::System::Double localTimer; // 0x468
		::System::Int32 bubbleUsedIndex; // 0x470
		::System::Int32 comicIndex; // 0x474
		::System::Int32 comicProgressIndex; // 0x478
		::System::Boolean moveNewChapter; // 0x47C
		::UnityEngine::RectTransform* selfTransform; // 0x480
		::System::Type* GameObjectType; // 0x488
		::System::Type* ComponentType; // 0x490
		::MoleMole::ComicConfig* playConfig; // 0x498
		::MoleMole::ComicSwitchSceneNarratorInfo* openingSwitchSceneInfo; // 0x4A0
		::System::Collections::Generic::List_1<::MoleMole::Comic::DialogueAudioContent*>* openingSwitchSceneAudioList; // 0x4A8
		::System::Collections::Generic::List_1<::MoleMole::UIComicPageController_audioPlayingState*>* switchScenePlayingAudioList; // 0x4B0
		::System::Collections::Generic::List_1<::MoleMole::ComicPageData*>* pageDataList; // 0x4B8
		::System::Collections::Generic::List_1<::Class_1_6708F667CD105CA8*>* pageTimelineHandlers; // 0x4C0
		::MoleMole::ComicPageData* currPageData; // 0x4C8
		::System::Int64 currPageStartTimeStamp; // 0x4D0
		::MoleMole::UIComicPageController_RecyclePool_1<::MoleMole::ComicPageData*>* pageDataPool; // 0x4D8
		::MoleMole::UIComicPageController_RecyclePool_1<::Class_1_6708F667CD105CA8*>* pageTimelineHandlerPool; // 0x4E0
		::MoleMole::UIComicPageController_RecyclePool_1<::Class_1_C7E6991E78CB1409*>* timelineEventHandlerPool; // 0x4E8
		::MoleMole::UIComicPageController_RecyclePool_1<::Class_2_18AF7D3DA799666F*>* markerEventHandlerPool; // 0x4F0
		::MoleMole::UIComicPageController_RecyclePool_1<::Class_2_471AD45365081843*>* zoneEventHandlerPool; // 0x4F8
		::MoleMole::UIComicPageController_RecyclePool_1<::Class_2_1E72F52D475DC53E*>* pauseWaitHandlerPool; // 0x500
		::MoleMole::UIComicPageController_RecyclePool_1<::Class_2_18AF7D3DA799666F_1*>* pageEndHandlerPool; // 0x508
		::System::Collections::Generic::Dictionary_2<::MoleMole::Comic::ComicBubbleImgType, ::MoleMole::Comic::ComicBubbleImgTypePicConfig*>* bubbleImgResources; // 0x510
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* bubbleImgResourceHandlers; // 0x518
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Object*>* cacheTrackBindInfo; // 0x520
		::System::Boolean comicPlayFinish; // 0x528
		::Class_1_A35D3F2E1A161616* tweenMoveComponent; // 0x530
		::Class_1_A35D3F2E1A161616* tipsTweenMoveComponent; // 0x538
		::Class_1_A35D3F2E1A161616* fadeOutMoveComponent; // 0x540
		::MoleMole::Config::UIComicTweenMoveConfig* tweenMoveConfig; // 0x548
		::System::Single turnPageDuration; // 0x550
		::System::Boolean isTweenMoving; // 0x554
		::System::Single turnPageDeltaTime; // 0x558
		::System::Boolean fadeOutPageAnimationStart; // 0x55C
		::UnityEngine::Vector2 bubbleRange; // 0x560
		::System::Boolean pauseWait; // 0x568
		::System::Double currentStopTime; // 0x570
		::System::Double nextStartTime; // 0x578
		::System::Boolean allowClick; // 0x580
		::UnityEngine::Timeline::ComicEventBase* zoneEvent; // 0x588
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* markerTimeDic; // 0x590
		::System::Boolean isPlayingMarkerEvents; // 0x598
		::System::Boolean isPlayingZoneEvent; // 0x599
		::System::Boolean allowClickInsideMarker; // 0x59A
		::System::Single timerInsideMarker; // 0x59C
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::KeyEventBase*>* markerKeyEventBases; // 0x5A0
		::System::Int32 currKeyEventIndex; // 0x5A8
		::System::Double currKeyEventTimer; // 0x5B0
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::DecorateEventBase*>* markerDecorateEventBases; // 0x5B8
		::System::Int32 currDecorateEventIndex; // 0x5C0
		::System::Double currDecoEventTimer; // 0x5C8
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::LogicEventBase*>* markerLogicEventBases; // 0x5D0
		::System::Int32 currLogicEventIndex; // 0x5D8
		::System::Double currLogicEventTimer; // 0x5E0
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::ComicEventBase*>* markerEventBases; // 0x5E8
		::System::Int32 currMarkerEventIndex; // 0x5F0
		::System::Double currMarkerEventTimer; // 0x5F8
		::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicBubble*>* splitScreenHideBubbleList; // 0x600
		::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicDecorateEventBase*>* splitScreenHideDecoList; // 0x608
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_199*>* splitScreenHideEventList; // 0x610
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_200*>*>* splitScreenMoveEventList; // 0x618
		::System::Collections::Generic::Dictionary_2<::MoleMole::ComicImgPart, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_200*>*>* splitScreenMoveEventDic; // 0x620
		::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicVoiceDecoration*>* voiceDecorationPool; // 0x628
		::System::Int32 voiceDecoUsedIndex; // 0x630
		::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicPictureDecoration*>* pictureDecorationPool; // 0x638
		::System::Int32 pictureDecoUsedIndex; // 0x640
		::UnityEngine::RectTransform* decorationsPoolRoot; // 0x648
		::UnityEngine::RectTransform* bubblesPoolRoot; // 0x650
		::System::Boolean useBlackMaskFadeOut; // 0x658
		::System::Boolean useSpecialBlackMaskFadeOut; // 0x659
		::System::Boolean actFinish; // 0x65A
		::System::Collections::Generic::List_1<::System::UInt32>* currMarkerVoiceIdList; // 0x660
		::System::Collections::Generic::List_1<::MoleMole::UIComicPageController_audioPlayingState*>* currPageAudioStateList; // 0x668
		::MoleMole::UIComicPageController_audioPlayingState* lastPageTransitionAudioState; // 0x670
		::System::Collections::Generic::Queue_1<::MoleMole::UIComicPageController_audioPlayingState*>* audioStatePool; // 0x678
		::System::Boolean blackMaskTransition; // 0x680
		::System::Boolean connectCutScene; // 0x681
		::System::Boolean nextGalgame; // 0x682
		::System::Boolean lastGalgame; // 0x683
		::System::Boolean nextComic; // 0x684
		::System::Boolean lastComic; // 0x685
		::System::Boolean lastCutScene; // 0x686
		::System::Boolean connectExitHollow; // 0x687
		::System::Boolean overrideFadeOutByOutside; // 0x688
		::System::Action* startOutsideFadeOutAction; // 0x690
		::System::Action* executeWhenFadeOutStartAction; // 0x698
		::UIDragComponent* dragListener; // 0x6A0
		::System::Boolean touchComicImgStart; // 0x6A8
		::System::Boolean dragComicImgStart; // 0x6A9
		::UnityEngine::Vector2 dragStartPos; // 0x6AC
		::System::Boolean switchSceneNarratorDisplayState; // 0x6B4
		::UnityEngine::Animation* switchSceneNarratorAnimation; // 0x6B8
		::MoleMole::UIComicPageController_AnimationPlayable* switchSceneNarratorPlayable; // 0x6C0
		::System::Collections::Generic::List_1<::System::String*>* narratorKeyList; // 0x6C8
		::System::Int32 narratorWordPlayIndex; // 0x6D0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* comicTalkRealTextDic; // 0x6D8
		::PopText* narratorPopText; // 0x6E0
		::System::Boolean narratorTextplay; // 0x6E8
		::System::Single narratorTextPlaySpeed; // 0x6EC
		::System::Boolean playedStoryBGM; // 0x6F0
		::System::String* lastBgmState; // 0x6F8
		::System::Boolean blockViewUIEvent; // 0x700
		::UnityEngine::Animation* leftTitleAnim; // 0x708
		::UnityEngine::Animation* rightTitleAnim; // 0x710
		::UnityEngine::RectTransform* leftTitleTran; // 0x718
		::UnityEngine::RectTransform* rightTitleTran; // 0x720
		::System::Int32 _performId_k__BackingField; // 0x728
		::System::String* titleKey; // 0x730
		::System::String* introKey; // 0x738
		::System::Boolean isFirstPageBGMDealed; // 0x740
		::System::String* _customSoundActionSource; // 0x748
		::System::Int32 furthestChapter; // 0x750
		::MoleMole::UserLocalDataItem* curUserLocalData; // 0x758
		::System::Boolean isAutoPlay; // 0x760
		::System::Boolean NeedStartClickCountDown; // 0x761
		::System::Boolean clickCountDownTriggered; // 0x762
		::System::Single autoClickDeltaTime; // 0x764
		::System::Boolean isPlayingMenuAnim; // 0x768
		::System::Boolean isMenuOpened; // 0x769
		::System::Boolean isLongPressingMenuBtn; // 0x76A
		::System::Boolean clickFromLongPress; // 0x76B
		::System::Single _pressedTime; // 0x76C
		::System::Single TOTAL_FILL_TIME; // 0x770
		::System::Single autoBtnOutsideSelectAnimLen; // 0x774
		::System::Boolean _isClosingOutsideAutoBtn; // 0x778
		::System::Boolean isShowingSkipTip; // 0x779
		::System::Boolean picDecoUseBakeSize; // 0x77A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::MoleMole::UIComicPageController_ComicUIState get_UIState()
		{
			return ((::MoleMole::UIComicPageController_ComicUIState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_GET_UISTATE_OFFSET))(this);
		}

		::System::Int32 get_performId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_GET_PERFORMID_OFFSET))(this);
		}

		::System::Void set_performId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SET_PERFORMID_OFFSET))(this, value);
		}

		::System::String* get_soundActionSourceHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
		}

		::Enum_3_24C014472A8CBA5E GetPerformType()
		{
			return ((::Enum_3_24C014472A8CBA5E(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_GETPERFORMTYPE_OFFSET))(this);
		}

		::System::Boolean PerformPlayBlackMaskFadeIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_PERFORMPLAYBLACKMASKFADEIN_OFFSET))(this);
		}

		::System::Void ClearAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_CLEARACTION_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void InitDataPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_INITDATAPOOL_OFFSET))(this);
		}

		::System::Void DestroyDataPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_DESTROYDATAPOOL_OFFSET))(this);
		}

		::System::Void ResurrectTimelineInfo(::MoleMole::ComicConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ComicConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_RESURRECTTIMELINEINFO_OFFSET))(this, config);
		}

		::System::Void SetupPageStartAudio(::UnityEngine::Timeline::Comic::DataSplitter::PageData* pageAudio, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* lastChapterContinuousAudioCountDic, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Single>>*& currPageStartAudioList)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::Comic::DataSplitter::PageData*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Single>>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SETUPPAGESTARTAUDIO_OFFSET))(this, pageAudio, lastChapterContinuousAudioCountDic, currPageStartAudioList);
		}

		::System::Void SetupPageSplitScreenAudio(::UnityEngine::Timeline::Comic::DataSplitter::PageData* pageAudio, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* lastChapterContinuousAudioCountDic, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Single>>*>*& currPageAudioDatasList)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::Comic::DataSplitter::PageData*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Single>>*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SETUPPAGESPLITSCREENAUDIO_OFFSET))(this, pageAudio, lastChapterContinuousAudioCountDic, currPageAudioDatasList);
		}

		::System::Void RecyclePageData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_RECYCLEPAGEDATA_OFFSET))(this);
		}

		::System::Single GetCustomHide3DTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_GETCUSTOMHIDE3DTIME_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateFromTLManager(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_UPDATEFROMTLMANAGER_OFFSET))(this, deltaTime);
		}

		::System::Void InitUIItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_INITUIITEM_OFFSET))(this);
		}

		::System::Void OnClickMenuBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONCLICKMENUBTN_OFFSET))(this);
		}

		::System::Void OnMenuBtnLongPressTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONMENUBTNLONGPRESSTRIGGER_OFFSET))(this);
		}

		::System::Void OnMenuBtnLongPressUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONMENUBTNLONGPRESSUP_OFFSET))(this);
		}

		::System::Void OnClickChangeAutoPlayState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONCLICKCHANGEAUTOPLAYSTATE_OFFSET))(this);
		}

		::System::Void OnClickChangeAutoPlayStateFromOutside()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONCLICKCHANGEAUTOPLAYSTATEFROMOUTSIDE_OFFSET))(this);
		}

		::System::Void SetOutsideBtnState(::System::Boolean isAutoPlay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SETOUTSIDEBTNSTATE_OFFSET))(this, isAutoPlay);
		}

		::System::Void OpenMenu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_OPENMENU_OFFSET))(this);
		}

		::System::Void CloseMenu(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_CLOSEMENU_OFFSET))(this, finishCB);
		}

		::System::Void SetActiveProcessBtns(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SETACTIVEPROCESSBTNS_OFFSET))(this, active);
		}

		::System::String* GetImgComponentStyleKey(::MoleMole::ComicPageData* chapter)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::ComicPageData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_GETIMGCOMPONENTSTYLEKEY_OFFSET))(this, chapter);
		}

		::System::Void CreateImgGroupByConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_CREATEIMGGROUPBYCONFIG_OFFSET))(this);
		}

		::System::Void InitPreloadEventList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_INITPRELOADEVENTLIST_OFFSET))(this);
		}

		::System::Void InitFrontNEndDecorateImg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_INITFRONTNENDDECORATEIMG_OFFSET))(this);
		}

		::System::Boolean HaveSwitchScenneNarrator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_HAVESWITCHSCENNENARRATOR_OFFSET))(this);
		}

		::System::Void BuildSwitchNarratorInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_BUILDSWITCHNARRATORINFO_OFFSET))(this);
		}

		::System::Void InitSwitchSceneNarratorItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_INITSWITCHSCENENARRATORITEM_OFFSET))(this);
		}

		::System::Void FadeInSwitchSceneNarrator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_FADEINSWITCHSCENENARRATOR_OFFSET))(this);
		}

		::System::Void StartSwitchSceneNarrator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_STARTSWITCHSCENENARRATOR_OFFSET))(this);
		}

		::System::Void ShowNarratorText(::System::String* textKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SHOWNARRATORTEXT_OFFSET))(this, textKey);
		}

		::System::Void OnClickSwitchSceneNarrator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONCLICKSWITCHSCENENARRATOR_OFFSET))(this);
		}

		::System::Void OnSwitchSceneNarratorPlayFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONSWITCHSCENENARRATORPLAYFINISH_OFFSET))(this);
		}

		::System::Void FadeOutSwitchSceneNarrator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_FADEOUTSWITCHSCENENARRATOR_OFFSET))(this);
		}

		::System::Void UpdateNarratorAnimation(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_UPDATENARRATORANIMATION_OFFSET))(this, deltaTime);
		}

		::System::Void InitDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_INITDRAG_OFFSET))(this);
		}

		::System::Void DragImgBegin(::UnityEngine::Vector2 localPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_DRAGIMGBEGIN_OFFSET))(this, localPos);
		}

		::System::Void DragImgEnd(::UnityEngine::Vector2 localPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_DRAGIMGEND_OFFSET))(this, localPos);
		}

		::System::Void OnTouchImgStart(::UnityEngine::Vector2 pointLocalPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONTOUCHIMGSTART_OFFSET))(this, pointLocalPos);
		}

		::System::Void OnTouchImgEnd(::UnityEngine::Vector2 pointLocalPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONTOUCHIMGEND_OFFSET))(this, pointLocalPos);
		}

		::System::Void ProcessDrag(::UnityEngine::Vector2 dirVector)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_PROCESSDRAG_OFFSET))(this, dirVector);
		}

		::System::Void DragMovePage(::MoleMole::UIComicPageController_ImgMoveDir dir)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIComicPageController_ImgMoveDir))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_DRAGMOVEPAGE_OFFSET))(this, dir);
		}

		::System::Void InitArrow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_INITARROW_OFFSET))(this);
		}

		::System::Void SetArrowHighlight(::System::Boolean highLight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SETARROWHIGHLIGHT_OFFSET))(this, highLight);
		}

		::System::Void SetLeftArrowDisplay(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SETLEFTARROWDISPLAY_OFFSET))(this, state);
		}

		::System::Void SetRightArrowDisplay(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SETRIGHTARROWDISPLAY_OFFSET))(this, state);
		}

		::System::Void SetArrowState(::System::Int32 chapterIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SETARROWSTATE_OFFSET))(this, chapterIndex);
		}

		::System::Void InitMenuSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_INITMENUSETTING_OFFSET))(this);
		}

		::System::Void InitBubbleRange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_INITBUBBLERANGE_OFFSET))(this);
		}

		::System::Void InitDelayActionParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_INITDELAYACTIONPARAM_OFFSET))(this);
		}

		::System::Void InitEnterAndQuitAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_INITENTERANDQUITANIM_OFFSET))(this);
		}

		::System::Void PlayEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_PLAYENTER_OFFSET))(this);
		}

		::System::Void SetDecorateImgAndShow(::System::Int32 firstDisplayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SETDECORATEIMGANDSHOW_OFFSET))(this, firstDisplayIndex);
		}

		::System::Void PlayNormalFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_PLAYNORMALFADEIN_OFFSET))(this);
		}

		::System::Void PlaySpecialBlackMaskFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_PLAYSPECIALBLACKMASKFADEIN_OFFSET))(this);
		}

		::System::Void PlayBlackMaskFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_PLAYBLACKMASKFADEIN_OFFSET))(this);
		}

		::System::Void UpdateFadeIn(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_UPDATEFADEIN_OFFSET))(this, deltaTime);
		}

		::System::Void OnPlayEnterFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONPLAYENTERFINISH_OFFSET))(this);
		}

		::System::Void FinishFadeOutImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_FINISHFADEOUTIMMEDIATE_OFFSET))(this);
		}

		::System::Void UpdateFadeOut(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_UPDATEFADEOUT_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateDelayAction(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_UPDATEDELAYACTION_OFFSET))(this, deltaTime);
		}

		::MoleMole::UIComicPageController_ComicPageDelayAction* PopDelayAction()
		{
			return ((::MoleMole::UIComicPageController_ComicPageDelayAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_POPDELAYACTION_OFFSET))(this);
		}

		::System::Void CollectDelayAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_COLLECTDELAYACTION_OFFSET))(this);
		}

		::System::Void PlayExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_PLAYEXIT_OFFSET))(this);
		}

		::System::Void OnExitPlayingNextGalgame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONEXITPLAYINGNEXTGALGAME_OFFSET))(this);
		}

		::System::Void OnExitPlayFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONEXITPLAYFINISH_OFFSET))(this);
		}

		::System::Void ClearAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_CLEARASSET_OFFSET))(this);
		}

		::System::Void OnClosePerformPageFromOutside(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONCLOSEPERFORMPAGEFROMOUTSIDE_OFFSET))(this, args);
		}

		::System::Void UpdateActiveEvents(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_UPDATEACTIVEEVENTS_OFFSET))(this, deltaTime);
		}

		::System::Void UpdatePlay(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_UPDATEPLAY_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateTurnPage(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_UPDATETURNPAGE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateSwitchScenePlay(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_UPDATESWITCHSCENEPLAY_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateMenuBtnProgress(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_UPDATEMENUBTNPROGRESS_OFFSET))(this, deltaTime);
		}

		::System::Void OnApplicationFocus(::System::Boolean hasFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONAPPLICATIONFOCUS_OFFSET))(this, hasFocus);
		}

		::System::Single SetPressMenuBtnTime(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SETPRESSMENUBTNTIME_OFFSET))(this, time);
		}

		::System::Void ResetMarkerEventsParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_RESETMARKEREVENTSPARAMS_OFFSET))(this);
		}

		::System::Boolean CheckEventsInMarkerFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_CHECKEVENTSINMARKERFINISH_OFFSET))(this);
		}

		::System::Boolean CheckAllAudioFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_CHECKALLAUDIOFINISH_OFFSET))(this);
		}

		::System::Boolean CheckKeyEventsInMarkerFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_CHECKKEYEVENTSINMARKERFINISH_OFFSET))(this);
		}

		::System::Boolean CheckDecoEventsInMarkerFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_CHECKDECOEVENTSINMARKERFINISH_OFFSET))(this);
		}

		::System::Boolean CheckLogicEventsInMarkerFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_CHECKLOGICEVENTSINMARKERFINISH_OFFSET))(this);
		}

		::System::Void ResetUIPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_RESETUIPOS_OFFSET))(this);
		}

		::System::Void ResetUIDisplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_RESETUIDISPLAY_OFFSET))(this);
		}

		::System::Void SetDisplayImage(::System::Int32 displayIndex, ::System::Int32 chapterIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SETDISPLAYIMAGE_OFFSET))(this, displayIndex, chapterIndex);
		}

		::System::Void SetPreloadDecoration(::System::Int32 currDisplayIndex, ::System::Int32 currChapterIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SETPRELOADDECORATION_OFFSET))(this, currDisplayIndex, currChapterIndex);
		}

		::System::Void PlayImgFade(::System::Boolean isFadeIn, ::System::Int32 index, ::System::Boolean immediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_PLAYIMGFADE_OFFSET))(this, isFadeIn, index, immediately);
		}

		::System::Void OnMoveNextStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONMOVENEXTSTOP_OFFSET))(this);
		}

		::System::Void ShiftImgPosition(::MoleMole::UIComicPageController_ImgMoveDir dir)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIComicPageController_ImgMoveDir))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SHIFTIMGPOSITION_OFFSET))(this, dir);
		}

		::System::Boolean IsLastChapter(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ISLASTCHAPTER_OFFSET))(this, index);
		}

		::System::Void EnableNextPageClick(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ENABLENEXTPAGECLICK_OFFSET))(this, state);
		}

		::System::Void OnClickViewBtn(::System::Boolean isAutoClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONCLICKVIEWBTN_OFFSET))(this, isAutoClick);
		}

		::System::Void OnClickNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONCLICKNEXT_OFFSET))(this);
		}

		::System::Void SetAutoPlayToLocalConfig(::System::Boolean activateAutoPlay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SETAUTOPLAYTOLOCALCONFIG_OFFSET))(this, activateAutoPlay);
		}

		::System::Void SetupAutoPlayAnim(::UnityEngine::Animation* animation, ::System::String* clip, ::System::Boolean activateAutoPlay)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SETUPAUTOPLAYANIM_OFFSET))(this, animation, clip, activateAutoPlay);
		}

		::System::Void OnClickMenuBackgroundBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONCLICKMENUBACKGROUNDBTN_OFFSET))(this);
		}

		::System::Void OnClickSkipUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONCLICKSKIPUI_OFFSET))(this);
		}

		::System::Void ShowSkipTip(::System::Action* OnCancel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SHOWSKIPTIP_OFFSET))(this, OnCancel);
		}

		::System::Void DoSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_DOSKIP_OFFSET))(this);
		}

		::System::Void FadeOutMoveMent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_FADEOUTMOVEMENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* StartWaitPlayBGM(::System::Int32 index, ::System::Boolean wait)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_STARTWAITPLAYBGM_OFFSET))(this, index, wait);
		}

		::System::Void StartMove(::MoleMole::UIComicPageController_ImgMoveDir dir)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIComicPageController_ImgMoveDir))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_STARTMOVE_OFFSET))(this, dir);
		}

		::System::Void PlayChapterStartBMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_PLAYCHAPTERSTARTBMG_OFFSET))(this);
		}

		::System::Void PlayCurPageBgm(::System::Int32 chapterIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_PLAYCURPAGEBGM_OFFSET))(this, chapterIndex);
		}

		::System::Void ChangeStoryBGM(::System::String* bgmState)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_CHANGESTORYBGM_OFFSET))(this, bgmState);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_STARTPLAY_OFFSET))(this);
		}

		::System::Void PlayCurrentChapter(::System::Boolean isNewChapter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_PLAYCURRENTCHAPTER_OFFSET))(this, isNewChapter);
		}

		::System::Void PlayChapter(::System::Boolean isNewChapter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_PLAYCHAPTER_OFFSET))(this, isNewChapter);
		}

		::System::Void OnPlayComicFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONPLAYCOMICFINISH_OFFSET))(this);
		}

		::System::Void BindTimeLineData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_BINDTIMELINEDATA_OFFSET))(this);
		}

		::System::Void StopCurVoice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_STOPCURVOICE_OFFSET))(this);
		}

		::System::Void TriggerHideEventsWhenSplitScreen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_TRIGGERHIDEEVENTSWHENSPLITSCREEN_OFFSET))(this);
		}

		::System::Void TriggerMoveEventsWhenSplitScreen(::System::String* styleConfigKey, ::System::Int32 animIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_TRIGGERMOVEEVENTSWHENSPLITSCREEN_OFFSET))(this, styleConfigKey, animIndex);
		}

		::MoleMole::Comic::MonoComicBubble* ShowBubble(::UnityEngine::Timeline::BubbleEvent* bubbleEvent)
		{
			return ((::MoleMole::Comic::MonoComicBubble*(*)(::PVOID, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SHOWBUBBLE_OFFSET))(this, bubbleEvent);
		}

		::System::Void SetupBubbleAudios(::System::String* _guid, ::MoleMole::Comic::MonoComicBubble* bubble)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Comic::MonoComicBubble*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SETUPBUBBLEAUDIOS_OFFSET))(this, _guid, bubble);
		}

		::System::Void PreCreateBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_PRECREATEBUBBLE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GetCurrentBubbleRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_GETCURRENTBUBBLEROOT_OFFSET))(this);
		}

		::MoleMole::Comic::MonoComicBubble* CreateBubble()
		{
			return ((::MoleMole::Comic::MonoComicBubble*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_CREATEBUBBLE_OFFSET))(this);
		}

		::System::Void CollectAllBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_COLLECTALLBUBBLE_OFFSET))(this);
		}

		::MoleMole::Comic::MonoComicBubble* PopBubble()
		{
			return ((::MoleMole::Comic::MonoComicBubble*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_POPBUBBLE_OFFSET))(this);
		}

		::System::Void ReleaseBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_RELEASEBUBBLE_OFFSET))(this);
		}

		::System::Void AddEventToMoveDictionary(::MoleMole::Comic::MonoComicEventBase* comicEvent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Comic::MonoComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ADDEVENTTOMOVEDICTIONARY_OFFSET))(this, comicEvent);
		}

		::MoleMole::Comic::MonoComicImgComponent* ShowSplitScreenPerformance(::UnityEngine::Timeline::SplitScreenEvent* splitScreenEventBase)
		{
			return ((::MoleMole::Comic::MonoComicImgComponent*(*)(::PVOID, ::UnityEngine::Timeline::SplitScreenEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SHOWSPLITSCREENPERFORMANCE_OFFSET))(this, splitScreenEventBase);
		}

		::System::Void OnNotifyPageEnd(::UnityEngine::Timeline::INapNotifyData* info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::INapNotifyData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONNOTIFYPAGEEND_OFFSET))(this, info);
		}

		::System::Void OnNotifyPauseWaitInfo(::UnityEngine::Timeline::INapNotifyData* info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::INapNotifyData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONNOTIFYPAUSEWAITINFO_OFFSET))(this, info);
		}

		::System::Void OnNotifyZoneInfo(::UnityEngine::Timeline::INapNotifyData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::INapNotifyData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONNOTIFYZONEINFO_OFFSET))(this, data);
		}

		::System::Void OnNotifyMarkerInfo(::UnityEngine::Timeline::INapNotifyData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::INapNotifyData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONNOTIFYMARKERINFO_OFFSET))(this, data);
		}

		::System::Void JumpThroughMarkerEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_JUMPTHROUGHMARKEREVENTS_OFFSET))(this);
		}

		::System::Void OnFinishPlayingZone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONFINISHPLAYINGZONE_OFFSET))(this);
		}

		::System::Boolean IsPlayingEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ISPLAYINGEVENT_OFFSET))(this);
		}

		::System::Void ResetEventPlayingState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_RESETEVENTPLAYINGSTATE_OFFSET))(this);
		}

		::System::Void PreCreateEventObjectPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_PRECREATEEVENTOBJECTPOOL_OFFSET))(this);
		}

		::System::Void TickEventDelay(::UnityEngine::Timeline::ComicEventBase* currEvent, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_TICKEVENTDELAY_OFFSET))(this, currEvent, deltaTime);
		}

		::MoleMole::Comic::RuntimeComicLogicEventBase* TriggerLogicEvent(::UnityEngine::Timeline::LogicEventBase* eventBase)
		{
			return ((::MoleMole::Comic::RuntimeComicLogicEventBase*(*)(::PVOID, ::UnityEngine::Timeline::LogicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_TRIGGERLOGICEVENT_OFFSET))(this, eventBase);
		}

		::MoleMole::Comic::RuntimeComicClearEvent* TriggerClearEvent(::UnityEngine::Timeline::ComicClearEvent* clearEventBase)
		{
			return ((::MoleMole::Comic::RuntimeComicClearEvent*(*)(::PVOID, ::UnityEngine::Timeline::ComicClearEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_TRIGGERCLEAREVENT_OFFSET))(this, clearEventBase);
		}

		::MoleMole::Comic::MonoComicDecorateEventBase* TriggerDecorateEvent(::UnityEngine::Timeline::DecorateEventBase* eventBase, ::System::Int32 currDisplayIndex)
		{
			return ((::MoleMole::Comic::MonoComicDecorateEventBase*(*)(::PVOID, ::UnityEngine::Timeline::DecorateEventBase*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_TRIGGERDECORATEEVENT_OFFSET))(this, eventBase, currDisplayIndex);
		}

		::System::Void PreCreateVoiceDecoration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_PRECREATEVOICEDECORATION_OFFSET))(this);
		}

		::MoleMole::Comic::MonoComicVoiceDecoration* CreateVoiceDecoration()
		{
			return ((::MoleMole::Comic::MonoComicVoiceDecoration*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_CREATEVOICEDECORATION_OFFSET))(this);
		}

		::MoleMole::Comic::MonoComicVoiceDecoration* ShowVoiceDecoration(::UnityEngine::Timeline::VoiceDecorateEvent* voiceEvent, ::System::Int32 currDisplayIndex)
		{
			return ((::MoleMole::Comic::MonoComicVoiceDecoration*(*)(::PVOID, ::UnityEngine::Timeline::VoiceDecorateEvent*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SHOWVOICEDECORATION_OFFSET))(this, voiceEvent, currDisplayIndex);
		}

		::MoleMole::Comic::MonoComicVoiceDecoration* PopVoiceDecoration()
		{
			return ((::MoleMole::Comic::MonoComicVoiceDecoration*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_POPVOICEDECORATION_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GetDecorationRootByImageIdx(::System::Int32 index)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_GETDECORATIONROOTBYIMAGEIDX_OFFSET))(this, index);
		}

		::System::Void PreCreatePictureDecoration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_PRECREATEPICTUREDECORATION_OFFSET))(this);
		}

		::MoleMole::Comic::MonoComicPictureDecoration* CreatePictureDecoration()
		{
			return ((::MoleMole::Comic::MonoComicPictureDecoration*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_CREATEPICTUREDECORATION_OFFSET))(this);
		}

		::MoleMole::Comic::MonoComicPictureDecoration* ShowPictureDecoration(::UnityEngine::Timeline::PictureDecorateEvent* picEvent, ::System::Int32 currDisplayIndex)
		{
			return ((::MoleMole::Comic::MonoComicPictureDecoration*(*)(::PVOID, ::UnityEngine::Timeline::PictureDecorateEvent*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SHOWPICTUREDECORATION_OFFSET))(this, picEvent, currDisplayIndex);
		}

		::MoleMole::Comic::MonoComicPictureDecoration* PopPictureDecoration()
		{
			return ((::MoleMole::Comic::MonoComicPictureDecoration*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_POPPICTUREDECORATION_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GetImgDecorationRootByIndex(::UnityEngine::Timeline::PictureDecorateEvent* picEvent, ::System::Int32 index)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::UnityEngine::Timeline::PictureDecorateEvent*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_GETIMGDECORATIONROOTBYINDEX_OFFSET))(this, picEvent, index);
		}

		::MoleMole::Comic::MonoComicBGExchangeDecoration* ShowExchangeImg(::UnityEngine::Timeline::ImageExchangeEvent* imgExchangeEvent)
		{
			return ((::MoleMole::Comic::MonoComicBGExchangeDecoration*(*)(::PVOID, ::UnityEngine::Timeline::ImageExchangeEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SHOWEXCHANGEIMG_OFFSET))(this, imgExchangeEvent);
		}

		::MoleMole::Comic::MonoComicBGExchangeDecoration* ShowExchangeImgZoneVer(::UnityEngine::Timeline::ImageExchangeEventZoneVer* imgExchangeEvent)
		{
			return ((::MoleMole::Comic::MonoComicBGExchangeDecoration*(*)(::PVOID, ::UnityEngine::Timeline::ImageExchangeEventZoneVer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SHOWEXCHANGEIMGZONEVER_OFFSET))(this, imgExchangeEvent);
		}

		::MoleMole::Comic::RuntimeComicShakeEvent* TriggerBGShake(::UnityEngine::Timeline::ComicShakeEvent* shakeEvent)
		{
			return ((::MoleMole::Comic::RuntimeComicShakeEvent*(*)(::PVOID, ::UnityEngine::Timeline::ComicShakeEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_TRIGGERBGSHAKE_OFFSET))(this, shakeEvent);
		}

		::System::Void AddToActiveEventList(::MoleMole::Comic::MonoComicEventBase* activeEvent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Comic::MonoComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ADDTOACTIVEEVENTLIST_OFFSET))(this, activeEvent);
		}

		::System::Void AddToCurrentKeyEventList(::MoleMole::Comic::MonoComicKeyEventBase* keyEvent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Comic::MonoComicKeyEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ADDTOCURRENTKEYEVENTLIST_OFFSET))(this, keyEvent);
		}

		::System::Void AddToCurrentDecorateEventList(::MoleMole::Comic::MonoComicDecorateEventBase* decorateEvent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Comic::MonoComicDecorateEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ADDTOCURRENTDECORATEEVENTLIST_OFFSET))(this, decorateEvent);
		}

		::System::Void AddToCurrentLogicEventList(::MoleMole::Comic::RuntimeComicLogicEventBase* logicEvent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Comic::RuntimeComicLogicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ADDTOCURRENTLOGICEVENTLIST_OFFSET))(this, logicEvent);
		}

		::System::Void HideEvent(::Class_0_16E4307DCC419505_199* hideEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_199*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_HIDEEVENT_OFFSET))(this, hideEvent);
		}

		::System::Void AddEventToHideList(::Class_0_16E4307DCC419505_199* hideEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_199*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ADDEVENTTOHIDELIST_OFFSET))(this, hideEvent);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_199*>* GetHideEventsWhenSplitScreen()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_199*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_GETHIDEEVENTSWHENSPLITSCREEN_OFFSET))(this);
		}

		::System::Void CollectAllKeyEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_COLLECTALLKEYEVENTS_OFFSET))(this);
		}

		::System::Void CollectAllDecorateEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_COLLECTALLDECORATEEVENTS_OFFSET))(this);
		}

		::System::Void CollectAllLogicEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_COLLECTALLLOGICEVENTS_OFFSET))(this);
		}

		::System::Void CollectAllHideAndMoveEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_COLLECTALLHIDEANDMOVEEVENTS_OFFSET))(this);
		}

		::System::Void CollectAllActiveEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_COLLECTALLACTIVEEVENTS_OFFSET))(this);
		}

		::System::Boolean OnPlayEventAudioFinish(::System::UInt32 pendingId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONPLAYEVENTAUDIOFINISH_OFFSET))(this, pendingId);
		}

		::System::Void OnPlayBubbleAudioForDebug(::System::UInt32 pendingId, ::System::String* audioKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONPLAYBUBBLEAUDIOFORDEBUG_OFFSET))(this, pendingId, audioKey);
		}

		::System::Void StopPageAudios()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_STOPPAGEAUDIOS_OFFSET))(this);
		}

		::System::Void StopSwitchSceneAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_STOPSWITCHSCENEAUDIO_OFFSET))(this);
		}

		::System::Void StopCurrentPageAudios(::System::Boolean forceStopAll)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_STOPCURRENTPAGEAUDIOS_OFFSET))(this, forceStopAll);
		}

		::System::Void StopLastPageTransitionAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_STOPLASTPAGETRANSITIONAUDIO_OFFSET))(this);
		}

		::System::Void SetAllAudioStateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SETALLAUDIOSTATEFINISH_OFFSET))(this);
		}

		::System::Void InitAudioStatePool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_INITAUDIOSTATEPOOL_OFFSET))(this);
		}

		::MoleMole::UIComicPageController_audioPlayingState* GetAudioStateFromPool()
		{
			return ((::MoleMole::UIComicPageController_audioPlayingState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_GETAUDIOSTATEFROMPOOL_OFFSET))(this);
		}

		::System::Void RecycleAudioStateToPool(::MoleMole::UIComicPageController_audioPlayingState* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIComicPageController_audioPlayingState*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_RECYCLEAUDIOSTATETOPOOL_OFFSET))(this, item);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void MovePageWithDir(::MoleMole::UIComicPageController_ImgMoveDir dir)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIComicPageController_ImgMoveDir))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_MOVEPAGEWITHDIR_OFFSET))(this, dir);
		}

		::System::Boolean SwitchBubbleFocus(::System::Boolean switchToNext)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SWITCHBUBBLEFOCUS_OFFSET))(this, switchToNext);
		}

		::System::Void SwitchBubbleFocusAnim(::MoleMole::Comic::MonoComicBubble* bubble)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Comic::MonoComicBubble*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_SWITCHBUBBLEFOCUSANIM_OFFSET))(this, bubble);
		}

		::System::Boolean CheckCanTriggerComicNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_CHECKCANTRIGGERCOMICNEXT_OFFSET))(this);
		}

		::MoleMole::Comic::MonoComicImgComponent* PopComicImgComponent(::System::String* prefabPath)
		{
			return ((::MoleMole::Comic::MonoComicImgComponent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_POPCOMICIMGCOMPONENT_OFFSET))(this, prefabPath);
		}

		::System::Void CollectComicImgContent(::MoleMole::Comic::MonoComicImgComponent* imgComponnet)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Comic::MonoComicImgComponent*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_COLLECTCOMICIMGCONTENT_OFFSET))(this, imgComponnet);
		}

		::System::Void _OnClickChangeAutoPlayStateFromOutside_b__251_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER__ONCLICKCHANGEAUTOPLAYSTATEFROMOUTSIDE_B__251_0_OFFSET))(this);
		}

		::System::Void _OpenMenu_b__253_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER__OPENMENU_B__253_0_OFFSET))(this);
		}

		::System::Void _ShowNarratorText_b__265_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER__SHOWNARRATORTEXT_B__265_0_OFFSET))(this);
		}

		::System::Void _FadeOutSwitchSceneNarrator_b__268_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER__FADEOUTSWITCHSCENENARRATOR_B__268_0_OFFSET))(this);
		}

		::System::Void _PlayNormalFadeIn_b__288_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER__PLAYNORMALFADEIN_B__288_0_OFFSET))(this);
		}

		::System::Void _UpdateFadeOut_b__294_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER__UPDATEFADEOUT_B__294_0_OFFSET))(this);
		}

		::System::Void _OnExitPlayFinish_b__300_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER__ONEXITPLAYFINISH_B__300_0_OFFSET))(this);
		}

		::System::Void _UpdateMenuBtnProgress_b__307_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER__UPDATEMENUBTNPROGRESS_B__307_0_OFFSET))(this);
		}

		::System::Void _OnClickSkipUI_b__330_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER__ONCLICKSKIPUI_B__330_0_OFFSET))(this);
		}

		::System::Void _ShowSkipTip_b__331_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER__SHOWSKIPTIP_B__331_0_OFFSET))(this);
		}

		::System::Single __base_GetCustomHide3DTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___BASE_GETCUSTOMHIDE3DTIME_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
