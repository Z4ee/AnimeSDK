#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/Client/AudioListenerMode.h"
#include "unitysdk/RPG/Client/AudioListenerType.h"
#include "unitysdk/RPG/Client/AudioManager_AudioDownloadState.h"
#include "unitysdk/RPG/Client/AudioManager_InnerState.h"
#include "unitysdk/RPG/Client/AudioSettings_SpeakerModeType.h"
#include "unitysdk/RPG/Client/MusicVisualizeDataSourceType.h"
#include "unitysdk/RPG/Client/UIButtonSoundType.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterVOType.h"
#include "unitysdk/RPG/GameCore/AudioGameState.h"
#include "unitysdk/RPG/GameCore/SFXPlayType.h"
#include "unitysdk/RPG/GameCore/VoicePlayType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkCallbackInfo;
class AkCallbackManager_EventCallback;
class AkExternalSourceInfoArray;
class AkMarkerCallbackInfo;
class Class_0_16E4307DCC419505_587;
class Class_1_1573D818832F8AAB;
class Class_1_239D87D7563FF971;
class Class_1_23EFA84ACA0E11E6;
class Class_1_253F4BEA35E6A1BB;
class Class_1_547AFD87644505F0;
class Class_1_58B161F85B3D684E;
class Class_1_6C462A2E579389F9;
class Class_1_9CF7395E35AA1345;
class Class_1_E6E7D50288DDC3E7;
class Class_1_FA97E57CAD047BA5;
class Class_2_BF47C01E9CFEA39C;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AudioLanguageItem; }
namespace RPG::Client { class AudioManager_AudioListenerInfo; }
namespace RPG::Client { class AudioManager_ScopeLimitInstance; }
namespace RPG::Client { class TeamData; }
namespace RPG::GameCore { class AudioConfig; }
namespace RPG::GameCore { class JukeBoxMusicTimesConfig; }
namespace RPG::GameCore { class PropSoundConfigOverrideConfig; }
namespace RPG::GameCore { class PropSoundOverrideConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class CacheLinkedList_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AUDIOMANAGER_ADDSCOPELIMITEDTARGET_OFFSET UNITYSDK_OFFSET(0xB343080)
#define RPG_CLIENT_AUDIOMANAGER_ADDVOICETARGET_OFFSET UNITYSDK_OFFSET(0xB348760)
#define RPG_CLIENT_AUDIOMANAGER_APPLYAUDIO_OFFSET UNITYSDK_OFFSET(0xB3536E0)
#define RPG_CLIENT_AUDIOMANAGER_ASYNCLOADINITGAMEPCKS_OFFSET UNITYSDK_OFFSET(0xB3473D0)
#define RPG_CLIENT_AUDIOMANAGER_ASYNCUPDATELANGSIZE_OFFSET UNITYSDK_OFFSET(0xB352420)
#define RPG_CLIENT_AUDIOMANAGER_BACKTOPREVIOUSBGMGAMESTATE_OFFSET UNITYSDK_OFFSET(0xB34B6E0)
#define RPG_CLIENT_AUDIOMANAGER_BEFORERESTART_OFFSET UNITYSDK_OFFSET(0xB344470)
#define RPG_CLIENT_AUDIOMANAGER_BREAKEVENT_OFFSET UNITYSDK_OFFSET(0xB34BBC0)
#define RPG_CLIENT_AUDIOMANAGER_CANCELDOWNLOADAUDIO_OFFSET UNITYSDK_OFFSET(0xB353560)
#define RPG_CLIENT_AUDIOMANAGER_CANDELETE_OFFSET UNITYSDK_OFFSET(0xB351340)
#define RPG_CLIENT_AUDIOMANAGER_CANPOSTEVENTINCD_OFFSET UNITYSDK_OFFSET(0xB34DBF0)
#define RPG_CLIENT_AUDIOMANAGER_CANSWITCHAUDIO_OFFSET UNITYSDK_OFFSET(0xB3511F0)
#define RPG_CLIENT_AUDIOMANAGER_CHECKEMITTERHASOCCLUSION_OFFSET UNITYSDK_OFFSET(0xB34D1F0)
#define RPG_CLIENT_AUDIOMANAGER_CLEARBGMGAMESTATE_OFFSET UNITYSDK_OFFSET(0xB34B850)
#define RPG_CLIENT_AUDIOMANAGER_DELETEAUDIOPACK_OFFSET UNITYSDK_OFFSET(0xB353FE0)
#define RPG_CLIENT_AUDIOMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB343BA0)
#define RPG_CLIENT_AUDIOMANAGER_GAMEOBJECTSOUNDFADE_OFFSET UNITYSDK_OFFSET(0xB34C340)
#define RPG_CLIENT_AUDIOMANAGER_GETAUDIOITEMBYAUDIOKEY_OFFSET UNITYSDK_OFFSET(0xB353A90)
#define RPG_CLIENT_AUDIOMANAGER_GETAUDIOSIZE_OFFSET UNITYSDK_OFFSET(0xB353900)
#define RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADEDAUDIOCOUNT_OFFSET UNITYSDK_OFFSET(0xB353A40)
#define RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADEDAUDIOITEMS_OFFSET UNITYSDK_OFFSET(0xB353B70)
#define RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADSTAGE_OFFSET UNITYSDK_OFFSET(0xB353690)
#define RPG_CLIENT_AUDIOMANAGER_GETEVENTIDLISTBYEVENTNAME_OFFSET UNITYSDK_OFFSET(0xB34C450)
#define RPG_CLIENT_AUDIOMANAGER_GETEXTERNALSOURCEINFO_OFFSET UNITYSDK_OFFSET(0xB347A80)
#define RPG_CLIENT_AUDIOMANAGER_GETISMUTEONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xB34F1F0)
#define RPG_CLIENT_AUDIOMANAGER_GETJUKEBOXMUSICTIME_OFFSET UNITYSDK_OFFSET(0xB34D840)
#define RPG_CLIENT_AUDIOMANAGER_GETMUSICVISUALIZEDATA_OFFSET UNITYSDK_OFFSET(0xB342C10)
#define RPG_CLIENT_AUDIOMANAGER_GETPARTIALDOWNLOADEDAUDIOITEMS_OFFSET UNITYSDK_OFFSET(0xB353DA0)
#define RPG_CLIENT_AUDIOMANAGER_GETPCKMGR_OFFSET UNITYSDK_OFFSET(0xB34F720)
#define RPG_CLIENT_AUDIOMANAGER_GETPLAYINGEVENTPOSITIONBYEVENTNAME_OFFSET UNITYSDK_OFFSET(0xB34C510)
#define RPG_CLIENT_AUDIOMANAGER_GETPLAYINGEVENTPOSITION_OFFSET UNITYSDK_OFFSET(0xB34C630)
#define RPG_CLIENT_AUDIOMANAGER_GETPLAYINGINFOBYPLAYINGID_OFFSET UNITYSDK_OFFSET(0xB34C4B0)
#define RPG_CLIENT_AUDIOMANAGER_GETPROPSOUNDOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0xB34F3E0)
#define RPG_CLIENT_AUDIOMANAGER_GETUIBUTTONSOUNDEVENTBYTYPE_OFFSET UNITYSDK_OFFSET(0xB34CCF0)
#define RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMFLOORGROUP_OFFSET UNITYSDK_OFFSET(0xB3511B0)
#define RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMFLOORSTATE_OFFSET UNITYSDK_OFFSET(0xB3511D0)
#define RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMWORLDSTATE_OFFSET UNITYSDK_OFFSET(0xB351190)
#define RPG_CLIENT_AUDIOMANAGER_GET_AUDIOPLAYINGCACHEDATA_OFFSET UNITYSDK_OFFSET(0xB351170)
#define RPG_CLIENT_AUDIOMANAGER_GET_BGMEVENTID_OFFSET UNITYSDK_OFFSET(0xB351080)
#define RPG_CLIENT_AUDIOMANAGER_GET_BGMGAMEMODE_OFFSET UNITYSDK_OFFSET(0xB3510A0)
#define RPG_CLIENT_AUDIOMANAGER_GET_BGMVOLUME_OFFSET UNITYSDK_OFFSET(0xB351130)
#define RPG_CLIENT_AUDIOMANAGER_GET_CANSETMUTEONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xB344140)
#define RPG_CLIENT_AUDIOMANAGER_GET_DEFAULTEMITTEROBJECT_OFFSET UNITYSDK_OFFSET(0xB34B400)
#define RPG_CLIENT_AUDIOMANAGER_GET_ISBGMMUTE_OFFSET UNITYSDK_OFFSET(0xB3510C0)
#define RPG_CLIENT_AUDIOMANAGER_GET_ISSFXMUTE_OFFSET UNITYSDK_OFFSET(0xB3510E0)
#define RPG_CLIENT_AUDIOMANAGER_GET_ISVOMUTE_OFFSET UNITYSDK_OFFSET(0xB351100)
#define RPG_CLIENT_AUDIOMANAGER_GET_LISTENEROBJECT_OFFSET UNITYSDK_OFFSET(0xB351070)
#define RPG_CLIENT_AUDIOMANAGER_GET_MASTERVOLUME_OFFSET UNITYSDK_OFFSET(0xB351120)
#define RPG_CLIENT_AUDIOMANAGER_GET_SFXVOLUME_OFFSET UNITYSDK_OFFSET(0xB351140)
#define RPG_CLIENT_AUDIOMANAGER_GET_SPEAKERMODE_OFFSET UNITYSDK_OFFSET(0xB351160)
#define RPG_CLIENT_AUDIOMANAGER_GET_USEPCKMODE_OFFSET UNITYSDK_OFFSET(0xB351180)
#define RPG_CLIENT_AUDIOMANAGER_GET_VOVOLUME_OFFSET UNITYSDK_OFFSET(0xB351150)
#define RPG_CLIENT_AUDIOMANAGER_INITGAMEPCKSDEV_OFFSET UNITYSDK_OFFSET(0xB346EB0)
#define RPG_CLIENT_AUDIOMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xB3449E0)
#define RPG_CLIENT_AUDIOMANAGER_ISAUDIODOWNLOADED_OFFSET UNITYSDK_OFFSET(0xB34CD60)
#define RPG_CLIENT_AUDIOMANAGER_ISAUDIOPARTIALDOWNLOADED_OFFSET UNITYSDK_OFFSET(0xB353860)
#define RPG_CLIENT_AUDIOMANAGER_ISEVENTEXISTINPCK_OFFSET UNITYSDK_OFFSET(0xB34D7D0)
#define RPG_CLIENT_AUDIOMANAGER_ISEVENTINCD_OFFSET UNITYSDK_OFFSET(0xB34DA40)
#define RPG_CLIENT_AUDIOMANAGER_ISEVENTPENDING_OFFSET UNITYSDK_OFFSET(0xB34B1A0)
#define RPG_CLIENT_AUDIOMANAGER_ISEVENTPLAYING_OFFSET UNITYSDK_OFFSET(0xB34B140)
#define RPG_CLIENT_AUDIOMANAGER_ISLOCALLANGDIREXIST_OFFSET UNITYSDK_OFFSET(0xB3521D0)
#define RPG_CLIENT_AUDIOMANAGER_ISSOUNDEVENTMARKER_OFFSET UNITYSDK_OFFSET(0xB342B70)
#define RPG_CLIENT_AUDIOMANAGER_LOADINITGAMEPCKS_OFFSET UNITYSDK_OFFSET(0xB347470)
#define RPG_CLIENT_AUDIOMANAGER_MUTEALLAUDIOOFGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xB34F4F0)
#define RPG_CLIENT_AUDIOMANAGER_ONAUDIODOWLOADSUCCEED_OFFSET UNITYSDK_OFFSET(0xB352C40)
#define RPG_CLIENT_AUDIOMANAGER_ONAUDIODOWNLOADFAILED_OFFSET UNITYSDK_OFFSET(0xB352D90)
#define RPG_CLIENT_AUDIOMANAGER_ONAUDIOSIZEFAIL_OFFSET UNITYSDK_OFFSET(0xB3531B0)
#define RPG_CLIENT_AUDIOMANAGER_ONAUDIOSIZESUCCESS_OFFSET UNITYSDK_OFFSET(0xB352EB0)
#define RPG_CLIENT_AUDIOMANAGER_PAUSEBGM_OFFSET UNITYSDK_OFFSET(0xB3497E0)
#define RPG_CLIENT_AUDIOMANAGER_PAUSEEVENTID_OFFSET UNITYSDK_OFFSET(0xB34C0A0)
#define RPG_CLIENT_AUDIOMANAGER_PAUSEEVENT_OFFSET UNITYSDK_OFFSET(0xB34B910)
#define RPG_CLIENT_AUDIOMANAGER_PAUSESOUNDINBATTLE_OFFSET UNITYSDK_OFFSET(0xB349DC0)
#define RPG_CLIENT_AUDIOMANAGER_PAUSESOUNDINCUTSCENE_OFFSET UNITYSDK_OFFSET(0xB349980)
#define RPG_CLIENT_AUDIOMANAGER_PAUSEVOICE_OFFSET UNITYSDK_OFFSET(0xB34EE00)
#define RPG_CLIENT_AUDIOMANAGER_PAUSE_OFFSET UNITYSDK_OFFSET(0xB352720)
#define RPG_CLIENT_AUDIOMANAGER_PLAYUICHARACTERVO_OFFSET UNITYSDK_OFFSET(0xB34F760)
#define RPG_CLIENT_AUDIOMANAGER_POSTATONCE_OFFSET UNITYSDK_OFFSET(0xB347ED0)
#define RPG_CLIENT_AUDIOMANAGER_POSTBGM_OFFSET UNITYSDK_OFFSET(0xB346CA0)
#define RPG_CLIENT_AUDIOMANAGER_POSTEVENTWITHBEGINCALLBACK_OFFSET UNITYSDK_OFFSET(0xB347630)
#define RPG_CLIENT_AUDIOMANAGER_POSTEVENT_OFFSET UNITYSDK_OFFSET(0xB346E20)
#define RPG_CLIENT_AUDIOMANAGER_POSTEXTERNALSOURCE_OFFSET UNITYSDK_OFFSET(0xB3479E0)
#define RPG_CLIENT_AUDIOMANAGER_POSTLOOPSFX_OFFSET UNITYSDK_OFFSET(0xB348C30)
#define RPG_CLIENT_AUDIOMANAGER_POSTSFX_OFFSET UNITYSDK_OFFSET(0xB348920)
#define RPG_CLIENT_AUDIOMANAGER_POSTVOICE_OFFSET UNITYSDK_OFFSET(0xB3481F0)
#define RPG_CLIENT_AUDIOMANAGER_PREPAREAUDIODOWNLOADDATA_OFFSET UNITYSDK_OFFSET(0xB351510)
#define RPG_CLIENT_AUDIOMANAGER_PREPAREDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xB3522D0)
#define RPG_CLIENT_AUDIOMANAGER_REFRESHVIBRATIONINTENSITY_OFFSET UNITYSDK_OFFSET(0xB34E2E0)
#define RPG_CLIENT_AUDIOMANAGER_RELOADALLFULLPCKS_OFFSET UNITYSDK_OFFSET(0xB347340)
#define RPG_CLIENT_AUDIOMANAGER_RELOADVOBANKS_OFFSET UNITYSDK_OFFSET(0xB34CAD0)
#define RPG_CLIENT_AUDIOMANAGER_REMOVESCOPELIMITEDTARGET_OFFSET UNITYSDK_OFFSET(0xB3431F0)
#define RPG_CLIENT_AUDIOMANAGER_REMOVEVOICETARGET_OFFSET UNITYSDK_OFFSET(0xB3488B0)
#define RPG_CLIENT_AUDIOMANAGER_RESETLISTNERMODE_OFFSET UNITYSDK_OFFSET(0xB34AEE0)
#define RPG_CLIENT_AUDIOMANAGER_RESETSOUNDENGINE_OFFSET UNITYSDK_OFFSET(0xB346B50)
#define RPG_CLIENT_AUDIOMANAGER_RESETUILISTNERMODE_OFFSET UNITYSDK_OFFSET(0xB34AE70)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEBGM_OFFSET UNITYSDK_OFFSET(0xB3498B0)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xB353620)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEEVENTID_OFFSET UNITYSDK_OFFSET(0xB34C180)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEEVENT_OFFSET UNITYSDK_OFFSET(0xB34BAF0)
#define RPG_CLIENT_AUDIOMANAGER_RESUMESOUNDINBATTLE_OFFSET UNITYSDK_OFFSET(0xB349F50)
#define RPG_CLIENT_AUDIOMANAGER_RESUMESOUNDINCUTSCENE_OFFSET UNITYSDK_OFFSET(0xB349BA0)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEVOICE_OFFSET UNITYSDK_OFFSET(0xB34EF20)
#define RPG_CLIENT_AUDIOMANAGER_RESUME_OFFSET UNITYSDK_OFFSET(0xB352770)
#define RPG_CLIENT_AUDIOMANAGER_SAVEVOLUME_OFFSET UNITYSDK_OFFSET(0xB34E500)
#define RPG_CLIENT_AUDIOMANAGER_SEEKONBGM_OFFSET UNITYSDK_OFFSET(0xB3492A0)
#define RPG_CLIENT_AUDIOMANAGER_SEEKONEVENTID_1_OFFSET UNITYSDK_OFFSET(0xB34C780)
#define RPG_CLIENT_AUDIOMANAGER_SEEKONEVENTID_OFFSET UNITYSDK_OFFSET(0xB349300)
#define RPG_CLIENT_AUDIOMANAGER_SETBGMGAMESTATE_OFFSET UNITYSDK_OFFSET(0xB34B480)
#define RPG_CLIENT_AUDIOMANAGER_SETBGMVOLUME_OFFSET UNITYSDK_OFFSET(0xB34CE20)
#define RPG_CLIENT_AUDIOMANAGER_SETEXCLUDEVOICEMUTE_OFFSET UNITYSDK_OFFSET(0xB349790)
#define RPG_CLIENT_AUDIOMANAGER_SETISMUTEONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xB34F240)
#define RPG_CLIENT_AUDIOMANAGER_SETLANGUAGE_OFFSET UNITYSDK_OFFSET(0xB346320)
#define RPG_CLIENT_AUDIOMANAGER_SETLISTNERMODE_OFFSET UNITYSDK_OFFSET(0xB34AC80)
#define RPG_CLIENT_AUDIOMANAGER_SETMASTERVOLUME_OFFSET UNITYSDK_OFFSET(0xB34CDD0)
#define RPG_CLIENT_AUDIOMANAGER_SETMOTION_OFFSET UNITYSDK_OFFSET(0xB34DF30)
#define RPG_CLIENT_AUDIOMANAGER_SETMUTEBGM_OFFSET UNITYSDK_OFFSET(0xB349410)
#define RPG_CLIENT_AUDIOMANAGER_SETMUTESFX_OFFSET UNITYSDK_OFFSET(0xB349570)
#define RPG_CLIENT_AUDIOMANAGER_SETMUTEVO_OFFSET UNITYSDK_OFFSET(0xB349680)
#define RPG_CLIENT_AUDIOMANAGER_SETSFXVOLUME_OFFSET UNITYSDK_OFFSET(0xB34CEB0)
#define RPG_CLIENT_AUDIOMANAGER_SETSPEAKERMODE_OFFSET UNITYSDK_OFFSET(0xB34CFD0)
#define RPG_CLIENT_AUDIOMANAGER_SETSTATE_1_OFFSET UNITYSDK_OFFSET(0xB352370)
#define RPG_CLIENT_AUDIOMANAGER_SETSTATE_OFFSET UNITYSDK_OFFSET(0xB344600)
#define RPG_CLIENT_AUDIOMANAGER_SETSWITCH_OFFSET UNITYSDK_OFFSET(0xB34C880)
#define RPG_CLIENT_AUDIOMANAGER_SETUILISTNERMODE_OFFSET UNITYSDK_OFFSET(0xB34ABD0)
#define RPG_CLIENT_AUDIOMANAGER_SETVIBRATIONINTENSITYACTIVE_OFFSET UNITYSDK_OFFSET(0xB34E400)
#define RPG_CLIENT_AUDIOMANAGER_SETVOVOLUME_OFFSET UNITYSDK_OFFSET(0xB34CF40)
#define RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMFLOORGROUP_OFFSET UNITYSDK_OFFSET(0xB3511C0)
#define RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMFLOORSTATE_OFFSET UNITYSDK_OFFSET(0xB3511E0)
#define RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMWORLDSTATE_OFFSET UNITYSDK_OFFSET(0xB3511A0)
#define RPG_CLIENT_AUDIOMANAGER_SET_BGMEVENTID_OFFSET UNITYSDK_OFFSET(0xB351090)
#define RPG_CLIENT_AUDIOMANAGER_SET_BGMGAMEMODE_OFFSET UNITYSDK_OFFSET(0xB3510B0)
#define RPG_CLIENT_AUDIOMANAGER_SET_BGMVOLUME_OFFSET UNITYSDK_OFFSET(0xB346680)
#define RPG_CLIENT_AUDIOMANAGER_SET_ISBGMMUTE_OFFSET UNITYSDK_OFFSET(0xB3510D0)
#define RPG_CLIENT_AUDIOMANAGER_SET_ISSFXMUTE_OFFSET UNITYSDK_OFFSET(0xB3510F0)
#define RPG_CLIENT_AUDIOMANAGER_SET_ISVOMUTE_OFFSET UNITYSDK_OFFSET(0xB351110)
#define RPG_CLIENT_AUDIOMANAGER_SET_MASTERVOLUME_OFFSET UNITYSDK_OFFSET(0xB3464D0)
#define RPG_CLIENT_AUDIOMANAGER_SET_SFXVOLUME_OFFSET UNITYSDK_OFFSET(0xB346760)
#define RPG_CLIENT_AUDIOMANAGER_SET_SPEAKERMODE_OFFSET UNITYSDK_OFFSET(0xB346970)
#define RPG_CLIENT_AUDIOMANAGER_SET_VOVOLUME_OFFSET UNITYSDK_OFFSET(0xB346840)
#define RPG_CLIENT_AUDIOMANAGER_SHOWSIZE_OFFSET UNITYSDK_OFFSET(0xB351380)
#define RPG_CLIENT_AUDIOMANAGER_STARTDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xB3527C0)
#define RPG_CLIENT_AUDIOMANAGER_STOPALLLOOPSFX_OFFSET UNITYSDK_OFFSET(0xB349150)
#define RPG_CLIENT_AUDIOMANAGER_STOPDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xB353420)
#define RPG_CLIENT_AUDIOMANAGER_STOPEVENTID_OFFSET UNITYSDK_OFFSET(0xB348F30)
#define RPG_CLIENT_AUDIOMANAGER_STOPEVENTSBYEVENTNAME_OFFSET UNITYSDK_OFFSET(0xB34C260)
#define RPG_CLIENT_AUDIOMANAGER_STOPEVENT_OFFSET UNITYSDK_OFFSET(0xB34BC80)
#define RPG_CLIENT_AUDIOMANAGER_STOPLOOPSFX_OFFSET UNITYSDK_OFFSET(0xB348E50)
#define RPG_CLIENT_AUDIOMANAGER_TICKDYNAMICLISTENER_OFFSET UNITYSDK_OFFSET(0xB34A0D0)
#define RPG_CLIENT_AUDIOMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xB344770)
#define RPG_CLIENT_AUDIOMANAGER_TRYGETPLAYINGEVENTPOSITION_OFFSET UNITYSDK_OFFSET(0xB34C6F0)
#define RPG_CLIENT_AUDIOMANAGER_TRYPLAYJOINTEAMCHARACTERVO_OFFSET UNITYSDK_OFFSET(0xB34F040)
#define RPG_CLIENT_AUDIOMANAGER_TRYSTOPJOINTEAMCHARACTERVO_OFFSET UNITYSDK_OFFSET(0xB34F190)
#define RPG_CLIENT_AUDIOMANAGER_UNLOADINITGAMEPCKS_OFFSET UNITYSDK_OFFSET(0xB3475C0)
#define RPG_CLIENT_AUDIOMANAGER_UNLOADMININUMBANK_OFFSET UNITYSDK_OFFSET(0xB347240)
#define RPG_CLIENT_AUDIOMANAGER_UNLOADUNUSEDMISSIONPCKS_OFFSET UNITYSDK_OFFSET(0xB34F6D0)
#define RPG_CLIENT_AUDIOMANAGER_UNMUTEALLAUDIOOFGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xB34F630)
#define RPG_CLIENT_AUDIOMANAGER_UPDATEAUDIODOWNLOADSTATE_OFFSET UNITYSDK_OFFSET(0xB351D70)
#define RPG_CLIENT_AUDIOMANAGER_UPDATEPARTIALDOWNLOADLANG_OFFSET UNITYSDK_OFFSET(0xB3532B0)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__244_0_OFFSET UNITYSDK_OFFSET(0xB354A60)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__244_1_OFFSET UNITYSDK_OFFSET(0xB354A70)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__244_2_OFFSET UNITYSDK_OFFSET(0xB354A80)
#define RPG_CLIENT_AUDIOMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB354A50)
#define RPG_CLIENT_AUDIOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB3542F0)
#define RPG_CLIENT_AUDIOMANAGER__DEBUGADD_OFFSET UNITYSDK_OFFSET(0xB343A60)
#define RPG_CLIENT_AUDIOMANAGER__DEBUGREMOVE_OFFSET UNITYSDK_OFFSET(0xB343B00)
#define RPG_CLIENT_AUDIOMANAGER__DOPOST_OFFSET UNITYSDK_OFFSET(0xB34FA10)
#define RPG_CLIENT_AUDIOMANAGER__DOWNLOADDISPOSE_OFFSET UNITYSDK_OFFSET(0xB3441D0)
#define RPG_CLIENT_AUDIOMANAGER__GETNEEDBANKS_OFFSET UNITYSDK_OFFSET(0xB34F930)
#define RPG_CLIENT_AUDIOMANAGER__GETSFXEVENTNAME_OFFSET UNITYSDK_OFFSET(0xB348B00)
#define RPG_CLIENT_AUDIOMANAGER__GETTEAMCHARACTERVOPLAYER_OFFSET UNITYSDK_OFFSET(0xB34F0B0)
#define RPG_CLIENT_AUDIOMANAGER__GETVOICEEVENTNAME_OFFSET UNITYSDK_OFFSET(0xB348490)
#define RPG_CLIENT_AUDIOMANAGER__INITLISTENER_OFFSET UNITYSDK_OFFSET(0xB345900)
#define RPG_CLIENT_AUDIOMANAGER__INITUIBUTTONSOUNDTYPESTRINGCACHE_OFFSET UNITYSDK_OFFSET(0xB345CC0)
#define RPG_CLIENT_AUDIOMANAGER__LOADAUDIOCONFIG_OFFSET UNITYSDK_OFFSET(0xB345840)
#define RPG_CLIENT_AUDIOMANAGER__LOADINITBANKCALLBACK_OFFSET UNITYSDK_OFFSET(0xB3505B0)
#define RPG_CLIENT_AUDIOMANAGER__ONANDROIDHEADSETBLUETOOTHPERMISSIONREQUESTRESULT_OFFSET UNITYSDK_OFFSET(0xB350B00)
#define RPG_CLIENT_AUDIOMANAGER__ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0xB350EC0)
#define RPG_CLIENT_AUDIOMANAGER__ONINPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0xB350A30)
#define RPG_CLIENT_AUDIOMANAGER__ONSDKNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xB350B80)
#define RPG_CLIENT_AUDIOMANAGER__POSTAFTERBANKPREPARED_OFFSET UNITYSDK_OFFSET(0xB3476E0)
#define RPG_CLIENT_AUDIOMANAGER__POSTATONCE_OFFSET UNITYSDK_OFFSET(0xB347F60)
#define RPG_CLIENT_AUDIOMANAGER__POSTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB34FEB0)
#define RPG_CLIENT_AUDIOMANAGER__PRELOADEVENT_OFFSET UNITYSDK_OFFSET(0xB347010)
#define RPG_CLIENT_AUDIOMANAGER__RAYCASTOCCLUSION_OFFSET UNITYSDK_OFFSET(0xB34D340)
#define RPG_CLIENT_AUDIOMANAGER__REFRESHVIBRATIONLEVEL_OFFSET UNITYSDK_OFFSET(0xB34E1B0)
#define RPG_CLIENT_AUDIOMANAGER__REMOVESOUNDBANKUSAGE_OFFSET UNITYSDK_OFFSET(0xB34BFF0)
#define RPG_CLIENT_AUDIOMANAGER__SETEVENTCD_OFFSET UNITYSDK_OFFSET(0xB34DDE0)
#define RPG_CLIENT_AUDIOMANAGER__SETINNERSTATE_OFFSET UNITYSDK_OFFSET(0xB3440F0)
#define RPG_CLIENT_AUDIOMANAGER__TICKLISTENERCAMERAWITHDIST_OFFSET UNITYSDK_OFFSET(0xB34A550)
#define RPG_CLIENT_AUDIOMANAGER__TICKLISTENERCAMERA_OFFSET UNITYSDK_OFFSET(0xB34A3A0)
#define RPG_CLIENT_AUDIOMANAGER__TICKLISTENERFOLLOWINGWITHDIRECT_OFFSET UNITYSDK_OFFSET(0xB34AA70)
#define RPG_CLIENT_AUDIOMANAGER__TICKLISTENERFOLLOWING_OFFSET UNITYSDK_OFFSET(0xB34A1C0)
#define RPG_CLIENT_AUDIOMANAGER__TICKMUSICVISUALIZE_OFFSET UNITYSDK_OFFSET(0xB342F00)
#define RPG_CLIENT_AUDIOMANAGER__TICKPENDINGEVENTS_OFFSET UNITYSDK_OFFSET(0xB3448B0)
#define RPG_CLIENT_AUDIOMANAGER__TICKPENDINGEVENT_OFFSET UNITYSDK_OFFSET(0xB34FCB0)
#define RPG_CLIENT_AUDIOMANAGER__TICKSCOPELIMIT_OFFSET UNITYSDK_OFFSET(0xB343300)
#define RPG_CLIENT_AUDIOMANAGER__UNLOADBANKCALLBACK_OFFSET UNITYSDK_OFFSET(0xB3507F0)
#define RPG_CLIENT_AUDIOMANAGER__UPDATEAUDIOLISTENERMODE_OFFSET UNITYSDK_OFFSET(0xB34AFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager_TypeDefinitionIndex = 55839;

	class AudioManager : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_MAX_AUDIO_VOLUME()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AudioManager_TypeDefinitionIndex)->GetStaticField(0xA550);
		}
		::System::Collections::Generic::HashSet_1<::System::String*>* downloadedLanguage; // 0x10
		::AkCallbackManager_EventCallback* _PostCallBackAction; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt64>* EventCDDict; // 0x20
		::RPG::GameCore::AudioConfig* AudioConfig; // 0x28
		::Il2CppArray<::UnityEngine::RaycastHit>* _OcclusionHitInfos; // 0x30
		::RPG::GameCore::PropSoundOverrideConfig* _PropSoundOverrideConfig; // 0x38
		::Class_1_23EFA84ACA0E11E6* _PckMgr; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* audioDict; // 0x48
		::Class_1_9CF7395E35AA1345* _SoundBankTicker; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* reverseDict; // 0x58
		::UnityEngine::GameObject* _ListenerObject; // 0x60
		::Class_1_FA97E57CAD047BA5* SoundBankLookUpData; // 0x68
		::Class_1_6C462A2E579389F9* updateOneAudioLangAsset; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::AudioLanguageItem*>* languageItems; // 0x78
		::Class_1_547AFD87644505F0* _AudioPlayingCacheData_k__BackingField; // 0x80
		::System::Collections::Generic::HashSet_1<::System::String*>* partialDownloadedLanguage; // 0x88
		::System::Collections::Generic::List_1<::RPG::Client::AudioLanguageItem*>* items; // 0x90
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MusicVisualizeDataSourceType, ::Class_1_E6E7D50288DDC3E7*>* _MusicVisualzieDataDict; // 0x98
		::System::Collections::Generic::List_1<::RPG::Client::AudioManager_ScopeLimitInstance*>* _LimitedInstanceList; // 0xA0
		::System::String* _AdventureBGMFloorGroup_k__BackingField; // 0xA8
		::System::Action* audioSizeSuccessCb; // 0xB0
		::System::String* _AdventureBGMFloorState_k__BackingField; // 0xB8
		::System::Collections::Generic::CacheLinkedList_1<::Class_1_239D87D7563FF971*>* _PendingAudioEvents; // 0xC0
		::System::String* DownLoadAudioKey; // 0xC8
		::System::Action* audioSizeFailCb; // 0xD0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::UIButtonSoundType, ::System::String*>* _UIButtonSoundTypeStringCache; // 0xD8
		::RPG::Client::AudioManager_AudioListenerInfo* _ListenerInfo; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::GameObject*>* _VoiceTargets; // 0xE8
		::RPG::GameCore::JukeBoxMusicTimesConfig* JukeBoxConfig; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _VoiceTypeExternalEventDict; // 0xF8
		::System::String* s_ExternalSourceFormat; // 0x100
		::Class_1_58B161F85B3D684E* audioLangSizeLoader; // 0x108
		::System::Collections::Generic::HashSet_1<::System::Int32>* _WillMuteGameObjectIDs; // 0x110
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _LoopSFXPlayingIds; // 0x118
		::System::Collections::Generic::List_1<::RPG::Client::AudioManager_AudioListenerInfo*>* _AudioListenerInfoList; // 0x120
		::System::Collections::Generic::Stack_1<::RPG::GameCore::AudioGameState>* _BGMGameStateStack; // 0x128
		::System::String* _AdventureBGMWorldState_k__BackingField; // 0x130
		::System::Collections::Generic::List_1<::System::UInt32>* _PreLoadBanks; // 0x138
		::Class_1_1573D818832F8AAB* _TeamCharacterVOPlayer; // 0x140
		::System::String* s_DefaultListenerName; // 0x148
		::System::Single s_LoadSoundBankProtectTime; // 0x150
		::System::Single _ScopeLimitTickInterval; // 0x154
		::System::UInt32 _BGMEventID_k__BackingField; // 0x158
		::System::Boolean _IsVOMute_k__BackingField; // 0x15C
		::System::Boolean _IsSFXMute_k__BackingField; // 0x15D
		::System::Boolean _IsMuteOnLostFocus; // 0x15E
		::System::Boolean _ExcludeVoiceMute; // 0x15F
		::System::UInt32 _SFXVolume; // 0x160
		::System::Boolean isDownloading; // 0x164
		::System::Boolean _IsResourceLoaded; // 0x165
		::System::Boolean ShowSizeDirty; // 0x166
		::System::UInt32 _BGMVolume; // 0x168
		::RPG::GameCore::AudioGameState _BGMGameMode_k__BackingField; // 0x16C
		::System::Boolean _UsePckMode; // 0x170
		::System::Boolean _IsBGMMute_k__BackingField; // 0x171
		::System::Boolean _IsUsingMiniBank; // 0x172
		::System::Boolean ShowSizeState; // 0x173
		::RPG::Client::AudioSettings_SpeakerModeType _SpeakerMode; // 0x174
		::System::UInt32 _VOVolume; // 0x178
		::System::UInt64 _CurrentOutputID; // 0x180
		::RPG::Client::AudioManager_InnerState _InnerState; // 0x188
		::System::UInt32 _MasterVolume; // 0x18C
		::RPG::Client::AudioManager_AudioDownloadState downloadState; // 0x190
		::System::Single _ScopeLimitTickCooldown; // 0x194

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean IsSoundEventMarker(::AkMarkerCallbackInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AkMarkerCallbackInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISSOUNDEVENTMARKER_OFFSET))(this, a1);
		}

		::Class_1_E6E7D50288DDC3E7* GetMusicVisualizeData(::RPG::Client::MusicVisualizeDataSourceType a1)
		{
			return ((::Class_1_E6E7D50288DDC3E7*(*)(::PVOID, ::RPG::Client::MusicVisualizeDataSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETMUSICVISUALIZEDATA_OFFSET))(this, a1);
		}

		::System::Void _TickMusicVisualize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKMUSICVISUALIZE_OFFSET))(this, a1);
		}

		::System::Void AddScopeLimitedTarget(::Class_0_16E4307DCC419505_587* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_587*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ADDSCOPELIMITEDTARGET_OFFSET))(this, a1);
		}

		::System::Void RemoveScopeLimitedTarget(::Class_0_16E4307DCC419505_587* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_587*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_REMOVESCOPELIMITEDTARGET_OFFSET))(this, a1);
		}

		::System::Void _TickScopeLimit(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKSCOPELIMIT_OFFSET))(this, a1);
		}

		::System::Void _DebugAdd(::Class_0_16E4307DCC419505_587* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_587*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__DEBUGADD_OFFSET))(this, a1);
		}

		::System::Void _DebugRemove(::Class_0_16E4307DCC419505_587* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_587*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__DEBUGREMOVE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void BeforeRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_BEFORERESTART_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_INIT_OFFSET))(this);
		}

		::System::Void ResetSoundEngine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESETSOUNDENGINE_OFFSET))(this);
		}

		::System::Void PostBGM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTBGM_OFFSET))(this, a1);
		}

		::System::Void InitGamePcksDev()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_INITGAMEPCKSDEV_OFFSET))(this);
		}

		::System::Void ReloadAllFullPcks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RELOADALLFULLPCKS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* AsyncLoadInitGamePcks(::System::Action* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ASYNCLOADINITGAMEPCKS_OFFSET))(this, a1);
		}

		::System::Void LoadInitGamePcks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_LOADINITGAMEPCKS_OFFSET))(this);
		}

		::System::Void UnloadMininumBank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_UNLOADMININUMBANK_OFFSET))(this);
		}

		::System::Void UnloadInitGamePcks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_UNLOADINITGAMEPCKS_OFFSET))(this);
		}

		::System::UInt32 PostEventWithBeginCallback(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a3, ::System::Action_1<::System::UInt32>* a4, ::AkCallbackType a5)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::System::Action_1<::System::UInt32>*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTEVENTWITHBEGINCALLBACK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 PostEvent(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a3, ::AkCallbackType a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTEVENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 PostExternalSource(::System::String* a1, ::AkExternalSourceInfoArray* a2, ::UnityEngine::GameObject* a3, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::AkExternalSourceInfoArray*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTEXTERNALSOURCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::AkExternalSourceInfoArray* GetExternalSourceInfo(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::AkExternalSourceInfoArray*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETEXTERNALSOURCEINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 PostAtOnce(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a3, ::AkCallbackType a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTATONCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 PostVoice(::System::UInt32 a1, ::UnityEngine::GameObject* a2, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a3, ::System::Action_1<::System::UInt32>* a4, ::AkCallbackType a5, ::System::String* a6)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::System::Action_1<::System::UInt32>*, ::AkCallbackType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTVOICE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void AddVoiceTarget(::System::UInt32 a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ADDVOICETARGET_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveVoiceTarget(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_REMOVEVOICETARGET_OFFSET))(this, a1);
		}

		::System::UInt32 PostSFX(::System::UInt32 a1, ::UnityEngine::GameObject* a2, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a3, ::System::Action_1<::System::UInt32>* a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTSFX_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 PostLoopSFX(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTLOOPSFX_OFFSET))(this, a1);
		}

		::System::Void StopLoopSFX(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPLOOPSFX_OFFSET))(this, a1, a2);
		}

		::System::Void StopAllLoopSFX()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPALLLOOPSFX_OFFSET))(this);
		}

		::System::Void SeekOnBGM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SEEKONBGM_OFFSET))(this, a1);
		}

		::System::Void SetMuteBGM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETMUTEBGM_OFFSET))(this, a1, a2);
		}

		::System::Void SetMuteSFX(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETMUTESFX_OFFSET))(this, a1);
		}

		::System::Void SetMuteVO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETMUTEVO_OFFSET))(this, a1);
		}

		::System::Void SetExcludeVoiceMute(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETEXCLUDEVOICEMUTE_OFFSET))(this, a1);
		}

		::System::Void PauseBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSEBGM_OFFSET))(this);
		}

		::System::Void ResumeBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMEBGM_OFFSET))(this);
		}

		::System::Void PauseSoundInCutScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSESOUNDINCUTSCENE_OFFSET))(this);
		}

		::System::Void ResumeSoundInCutScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMESOUNDINCUTSCENE_OFFSET))(this);
		}

		::System::Void PauseSoundInBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSESOUNDINBATTLE_OFFSET))(this);
		}

		::System::Void ResumeSoundInBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMESOUNDINBATTLE_OFFSET))(this);
		}

		::System::Void TickDynamicListener(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_TICKDYNAMICLISTENER_OFFSET))(this, a1);
		}

		::System::Void SetUIListnerMode(::RPG::Client::AudioListenerMode a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Nullable_1<::UnityEngine::Vector3> a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioListenerMode, ::UnityEngine::Transform*, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETUILISTNERMODE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ResetUIListnerMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESETUILISTNERMODE_OFFSET))(this);
		}

		::System::Void ResetListnerMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESETLISTNERMODE_OFFSET))(this);
		}

		::System::Void SetListnerMode(::RPG::Client::AudioListenerMode a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::RPG::Client::AudioListenerType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioListenerMode, ::UnityEngine::Transform*, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>, ::RPG::Client::AudioListenerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETLISTNERMODE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean IsEventPlaying(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISEVENTPLAYING_OFFSET))(this, a1);
		}

		::System::Boolean IsEventPending(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_1_239D87D7563FF971*& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_1_239D87D7563FF971*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISEVENTPENDING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBGMGameState(::RPG::GameCore::AudioGameState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AudioGameState))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETBGMGAMESTATE_OFFSET))(this, a1);
		}

		::System::Void BackToPreviousBGMGameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_BACKTOPREVIOUSBGMGAMESTATE_OFFSET))(this);
		}

		::System::Void ClearBGMGameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CLEARBGMGAMESTATE_OFFSET))(this);
		}

		::System::Void PauseEvent(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSEEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void ResumeEvent(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMEEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BreakEvent(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_BREAKEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void StopEvent(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StopEventID(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPEVENTID_OFFSET))(this, a1, a2);
		}

		::System::Void PauseEventID(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSEEVENTID_OFFSET))(this, a1, a2);
		}

		::System::Void ResumeEventID(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMEEVENTID_OFFSET))(this, a1, a2);
		}

		::System::Void StopEventsByEventName(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPEVENTSBYEVENTNAME_OFFSET))(this, a1, a2);
		}

		::System::Void GameobjectSoundFade(::System::Boolean a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GAMEOBJECTSOUNDFADE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEventIDListByEventName(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETEVENTIDLISTBYEVENTNAME_OFFSET))(this, a1);
		}

		::Class_1_253F4BEA35E6A1BB* GetPlayingInfoByPlayingID(::System::UInt32 a1)
		{
			return ((::Class_1_253F4BEA35E6A1BB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPLAYINGINFOBYPLAYINGID_OFFSET))(this, a1);
		}

		::System::Int32 GetPlayingEventPositionByEventName(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPLAYINGEVENTPOSITIONBYEVENTNAME_OFFSET))(this, a1);
		}

		::System::Boolean TryGetPlayingEventPosition(::System::UInt32 a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_TRYGETPLAYINGEVENTPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetPlayingEventPosition(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPLAYINGEVENTPOSITION_OFFSET))(this, a1);
		}

		::System::Void SeekOnEventID(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SEEKONEVENTID_OFFSET))(this, a1, a2);
		}

		::System::Void SeekOnEventID_1(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SEEKONEVENTID_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean SetSwitch(::System::String* a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETSWITCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean SetState(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void ReloadVoBanks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RELOADVOBANKS_OFFSET))(this);
		}

		::System::String* GetUIButtonSoundEventByType(::RPG::Client::UIButtonSoundType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::UIButtonSoundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETUIBUTTONSOUNDEVENTBYTYPE_OFFSET))(this, a1);
		}

		::System::Void SetLanguage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETLANGUAGE_OFFSET))(this, a1);
		}

		::System::Void SetMasterVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETMASTERVOLUME_OFFSET))(this, a1);
		}

		::System::Void SetBGMVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETBGMVOLUME_OFFSET))(this, a1);
		}

		::System::Void SetSFXVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETSFXVOLUME_OFFSET))(this, a1);
		}

		::System::Void SetVOVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETVOVOLUME_OFFSET))(this, a1);
		}

		::System::Void SetSpeakerMode(::RPG::Client::AudioSettings_SpeakerModeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioSettings_SpeakerModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETSPEAKERMODE_OFFSET))(this, a1);
		}

		::System::Single CheckEmitterHasOcclusion(::UnityEngine::Transform* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CHECKEMITTERHASOCCLUSION_OFFSET))(this, a1);
		}

		::System::Boolean IsEventExistInPck(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISEVENTEXISTINPCK_OFFSET))(this, a1);
		}

		::System::Int32 GetJukeBoxMusicTime(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETJUKEBOXMUSICTIME_OFFSET))(this, a1);
		}

		::System::Boolean IsEventInCD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISEVENTINCD_OFFSET))(this, a1);
		}

		::System::Boolean CanPostEventInCD(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CANPOSTEVENTINCD_OFFSET))(this, a1, a2);
		}

		::System::Void SetMotion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETMOTION_OFFSET))(this);
		}

		::System::Void RefreshVibrationIntensity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_REFRESHVIBRATIONINTENSITY_OFFSET))(this);
		}

		::System::Void SetVibrationIntensityActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETVIBRATIONINTENSITYACTIVE_OFFSET))(this, a1);
		}

		::System::Void SaveVolume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SAVEVOLUME_OFFSET))(this);
		}

		::System::Void PauseVoice(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSEVOICE_OFFSET))(this, a1);
		}

		::System::Void ResumeVoice(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMEVOICE_OFFSET))(this, a1);
		}

		::System::Void TryPlayJoinTeamCharacterVO(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::TeamData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_TRYPLAYJOINTEAMCHARACTERVO_OFFSET))(this, a1, a2);
		}

		::System::Void TryStopJoinTeamCharacterVO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_TRYSTOPJOINTEAMCHARACTERVO_OFFSET))(this);
		}

		::System::Boolean GetIsMuteOnLostFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETISMUTEONLOSTFOCUS_OFFSET))(this);
		}

		::System::Void SetIsMuteOnLostFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETISMUTEONLOSTFOCUS_OFFSET))(this, a1);
		}

		::RPG::GameCore::PropSoundConfigOverrideConfig* GetPropSoundOverrideConfig(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PropSoundConfigOverrideConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPROPSOUNDOVERRIDECONFIG_OFFSET))(this, a1);
		}

		::System::Void MuteAllAudioOfGameobject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_MUTEALLAUDIOOFGAMEOBJECT_OFFSET))(this, a1);
		}

		::System::Void UnmuteAllAudioOfGameobject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_UNMUTEALLAUDIOOFGAMEOBJECT_OFFSET))(this, a1);
		}

		::System::Void UnloadUnusedMissionPcks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_UNLOADUNUSEDMISSIONPCKS_OFFSET))(this);
		}

		::Class_1_23EFA84ACA0E11E6* GetPckMgr()
		{
			return ((::Class_1_23EFA84ACA0E11E6*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPCKMGR_OFFSET))(this);
		}

		::System::Void PlayUICharacterVO(::RPG::GameCore::AdventureCharacterVOType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterVOType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PLAYUICHARACTERVO_OFFSET))(this, a1, a2);
		}

		::System::Void _InitListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__INITLISTENER_OFFSET))(this);
		}

		::System::UInt32 _PostAtOnce(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a3, ::System::Action_1<::System::UInt32>* a4, ::AkExternalSourceInfoArray* a5, ::AkCallbackType a6)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::System::Action_1<::System::UInt32>*, ::AkExternalSourceInfoArray*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__POSTATONCE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::UInt32 _PostAfterBankPrepared(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a3, ::AkExternalSourceInfoArray* a4, ::System::Action_1<::System::UInt32>* a5, ::AkCallbackType a6)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::AkExternalSourceInfoArray*, ::System::Action_1<::System::UInt32>*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__POSTAFTERBANKPREPARED_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _TickPendingEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKPENDINGEVENTS_OFFSET))(this);
		}

		::System::Boolean _TickPendingEvent(::Class_1_239D87D7563FF971* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_239D87D7563FF971*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKPENDINGEVENT_OFFSET))(this, a1);
		}

		::System::UInt32 _DoPost(::Class_1_239D87D7563FF971* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_239D87D7563FF971*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__DOPOST_OFFSET))(this, a1);
		}

		::System::Void _PostCallback(::System::Object* a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__POSTCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _LoadInitBankCallback(::System::UInt32 a1, ::System::IntPtr a2, ::AKRESULT a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__LOADINITBANKCALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _UnLoadBankCallback(::System::UInt32 a1, ::System::IntPtr a2, ::AKRESULT a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__UNLOADBANKCALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _RemoveSoundBankUsage(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__REMOVESOUNDBANKUSAGE_OFFSET))(this, a1);
		}

		::System::Void _TickListenerFollowing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKLISTENERFOLLOWING_OFFSET))(this);
		}

		::System::Void _TickListenerFollowingWithDirect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKLISTENERFOLLOWINGWITHDIRECT_OFFSET))(this);
		}

		::System::Void _TickListenerCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKLISTENERCAMERA_OFFSET))(this);
		}

		::System::Void _TickListenerCameraWithDist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKLISTENERCAMERAWITHDIST_OFFSET))(this);
		}

		::System::Void _LoadAudioConfig(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__LOADAUDIOCONFIG_OFFSET))(this, a1);
		}

		::System::Void _InitUIButtonSoundTypeStringCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__INITUIBUTTONSOUNDTYPESTRINGCACHE_OFFSET))(this);
		}

		::System::Void _PreLoadEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__PRELOADEVENT_OFFSET))(this);
		}

		::System::Void _GetNeedBanks(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::UInt32>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__GETNEEDBANKS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _RayCastOcclusion(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__RAYCASTOCCLUSION_OFFSET))(this, a1, a2);
		}

		::System::String* _GetVoiceEventName(::RPG::GameCore::VoicePlayType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::VoicePlayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__GETVOICEEVENTNAME_OFFSET))(this, a1);
		}

		::System::String* _GetSFXEventName(::RPG::GameCore::SFXPlayType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::SFXPlayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__GETSFXEVENTNAME_OFFSET))(this, a1);
		}

		::System::Void _SetEventCD(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__SETEVENTCD_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshVibrationLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__REFRESHVIBRATIONLEVEL_OFFSET))(this);
		}

		::System::Void _OnInputDeviceClassSwitched(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ONINPUTDEVICECLASSSWITCHED_OFFSET))(this, a1);
		}

		::System::Void _OnAndroidHeadsetBluetoothPermissionRequestResult(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ONANDROIDHEADSETBLUETOOTHPERMISSIONREQUESTRESULT_OFFSET))(this, a1);
		}

		::System::Void _OnSDKNotification(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ONSDKNOTIFICATION_OFFSET))(this, a1);
		}

		::System::Void _OnFocusChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ONFOCUSCHANGED_OFFSET))(this, a1);
		}

		::Class_1_1573D818832F8AAB* _GetTeamCharacterVOPlayer()
		{
			return ((::Class_1_1573D818832F8AAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__GETTEAMCHARACTERVOPLAYER_OFFSET))(this);
		}

		::System::Void _UpdateAudioListenerMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__UPDATEAUDIOLISTENERMODE_OFFSET))(this);
		}

		::System::Void _SetInnerState(::RPG::Client::AudioManager_InnerState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioManager_InnerState))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__SETINNERSTATE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_ListenerObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_LISTENEROBJECT_OFFSET))(this);
		}

		::System::UInt32 get_BGMEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_BGMEVENTID_OFFSET))(this);
		}

		::System::Void set_BGMEventID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_BGMEVENTID_OFFSET))(this, a1);
		}

		::RPG::GameCore::AudioGameState get_BGMGameMode()
		{
			return ((::RPG::GameCore::AudioGameState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_BGMGAMEMODE_OFFSET))(this);
		}

		::System::Void set_BGMGameMode(::RPG::GameCore::AudioGameState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AudioGameState))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_BGMGAMEMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBGMMute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_ISBGMMUTE_OFFSET))(this);
		}

		::System::Void set_IsBGMMute(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ISBGMMUTE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSFXMute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_ISSFXMUTE_OFFSET))(this);
		}

		::System::Void set_IsSFXMute(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ISSFXMUTE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVOMute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_ISVOMUTE_OFFSET))(this);
		}

		::System::Void set_IsVOMute(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ISVOMUTE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MasterVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_MASTERVOLUME_OFFSET))(this);
		}

		::System::Void set_MasterVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_MASTERVOLUME_OFFSET))(this, a1);
		}

		::System::UInt32 get_BGMVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_BGMVOLUME_OFFSET))(this);
		}

		::System::Void set_BGMVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_BGMVOLUME_OFFSET))(this, a1);
		}

		::System::UInt32 get_SFXVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_SFXVOLUME_OFFSET))(this);
		}

		::System::Void set_SFXVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_SFXVOLUME_OFFSET))(this, a1);
		}

		::System::UInt32 get_VOVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_VOVOLUME_OFFSET))(this);
		}

		::System::Void set_VOVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_VOVOLUME_OFFSET))(this, a1);
		}

		::RPG::Client::AudioSettings_SpeakerModeType get_SpeakerMode()
		{
			return ((::RPG::Client::AudioSettings_SpeakerModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_SPEAKERMODE_OFFSET))(this);
		}

		::System::Void set_SpeakerMode(::RPG::Client::AudioSettings_SpeakerModeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioSettings_SpeakerModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_SPEAKERMODE_OFFSET))(this, a1);
		}

		::Class_1_547AFD87644505F0* get_AudioPlayingCacheData()
		{
			return ((::Class_1_547AFD87644505F0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_AUDIOPLAYINGCACHEDATA_OFFSET))(this);
		}

		::System::Boolean get_UsePckMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_USEPCKMODE_OFFSET))(this);
		}

		::System::Boolean get_CanSetMuteOnLostFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_CANSETMUTEONLOSTFOCUS_OFFSET))(this);
		}

		::System::String* get_AdventureBGMWorldState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMWORLDSTATE_OFFSET))(this);
		}

		::System::Void set_AdventureBGMWorldState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMWORLDSTATE_OFFSET))(this, a1);
		}

		::System::String* get_AdventureBGMFloorGroup()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMFLOORGROUP_OFFSET))(this);
		}

		::System::Void set_AdventureBGMFloorGroup(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMFLOORGROUP_OFFSET))(this, a1);
		}

		::System::String* get_AdventureBGMFloorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMFLOORSTATE_OFFSET))(this);
		}

		::System::Void set_AdventureBGMFloorState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMFLOORSTATE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_DefaultEmitterObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_DEFAULTEMITTEROBJECT_OFFSET))(this);
		}

		::System::Boolean CanSwitchAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CANSWITCHAUDIO_OFFSET))(this);
		}

		::System::Boolean CanDelete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CANDELETE_OFFSET))(this);
		}

		::System::Boolean ShowSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SHOWSIZE_OFFSET))(this);
		}

		::System::Void PrepareAudioDownloadData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PREPAREAUDIODOWNLOADDATA_OFFSET))(this);
		}

		::System::Void UpdateAudioDownloadState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_UPDATEAUDIODOWNLOADSTATE_OFFSET))(this);
		}

		::System::Void PrepareDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PREPAREDOWNLOAD_OFFSET))(this);
		}

		::System::Boolean AsyncUpdateLangSize(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ASYNCUPDATELANGSIZE_OFFSET))(this, a1, a2);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUME_OFFSET))(this);
		}

		::System::Void StartDownload(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STARTDOWNLOAD_OFFSET))(this, a1);
		}

		::System::Void OnAudioDowloadSucceed(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ONAUDIODOWLOADSUCCEED_OFFSET))(this, a1);
		}

		::System::Void OnAudioDownloadFailed(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ONAUDIODOWNLOADFAILED_OFFSET))(this, a1);
		}

		::System::Void OnAudioSizeSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ONAUDIOSIZESUCCESS_OFFSET))(this);
		}

		::System::Void OnAudioSizeFail(::Class_2_BF47C01E9CFEA39C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BF47C01E9CFEA39C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ONAUDIOSIZEFAIL_OFFSET))(this, a1);
		}

		::System::Void UpdatePartialDownloadLang(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_UPDATEPARTIALDOWNLOADLANG_OFFSET))(this, a1);
		}

		::System::Boolean IsLocalLangDirExist(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISLOCALLANGDIREXIST_OFFSET))(this, a1);
		}

		::System::Void StopDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPDOWNLOAD_OFFSET))(this);
		}

		::System::Void ResumeDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMEDOWNLOAD_OFFSET))(this);
		}

		::System::Void CancelDownloadAudio(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CANCELDOWNLOADAUDIO_OFFSET))(this, a1);
		}

		::RPG::Client::AudioManager_AudioDownloadState GetDownloadStage()
		{
			return ((::RPG::Client::AudioManager_AudioDownloadState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADSTAGE_OFFSET))(this);
		}

		::System::Boolean ApplyAudio(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_APPLYAUDIO_OFFSET))(this, a1);
		}

		::System::Boolean IsAudioDownloaded(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISAUDIODOWNLOADED_OFFSET))(this, a1);
		}

		::System::Boolean IsAudioPartialDownloaded(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISAUDIOPARTIALDOWNLOADED_OFFSET))(this, a1);
		}

		::System::String* GetAudioSize(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETAUDIOSIZE_OFFSET))(this, a1);
		}

		::System::Int32 GetDownloadedAudioCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADEDAUDIOCOUNT_OFFSET))(this);
		}

		::RPG::Client::AudioLanguageItem* GetAudioItemByAudioKey(::System::String* a1)
		{
			return ((::RPG::Client::AudioLanguageItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETAUDIOITEMBYAUDIOKEY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AudioLanguageItem*>* GetDownloadedAudioItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AudioLanguageItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADEDAUDIOITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AudioLanguageItem*>* GetPartialDownloadedAudioItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AudioLanguageItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPARTIALDOWNLOADEDAUDIOITEMS_OFFSET))(this);
		}

		::System::Void DeleteAudioPack(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_DELETEAUDIOPACK_OFFSET))(this, a1);
		}

		::System::Void SetState_1(::RPG::Client::AudioManager_AudioDownloadState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioManager_AudioDownloadState))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETSTATE_1_OFFSET))(this, a1);
		}

		::System::Void _DownloadDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__DOWNLOADDISPOSE_OFFSET))(this);
		}

		::System::Void _AsyncUpdateLangSize_b__244_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__244_0_OFFSET))(this);
		}

		::System::Void _AsyncUpdateLangSize_b__244_1(::Class_2_BF47C01E9CFEA39C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BF47C01E9CFEA39C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__244_1_OFFSET))(this, a1);
		}

		::System::Void _AsyncUpdateLangSize_b__244_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__244_2_OFFSET))(this);
		}
	};
}
