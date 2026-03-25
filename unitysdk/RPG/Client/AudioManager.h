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
class Class_0_16E4307DCC419505_486;
class Class_1_033D34C575E1323A;
class Class_1_239D87D7563FF971;
class Class_1_253F4BEA35E6A1BB;
class Class_1_2B525158BC356FC8;
class Class_1_58B161F85B3D684E;
class Class_1_6C462A2E579389F9;
class Class_1_83BDA5F3F46879EA;
class Class_1_8D0E66DD979ED13D;
class Class_1_ABB37ED06833DBC5;
class Class_1_FBA2F7F034B595FB;
class Class_2_2690241A4D35989E;
namespace RPG::Client { class AudioLanguageItem; }
namespace RPG::Client { class AudioManager_AudioListenerInfo; }
namespace RPG::Client { class AudioManager_ScopeLimitInstance; }
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class IAvatarInfoProvider; }
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

#define RPG_CLIENT_AUDIOMANAGER_ADDSCOPELIMITEDTARGET_OFFSET UNITYSDK_OFFSET(0x90F0CB0)
#define RPG_CLIENT_AUDIOMANAGER_ADDVOICETARGET_OFFSET UNITYSDK_OFFSET(0x90F5F30)
#define RPG_CLIENT_AUDIOMANAGER_APPLYAUDIO_OFFSET UNITYSDK_OFFSET(0x9100E10)
#define RPG_CLIENT_AUDIOMANAGER_ASYNCLOADINITGAMEPCKS_OFFSET UNITYSDK_OFFSET(0x90F4B30)
#define RPG_CLIENT_AUDIOMANAGER_ASYNCUPDATELANGSIZE_OFFSET UNITYSDK_OFFSET(0x90FFB20)
#define RPG_CLIENT_AUDIOMANAGER_BACKTOPREVIOUSBGMGAMESTATE_OFFSET UNITYSDK_OFFSET(0x90F8E30)
#define RPG_CLIENT_AUDIOMANAGER_BEFORERESTART_OFFSET UNITYSDK_OFFSET(0x90F1BF0)
#define RPG_CLIENT_AUDIOMANAGER_BREAKEVENT_OFFSET UNITYSDK_OFFSET(0x90F9300)
#define RPG_CLIENT_AUDIOMANAGER_CANCELDOWNLOADAUDIO_OFFSET UNITYSDK_OFFSET(0x9100C90)
#define RPG_CLIENT_AUDIOMANAGER_CANDELETE_OFFSET UNITYSDK_OFFSET(0x90FEAF0)
#define RPG_CLIENT_AUDIOMANAGER_CANPOSTEVENTINCD_OFFSET UNITYSDK_OFFSET(0x90FB1A0)
#define RPG_CLIENT_AUDIOMANAGER_CANSWITCHAUDIO_OFFSET UNITYSDK_OFFSET(0x90FE9A0)
#define RPG_CLIENT_AUDIOMANAGER_CHECKEMITTERHASOCCLUSION_OFFSET UNITYSDK_OFFSET(0x90FA860)
#define RPG_CLIENT_AUDIOMANAGER_CLEARBGMGAMESTATE_OFFSET UNITYSDK_OFFSET(0x90F8FA0)
#define RPG_CLIENT_AUDIOMANAGER_DELETEAUDIOPACK_OFFSET UNITYSDK_OFFSET(0x91016E0)
#define RPG_CLIENT_AUDIOMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90F1320)
#define RPG_CLIENT_AUDIOMANAGER_GAMEOBJECTSOUNDFADE_OFFSET UNITYSDK_OFFSET(0x90F9A40)
#define RPG_CLIENT_AUDIOMANAGER_GETAUDIOITEMBYAUDIOKEY_OFFSET UNITYSDK_OFFSET(0x9101230)
#define RPG_CLIENT_AUDIOMANAGER_GETAUDIOSIZE_OFFSET UNITYSDK_OFFSET(0x9101060)
#define RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADEDAUDIOCOUNT_OFFSET UNITYSDK_OFFSET(0x91011E0)
#define RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADEDAUDIOITEMS_OFFSET UNITYSDK_OFFSET(0x9101320)
#define RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADSTAGE_OFFSET UNITYSDK_OFFSET(0x9100DC0)
#define RPG_CLIENT_AUDIOMANAGER_GETEVENTIDLISTBYEVENTNAME_OFFSET UNITYSDK_OFFSET(0x90F9B50)
#define RPG_CLIENT_AUDIOMANAGER_GETEXTERNALSOURCEINFO_OFFSET UNITYSDK_OFFSET(0x90F5280)
#define RPG_CLIENT_AUDIOMANAGER_GETISMUTEONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x90FC7B0)
#define RPG_CLIENT_AUDIOMANAGER_GETJUKEBOXMUSICTIME_OFFSET UNITYSDK_OFFSET(0x90FAED0)
#define RPG_CLIENT_AUDIOMANAGER_GETMUSICVISUALIZEDATA_OFFSET UNITYSDK_OFFSET(0x90F0880)
#define RPG_CLIENT_AUDIOMANAGER_GETPARTIALDOWNLOADEDAUDIOITEMS_OFFSET UNITYSDK_OFFSET(0x9101500)
#define RPG_CLIENT_AUDIOMANAGER_GETPCKMGR_OFFSET UNITYSDK_OFFSET(0x90FCD00)
#define RPG_CLIENT_AUDIOMANAGER_GETPLAYINGEVENTPOSITIONBYEVENTNAME_OFFSET UNITYSDK_OFFSET(0x90F9C10)
#define RPG_CLIENT_AUDIOMANAGER_GETPLAYINGEVENTPOSITION_OFFSET UNITYSDK_OFFSET(0x90F9C80)
#define RPG_CLIENT_AUDIOMANAGER_GETPLAYINGINFOBYPLAYINGID_OFFSET UNITYSDK_OFFSET(0x90F9BB0)
#define RPG_CLIENT_AUDIOMANAGER_GETPROPSOUNDOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x90FC9A0)
#define RPG_CLIENT_AUDIOMANAGER_GETUIBUTTONSOUNDEVENTBYTYPE_OFFSET UNITYSDK_OFFSET(0x90FA360)
#define RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMFLOORGROUP_OFFSET UNITYSDK_OFFSET(0x90FE960)
#define RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMFLOORSTATE_OFFSET UNITYSDK_OFFSET(0x90FE980)
#define RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMWORLDSTATE_OFFSET UNITYSDK_OFFSET(0x90FE940)
#define RPG_CLIENT_AUDIOMANAGER_GET_AUDIOPLAYINGCACHEDATA_OFFSET UNITYSDK_OFFSET(0x90FE920)
#define RPG_CLIENT_AUDIOMANAGER_GET_BGMEVENTID_OFFSET UNITYSDK_OFFSET(0x90FE830)
#define RPG_CLIENT_AUDIOMANAGER_GET_BGMGAMEMODE_OFFSET UNITYSDK_OFFSET(0x90FE850)
#define RPG_CLIENT_AUDIOMANAGER_GET_BGMVOLUME_OFFSET UNITYSDK_OFFSET(0x90FE8E0)
#define RPG_CLIENT_AUDIOMANAGER_GET_CANSETMUTEONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x90F1870)
#define RPG_CLIENT_AUDIOMANAGER_GET_DEFAULTEMITTEROBJECT_OFFSET UNITYSDK_OFFSET(0x90F8B70)
#define RPG_CLIENT_AUDIOMANAGER_GET_ISBGMMUTE_OFFSET UNITYSDK_OFFSET(0x90FE870)
#define RPG_CLIENT_AUDIOMANAGER_GET_ISSFXMUTE_OFFSET UNITYSDK_OFFSET(0x90FE890)
#define RPG_CLIENT_AUDIOMANAGER_GET_ISVOMUTE_OFFSET UNITYSDK_OFFSET(0x90FE8B0)
#define RPG_CLIENT_AUDIOMANAGER_GET_LISTENEROBJECT_OFFSET UNITYSDK_OFFSET(0x90FE820)
#define RPG_CLIENT_AUDIOMANAGER_GET_MASTERVOLUME_OFFSET UNITYSDK_OFFSET(0x90FE8D0)
#define RPG_CLIENT_AUDIOMANAGER_GET_SFXVOLUME_OFFSET UNITYSDK_OFFSET(0x90FE8F0)
#define RPG_CLIENT_AUDIOMANAGER_GET_SPEAKERMODE_OFFSET UNITYSDK_OFFSET(0x90FE910)
#define RPG_CLIENT_AUDIOMANAGER_GET_USEPCKMODE_OFFSET UNITYSDK_OFFSET(0x90FE930)
#define RPG_CLIENT_AUDIOMANAGER_GET_VOVOLUME_OFFSET UNITYSDK_OFFSET(0x90FE900)
#define RPG_CLIENT_AUDIOMANAGER_INITGAMEPCKSDEV_OFFSET UNITYSDK_OFFSET(0x90F4560)
#define RPG_CLIENT_AUDIOMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x90F2140)
#define RPG_CLIENT_AUDIOMANAGER_ISAUDIODOWNLOADED_OFFSET UNITYSDK_OFFSET(0x90FA3D0)
#define RPG_CLIENT_AUDIOMANAGER_ISAUDIOPARTIALDOWNLOADED_OFFSET UNITYSDK_OFFSET(0x9100F90)
#define RPG_CLIENT_AUDIOMANAGER_ISEVENTEXISTINPCK_OFFSET UNITYSDK_OFFSET(0x90FAE60)
#define RPG_CLIENT_AUDIOMANAGER_ISEVENTINCD_OFFSET UNITYSDK_OFFSET(0x90FB050)
#define RPG_CLIENT_AUDIOMANAGER_ISEVENTPENDING_OFFSET UNITYSDK_OFFSET(0x90F8930)
#define RPG_CLIENT_AUDIOMANAGER_ISEVENTPLAYING_OFFSET UNITYSDK_OFFSET(0x90F88D0)
#define RPG_CLIENT_AUDIOMANAGER_ISLOCALLANGDIREXIST_OFFSET UNITYSDK_OFFSET(0x90FF8C0)
#define RPG_CLIENT_AUDIOMANAGER_ISSOUNDEVENTMARKER_OFFSET UNITYSDK_OFFSET(0x90F07E0)
#define RPG_CLIENT_AUDIOMANAGER_LOADINITGAMEPCKS_OFFSET UNITYSDK_OFFSET(0x90F4BD0)
#define RPG_CLIENT_AUDIOMANAGER_MUTEALLAUDIOOFGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x90FCAC0)
#define RPG_CLIENT_AUDIOMANAGER_ONAUDIODOWLOADSUCCEED_OFFSET UNITYSDK_OFFSET(0x9100330)
#define RPG_CLIENT_AUDIOMANAGER_ONAUDIODOWNLOADFAILED_OFFSET UNITYSDK_OFFSET(0x9100480)
#define RPG_CLIENT_AUDIOMANAGER_ONAUDIOSIZEFAIL_OFFSET UNITYSDK_OFFSET(0x91007E0)
#define RPG_CLIENT_AUDIOMANAGER_ONAUDIOSIZESUCCESS_OFFSET UNITYSDK_OFFSET(0x91005A0)
#define RPG_CLIENT_AUDIOMANAGER_PAUSEBGM_OFFSET UNITYSDK_OFFSET(0x90F6E90)
#define RPG_CLIENT_AUDIOMANAGER_PAUSEEVENTID_OFFSET UNITYSDK_OFFSET(0x90F97F0)
#define RPG_CLIENT_AUDIOMANAGER_PAUSEEVENT_OFFSET UNITYSDK_OFFSET(0x90F9060)
#define RPG_CLIENT_AUDIOMANAGER_PAUSESOUNDINBATTLE_OFFSET UNITYSDK_OFFSET(0x90F7470)
#define RPG_CLIENT_AUDIOMANAGER_PAUSESOUNDINCUTSCENE_OFFSET UNITYSDK_OFFSET(0x90F7030)
#define RPG_CLIENT_AUDIOMANAGER_PAUSEVOICE_OFFSET UNITYSDK_OFFSET(0x90FC3C0)
#define RPG_CLIENT_AUDIOMANAGER_PAUSE_OFFSET UNITYSDK_OFFSET(0x90FFDD0)
#define RPG_CLIENT_AUDIOMANAGER_PLAYUICHARACTERVO_1_OFFSET UNITYSDK_OFFSET(0x90FCE60)
#define RPG_CLIENT_AUDIOMANAGER_PLAYUICHARACTERVO_OFFSET UNITYSDK_OFFSET(0x90FCD50)
#define RPG_CLIENT_AUDIOMANAGER_POSTATONCE_OFFSET UNITYSDK_OFFSET(0x90F56F0)
#define RPG_CLIENT_AUDIOMANAGER_POSTBGM_OFFSET UNITYSDK_OFFSET(0x90F4350)
#define RPG_CLIENT_AUDIOMANAGER_POSTEVENTWITHBEGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x90F4E30)
#define RPG_CLIENT_AUDIOMANAGER_POSTEVENT_OFFSET UNITYSDK_OFFSET(0x90F44D0)
#define RPG_CLIENT_AUDIOMANAGER_POSTEXTERNALSOURCE_OFFSET UNITYSDK_OFFSET(0x90F51E0)
#define RPG_CLIENT_AUDIOMANAGER_POSTLOOPSFX_OFFSET UNITYSDK_OFFSET(0x90F63E0)
#define RPG_CLIENT_AUDIOMANAGER_POSTSFX_OFFSET UNITYSDK_OFFSET(0x90F6110)
#define RPG_CLIENT_AUDIOMANAGER_POSTVOICE_OFFSET UNITYSDK_OFFSET(0x90F5A10)
#define RPG_CLIENT_AUDIOMANAGER_PREPAREAUDIODOWNLOADDATA_OFFSET UNITYSDK_OFFSET(0x90FECC0)
#define RPG_CLIENT_AUDIOMANAGER_PREPAREDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x90FF9C0)
#define RPG_CLIENT_AUDIOMANAGER_REFRESHVIBRATIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x90FB850)
#define RPG_CLIENT_AUDIOMANAGER_RELOADALLFULLPCKS_OFFSET UNITYSDK_OFFSET(0x90F4A90)
#define RPG_CLIENT_AUDIOMANAGER_RELOADVOBANKS_OFFSET UNITYSDK_OFFSET(0x90FA110)
#define RPG_CLIENT_AUDIOMANAGER_REMOVESCOPELIMITEDTARGET_OFFSET UNITYSDK_OFFSET(0x90F0E20)
#define RPG_CLIENT_AUDIOMANAGER_REMOVEVOICETARGET_OFFSET UNITYSDK_OFFSET(0x90F60B0)
#define RPG_CLIENT_AUDIOMANAGER_RESETLISTNERMODE_OFFSET UNITYSDK_OFFSET(0x90F8640)
#define RPG_CLIENT_AUDIOMANAGER_RESETSOUNDENGINE_OFFSET UNITYSDK_OFFSET(0x90F4200)
#define RPG_CLIENT_AUDIOMANAGER_RESETUILISTNERMODE_OFFSET UNITYSDK_OFFSET(0x90F85D0)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEBGM_OFFSET UNITYSDK_OFFSET(0x90F6F60)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x9100D50)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEEVENTID_OFFSET UNITYSDK_OFFSET(0x90F98B0)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEEVENT_OFFSET UNITYSDK_OFFSET(0x90F9230)
#define RPG_CLIENT_AUDIOMANAGER_RESUMESOUNDINBATTLE_OFFSET UNITYSDK_OFFSET(0x90F7600)
#define RPG_CLIENT_AUDIOMANAGER_RESUMESOUNDINCUTSCENE_OFFSET UNITYSDK_OFFSET(0x90F7250)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEVOICE_OFFSET UNITYSDK_OFFSET(0x90FC4E0)
#define RPG_CLIENT_AUDIOMANAGER_RESUME_OFFSET UNITYSDK_OFFSET(0x90FFE30)
#define RPG_CLIENT_AUDIOMANAGER_SAVEVOLUME_OFFSET UNITYSDK_OFFSET(0x90FBAC0)
#define RPG_CLIENT_AUDIOMANAGER_SEEKONBGM_OFFSET UNITYSDK_OFFSET(0x90F6970)
#define RPG_CLIENT_AUDIOMANAGER_SEEKONEVENTID_1_OFFSET UNITYSDK_OFFSET(0x90F9DD0)
#define RPG_CLIENT_AUDIOMANAGER_SEEKONEVENTID_OFFSET UNITYSDK_OFFSET(0x90F69D0)
#define RPG_CLIENT_AUDIOMANAGER_SETBGMGAMESTATE_OFFSET UNITYSDK_OFFSET(0x90F8BF0)
#define RPG_CLIENT_AUDIOMANAGER_SETBGMVOLUME_OFFSET UNITYSDK_OFFSET(0x90FA4B0)
#define RPG_CLIENT_AUDIOMANAGER_SETEXCLUDEVOICEMUTE_OFFSET UNITYSDK_OFFSET(0x90F6E40)
#define RPG_CLIENT_AUDIOMANAGER_SETISMUTEONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x90FC800)
#define RPG_CLIENT_AUDIOMANAGER_SETLANGUAGE_OFFSET UNITYSDK_OFFSET(0x90F3990)
#define RPG_CLIENT_AUDIOMANAGER_SETLISTNERMODE_OFFSET UNITYSDK_OFFSET(0x90F8360)
#define RPG_CLIENT_AUDIOMANAGER_SETMASTERVOLUME_OFFSET UNITYSDK_OFFSET(0x90FA460)
#define RPG_CLIENT_AUDIOMANAGER_SETMOTION_OFFSET UNITYSDK_OFFSET(0x90FB4A0)
#define RPG_CLIENT_AUDIOMANAGER_SETMUTEBGM_OFFSET UNITYSDK_OFFSET(0x90F6AC0)
#define RPG_CLIENT_AUDIOMANAGER_SETMUTESFX_OFFSET UNITYSDK_OFFSET(0x90F6C20)
#define RPG_CLIENT_AUDIOMANAGER_SETMUTEVO_OFFSET UNITYSDK_OFFSET(0x90F6D30)
#define RPG_CLIENT_AUDIOMANAGER_SETSFXVOLUME_OFFSET UNITYSDK_OFFSET(0x90FA540)
#define RPG_CLIENT_AUDIOMANAGER_SETSPEAKERMODE_OFFSET UNITYSDK_OFFSET(0x90FA660)
#define RPG_CLIENT_AUDIOMANAGER_SETSTATE_1_OFFSET UNITYSDK_OFFSET(0x90FFA60)
#define RPG_CLIENT_AUDIOMANAGER_SETSTATE_OFFSET UNITYSDK_OFFSET(0x90F1D70)
#define RPG_CLIENT_AUDIOMANAGER_SETSWITCH_OFFSET UNITYSDK_OFFSET(0x90F9EC0)
#define RPG_CLIENT_AUDIOMANAGER_SETUILISTNERMODE_OFFSET UNITYSDK_OFFSET(0x90F82B0)
#define RPG_CLIENT_AUDIOMANAGER_SETVIBRATIONINTENSITYACTIVE_OFFSET UNITYSDK_OFFSET(0x90FB9C0)
#define RPG_CLIENT_AUDIOMANAGER_SETVOVOLUME_OFFSET UNITYSDK_OFFSET(0x90FA5D0)
#define RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMFLOORGROUP_OFFSET UNITYSDK_OFFSET(0x90FE970)
#define RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMFLOORSTATE_OFFSET UNITYSDK_OFFSET(0x90FE990)
#define RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMWORLDSTATE_OFFSET UNITYSDK_OFFSET(0x90FE950)
#define RPG_CLIENT_AUDIOMANAGER_SET_BGMEVENTID_OFFSET UNITYSDK_OFFSET(0x90FE840)
#define RPG_CLIENT_AUDIOMANAGER_SET_BGMGAMEMODE_OFFSET UNITYSDK_OFFSET(0x90FE860)
#define RPG_CLIENT_AUDIOMANAGER_SET_BGMVOLUME_OFFSET UNITYSDK_OFFSET(0x90F3D30)
#define RPG_CLIENT_AUDIOMANAGER_SET_ISBGMMUTE_OFFSET UNITYSDK_OFFSET(0x90FE880)
#define RPG_CLIENT_AUDIOMANAGER_SET_ISSFXMUTE_OFFSET UNITYSDK_OFFSET(0x90FE8A0)
#define RPG_CLIENT_AUDIOMANAGER_SET_ISVOMUTE_OFFSET UNITYSDK_OFFSET(0x90FE8C0)
#define RPG_CLIENT_AUDIOMANAGER_SET_MASTERVOLUME_OFFSET UNITYSDK_OFFSET(0x90F3B80)
#define RPG_CLIENT_AUDIOMANAGER_SET_SFXVOLUME_OFFSET UNITYSDK_OFFSET(0x90F3E10)
#define RPG_CLIENT_AUDIOMANAGER_SET_SPEAKERMODE_OFFSET UNITYSDK_OFFSET(0x90F4020)
#define RPG_CLIENT_AUDIOMANAGER_SET_VOVOLUME_OFFSET UNITYSDK_OFFSET(0x90F3EF0)
#define RPG_CLIENT_AUDIOMANAGER_SHOWSIZE_OFFSET UNITYSDK_OFFSET(0x90FEB30)
#define RPG_CLIENT_AUDIOMANAGER_STARTDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x90FFE90)
#define RPG_CLIENT_AUDIOMANAGER_STOPALLLOOPSFX_OFFSET UNITYSDK_OFFSET(0x90F6810)
#define RPG_CLIENT_AUDIOMANAGER_STOPDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x9100B40)
#define RPG_CLIENT_AUDIOMANAGER_STOPEVENTID_OFFSET UNITYSDK_OFFSET(0x90F66B0)
#define RPG_CLIENT_AUDIOMANAGER_STOPEVENTSBYEVENTNAME_OFFSET UNITYSDK_OFFSET(0x90F9970)
#define RPG_CLIENT_AUDIOMANAGER_STOPEVENT_OFFSET UNITYSDK_OFFSET(0x90F93C0)
#define RPG_CLIENT_AUDIOMANAGER_STOPLOOPSFX_OFFSET UNITYSDK_OFFSET(0x90F65D0)
#define RPG_CLIENT_AUDIOMANAGER_TICKDYNAMICLISTENER_OFFSET UNITYSDK_OFFSET(0x90F7780)
#define RPG_CLIENT_AUDIOMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x90F1EE0)
#define RPG_CLIENT_AUDIOMANAGER_TRYGETPLAYINGEVENTPOSITION_OFFSET UNITYSDK_OFFSET(0x90F9D40)
#define RPG_CLIENT_AUDIOMANAGER_TRYPLAYJOINTEAMCHARACTERVO_OFFSET UNITYSDK_OFFSET(0x90FC600)
#define RPG_CLIENT_AUDIOMANAGER_TRYSTOPJOINTEAMCHARACTERVO_OFFSET UNITYSDK_OFFSET(0x90FC750)
#define RPG_CLIENT_AUDIOMANAGER_UNLOADINITGAMEPCKS_OFFSET UNITYSDK_OFFSET(0x90F4DC0)
#define RPG_CLIENT_AUDIOMANAGER_UNLOADMININUMBANK_OFFSET UNITYSDK_OFFSET(0x90F49A0)
#define RPG_CLIENT_AUDIOMANAGER_UNLOADUNUSEDMISSIONPCKS_OFFSET UNITYSDK_OFFSET(0x90FCCA0)
#define RPG_CLIENT_AUDIOMANAGER_UNMUTEALLAUDIOOFGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x90FCC00)
#define RPG_CLIENT_AUDIOMANAGER_UPDATEAUDIODOWNLOADSTATE_OFFSET UNITYSDK_OFFSET(0x90FF390)
#define RPG_CLIENT_AUDIOMANAGER_UPDATEPARTIALDOWNLOADLANG_OFFSET UNITYSDK_OFFSET(0x91008C0)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__245_0_OFFSET UNITYSDK_OFFSET(0x91021B0)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__245_1_OFFSET UNITYSDK_OFFSET(0x91021C0)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__245_2_OFFSET UNITYSDK_OFFSET(0x91021D0)
#define RPG_CLIENT_AUDIOMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x91021A0)
#define RPG_CLIENT_AUDIOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x91019A0)
#define RPG_CLIENT_AUDIOMANAGER__DEBUGADD_OFFSET UNITYSDK_OFFSET(0x90F11E0)
#define RPG_CLIENT_AUDIOMANAGER__DEBUGREMOVE_OFFSET UNITYSDK_OFFSET(0x90F1280)
#define RPG_CLIENT_AUDIOMANAGER__DOPOST_OFFSET UNITYSDK_OFFSET(0x90FD130)
#define RPG_CLIENT_AUDIOMANAGER__DOWNLOADDISPOSE_OFFSET UNITYSDK_OFFSET(0x90F1900)
#define RPG_CLIENT_AUDIOMANAGER__GETNEEDBANKS_OFFSET UNITYSDK_OFFSET(0x90FD030)
#define RPG_CLIENT_AUDIOMANAGER__GETSFXEVENTNAME_OFFSET UNITYSDK_OFFSET(0x90F62B0)
#define RPG_CLIENT_AUDIOMANAGER__GETTEAMCHARACTERVOPLAYER_OFFSET UNITYSDK_OFFSET(0x90FC670)
#define RPG_CLIENT_AUDIOMANAGER__GETVOICEEVENTNAME_OFFSET UNITYSDK_OFFSET(0x90F5CA0)
#define RPG_CLIENT_AUDIOMANAGER__INITLISTENER_OFFSET UNITYSDK_OFFSET(0x90F3090)
#define RPG_CLIENT_AUDIOMANAGER__INITUIBUTTONSOUNDTYPESTRINGCACHE_OFFSET UNITYSDK_OFFSET(0x90F33B0)
#define RPG_CLIENT_AUDIOMANAGER__LOADAUDIOCONFIG_OFFSET UNITYSDK_OFFSET(0x90F2FD0)
#define RPG_CLIENT_AUDIOMANAGER__LOADINITBANKCALLBACK_OFFSET UNITYSDK_OFFSET(0x90FDD20)
#define RPG_CLIENT_AUDIOMANAGER__ONANDROIDHEADSETBLUETOOTHPERMISSIONREQUESTRESULT_OFFSET UNITYSDK_OFFSET(0x90FE2D0)
#define RPG_CLIENT_AUDIOMANAGER__ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x90FE670)
#define RPG_CLIENT_AUDIOMANAGER__ONINPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0x90FE200)
#define RPG_CLIENT_AUDIOMANAGER__ONSDKNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x90FE350)
#define RPG_CLIENT_AUDIOMANAGER__POSTAFTERBANKPREPARED_OFFSET UNITYSDK_OFFSET(0x90F4EE0)
#define RPG_CLIENT_AUDIOMANAGER__POSTATONCE_OFFSET UNITYSDK_OFFSET(0x90F5780)
#define RPG_CLIENT_AUDIOMANAGER__POSTCALLBACK_OFFSET UNITYSDK_OFFSET(0x90FD640)
#define RPG_CLIENT_AUDIOMANAGER__PRELOADEVENT_OFFSET UNITYSDK_OFFSET(0x90F4760)
#define RPG_CLIENT_AUDIOMANAGER__RAYCASTOCCLUSION_OFFSET UNITYSDK_OFFSET(0x90FA9C0)
#define RPG_CLIENT_AUDIOMANAGER__REFRESHVIBRATIONLEVEL_OFFSET UNITYSDK_OFFSET(0x90FB720)
#define RPG_CLIENT_AUDIOMANAGER__REMOVESOUNDBANKUSAGE_OFFSET UNITYSDK_OFFSET(0x90F9750)
#define RPG_CLIENT_AUDIOMANAGER__SETEVENTCD_OFFSET UNITYSDK_OFFSET(0x90FB330)
#define RPG_CLIENT_AUDIOMANAGER__SETINNERSTATE_OFFSET UNITYSDK_OFFSET(0x90F1820)
#define RPG_CLIENT_AUDIOMANAGER__TICKLISTENERCAMERAWITHDIST_OFFSET UNITYSDK_OFFSET(0x90F7C10)
#define RPG_CLIENT_AUDIOMANAGER__TICKLISTENERCAMERA_OFFSET UNITYSDK_OFFSET(0x90F7A50)
#define RPG_CLIENT_AUDIOMANAGER__TICKLISTENERFOLLOWINGWITHDIRECT_OFFSET UNITYSDK_OFFSET(0x90F8140)
#define RPG_CLIENT_AUDIOMANAGER__TICKLISTENERFOLLOWING_OFFSET UNITYSDK_OFFSET(0x90F7870)
#define RPG_CLIENT_AUDIOMANAGER__TICKMUSICVISUALIZE_OFFSET UNITYSDK_OFFSET(0x90F0B20)
#define RPG_CLIENT_AUDIOMANAGER__TICKPENDINGEVENTS_OFFSET UNITYSDK_OFFSET(0x90F2020)
#define RPG_CLIENT_AUDIOMANAGER__TICKPENDINGEVENT_OFFSET UNITYSDK_OFFSET(0x90FD420)
#define RPG_CLIENT_AUDIOMANAGER__TICKSCOPELIMIT_OFFSET UNITYSDK_OFFSET(0x90F0F80)
#define RPG_CLIENT_AUDIOMANAGER__UNLOADBANKCALLBACK_OFFSET UNITYSDK_OFFSET(0x90FDF90)
#define RPG_CLIENT_AUDIOMANAGER__UPDATEAUDIOLISTENERMODE_OFFSET UNITYSDK_OFFSET(0x90F8760)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager_TypeDefinitionIndex = 48357;

	class AudioManager : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_MAX_AUDIO_VOLUME()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AudioManager_TypeDefinitionIndex)->GetStaticField(0x9F30);
		}
		::AkCallbackManager_EventCallback* _PostCallBackAction; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* reverseDict; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::AudioLanguageItem*>* items; // 0x20
		::System::Collections::Generic::CacheLinkedList_1<::Class_1_239D87D7563FF971*>* _PendingAudioEvents; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::AudioLanguageItem*>* languageItems; // 0x30
		::Class_1_8D0E66DD979ED13D* SoundBankLookUpData; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _PreLoadBanks; // 0x40
		::System::String* _AdventureBGMFloorGroup_k__BackingField; // 0x48
		::System::String* s_DefaultListenerName; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _LoopSFXPlayingIds; // 0x58
		::RPG::GameCore::AudioConfig* AudioConfig; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _VoiceTypeExternalEventDict; // 0x68
		::Class_1_58B161F85B3D684E* audioLangSizeLoader; // 0x70
		::System::Action* audioSizeFailCb; // 0x78
		::RPG::Client::AudioManager_AudioListenerInfo* _ListenerInfo; // 0x80
		::System::String* s_ExternalSourceFormat; // 0x88
		::Il2CppArray<::UnityEngine::RaycastHit>* _OcclusionHitInfos; // 0x90
		::Class_1_033D34C575E1323A* _AudioPlayingCacheData_k__BackingField; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt64>* EventCDDict; // 0xA0
		::Class_1_2B525158BC356FC8* _PckMgr; // 0xA8
		::System::Collections::Generic::List_1<::RPG::Client::AudioManager_ScopeLimitInstance*>* _LimitedInstanceList; // 0xB0
		::System::Collections::Generic::Stack_1<::RPG::GameCore::AudioGameState>* _BGMGameStateStack; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* audioDict; // 0xC0
		::System::String* DownLoadAudioKey; // 0xC8
		::Class_1_6C462A2E579389F9* updateOneAudioLangAsset; // 0xD0
		::System::String* _AdventureBGMWorldState_k__BackingField; // 0xD8
		::Class_1_ABB37ED06833DBC5* _SoundBankTicker; // 0xE0
		::System::Collections::Generic::List_1<::RPG::Client::AudioManager_AudioListenerInfo*>* _AudioListenerInfoList; // 0xE8
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MusicVisualizeDataSourceType, ::Class_1_FBA2F7F034B595FB*>* _MusicVisualzieDataDict; // 0xF0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::UIButtonSoundType, ::System::String*>* _UIButtonSoundTypeStringCache; // 0xF8
		::System::Action* audioSizeSuccessCb; // 0x100
		::System::Collections::Generic::HashSet_1<::System::Int32>* _WillMuteGameObjectIDs; // 0x108
		::System::String* _AdventureBGMFloorState_k__BackingField; // 0x110
		::RPG::GameCore::PropSoundOverrideConfig* _PropSoundOverrideConfig; // 0x118
		::System::Collections::Generic::HashSet_1<::System::String*>* partialDownloadedLanguage; // 0x120
		::System::Collections::Generic::HashSet_1<::System::String*>* downloadedLanguage; // 0x128
		::UnityEngine::GameObject* _ListenerObject; // 0x130
		::Class_1_83BDA5F3F46879EA* _TeamCharacterVOPlayer; // 0x138
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::GameObject*>* _VoiceTargets; // 0x140
		::RPG::GameCore::JukeBoxMusicTimesConfig* JukeBoxConfig; // 0x148
		::System::Boolean ShowSizeState; // 0x150
		::System::Boolean _IsVOMute_k__BackingField; // 0x151
		::System::Boolean isDownloading; // 0x152
		::System::Boolean _IsMuteOnLostFocus; // 0x153
		::RPG::GameCore::AudioGameState _BGMGameMode_k__BackingField; // 0x154
		::System::UInt32 _BGMEventID_k__BackingField; // 0x158
		::System::UInt32 _SFXVolume; // 0x15C
		::System::Single _ScopeLimitTickInterval; // 0x160
		::RPG::Client::AudioManager_InnerState _InnerState; // 0x164
		::RPG::Client::AudioManager_AudioDownloadState downloadState; // 0x168
		::System::Single s_LoadSoundBankProtectTime; // 0x16C
		::RPG::Client::AudioSettings_SpeakerModeType _SpeakerMode; // 0x170
		::System::Single _ScopeLimitTickCooldown; // 0x174
		::System::UInt32 _BGMVolume; // 0x178
		::System::Boolean _IsSFXMute_k__BackingField; // 0x17C
		::System::Boolean _ExcludeVoiceMute; // 0x17D
		::System::Boolean _IsResourceLoaded; // 0x17E
		::System::Boolean _IsUsingMiniBank; // 0x17F
		::System::Boolean _IsBGMMute_k__BackingField; // 0x180
		::System::Boolean ShowSizeDirty; // 0x181
		::System::Boolean _UsePckMode; // 0x182
		::System::UInt32 _MasterVolume; // 0x184
		::System::UInt32 _VOVolume; // 0x188
		::System::UInt64 _CurrentOutputID; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean IsSoundEventMarker(::AkMarkerCallbackInfo* markerInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::AkMarkerCallbackInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISSOUNDEVENTMARKER_OFFSET))(this, markerInfo);
		}

		::Class_1_FBA2F7F034B595FB* GetMusicVisualizeData(::RPG::Client::MusicVisualizeDataSourceType type)
		{
			return ((::Class_1_FBA2F7F034B595FB*(*)(::PVOID, ::RPG::Client::MusicVisualizeDataSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETMUSICVISUALIZEDATA_OFFSET))(this, type);
		}

		::System::Void _TickMusicVisualize(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKMUSICVISUALIZE_OFFSET))(this, deltaTime);
		}

		::System::Void AddScopeLimitedTarget(::Class_0_16E4307DCC419505_486* target)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_486*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ADDSCOPELIMITEDTARGET_OFFSET))(this, target);
		}

		::System::Void RemoveScopeLimitedTarget(::Class_0_16E4307DCC419505_486* target)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_486*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_REMOVESCOPELIMITEDTARGET_OFFSET))(this, target);
		}

		::System::Void _TickScopeLimit(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKSCOPELIMIT_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _DebugAdd(::Class_0_16E4307DCC419505_486* target)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_486*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__DEBUGADD_OFFSET))(this, target);
		}

		::System::Void _DebugRemove(::Class_0_16E4307DCC419505_486* target)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_486*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__DEBUGREMOVE_OFFSET))(this, target);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void BeforeRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_BEFORERESTART_OFFSET))(this);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_INIT_OFFSET))(this);
		}

		::System::Void ResetSoundEngine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESETSOUNDENGINE_OFFSET))(this);
		}

		::System::Void PostBGM(::System::Boolean isStart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTBGM_OFFSET))(this, isStart);
		}

		::System::Void InitGamePcksDev()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_INITGAMEPCKSDEV_OFFSET))(this);
		}

		::System::Void ReloadAllFullPcks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RELOADALLFULLPCKS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* AsyncLoadInitGamePcks(::System::Action* onLoaded)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ASYNCLOADINITGAMEPCKS_OFFSET))(this, onLoaded);
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

		::System::UInt32 PostEventWithBeginCallback(::System::String* eventName, ::UnityEngine::GameObject* emitter, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* callbackAction, ::System::Action_1<::System::UInt32>* beginCallBack, ::AkCallbackType callbackType)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::System::Action_1<::System::UInt32>*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTEVENTWITHBEGINCALLBACK_OFFSET))(this, eventName, emitter, callbackAction, beginCallBack, callbackType);
		}

		::System::UInt32 PostEvent(::System::String* eventName, ::UnityEngine::GameObject* emitter, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* callbackAction, ::AkCallbackType callbackType)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTEVENT_OFFSET))(this, eventName, emitter, callbackAction, callbackType);
		}

		::System::UInt32 PostExternalSource(::System::String* eventName, ::AkExternalSourceInfoArray* externalInfo, ::UnityEngine::GameObject* emitter, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* callbackAction)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::AkExternalSourceInfoArray*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTEXTERNALSOURCE_OFFSET))(this, eventName, externalInfo, emitter, callbackAction);
		}

		::AkExternalSourceInfoArray* GetExternalSourceInfo(::System::String* externalSourceName, ::System::Boolean isVO, ::System::String* audioLanguage)
		{
			return ((::AkExternalSourceInfoArray*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETEXTERNALSOURCEINFO_OFFSET))(this, externalSourceName, isVO, audioLanguage);
		}

		::System::UInt32 PostAtOnce(::System::String* eventName, ::UnityEngine::GameObject* gameObj, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* callbackAction, ::AkCallbackType callbackType)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTATONCE_OFFSET))(this, eventName, gameObj, callbackAction, callbackType);
		}

		::System::UInt32 PostVoice(::System::UInt32 voiceID, ::UnityEngine::GameObject* speaker, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* endCallback, ::System::Action_1<::System::UInt32>* beginCallBack, ::AkCallbackType callbackType, ::System::String* audioLanguage)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::System::Action_1<::System::UInt32>*, ::AkCallbackType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTVOICE_OFFSET))(this, voiceID, speaker, endCallback, beginCallBack, callbackType, audioLanguage);
		}

		::System::Void AddVoiceTarget(::System::UInt32 voiceID, ::UnityEngine::GameObject* targetGo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ADDVOICETARGET_OFFSET))(this, voiceID, targetGo);
		}

		::System::Void RemoveVoiceTarget(::System::UInt32 voiceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_REMOVEVOICETARGET_OFFSET))(this, voiceID);
		}

		::System::UInt32 PostSFX(::System::UInt32 sfxID, ::UnityEngine::GameObject* speaker, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* endCallback, ::System::Action_1<::System::UInt32>* beginCallBack)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTSFX_OFFSET))(this, sfxID, speaker, endCallback, beginCallBack);
		}

		::System::UInt32 PostLoopSFX(::System::UInt32 sfxID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTLOOPSFX_OFFSET))(this, sfxID);
		}

		::System::Void StopLoopSFX(::System::UInt32 sfxID, ::System::Single transition)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPLOOPSFX_OFFSET))(this, sfxID, transition);
		}

		::System::Void StopAllLoopSFX()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPALLLOOPSFX_OFFSET))(this);
		}

		::System::Void SeekOnBGM(::System::Int32 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SEEKONBGM_OFFSET))(this, position);
		}

		::System::Void SetMuteBGM(::System::Boolean isMute, ::System::Boolean withFadeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETMUTEBGM_OFFSET))(this, isMute, withFadeout);
		}

		::System::Void SetMuteSFX(::System::Boolean isMute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETMUTESFX_OFFSET))(this, isMute);
		}

		::System::Void SetMuteVO(::System::Boolean isMute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETMUTEVO_OFFSET))(this, isMute);
		}

		::System::Void SetExcludeVoiceMute(::System::Boolean excludeVoiceMute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETEXCLUDEVOICEMUTE_OFFSET))(this, excludeVoiceMute);
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

		::System::Void TickDynamicListener(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_TICKDYNAMICLISTENER_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void SetUIListnerMode(::RPG::Client::AudioListenerMode listenerMode, ::UnityEngine::Transform* followTarget, ::System::Single withinDist, ::System::Nullable_1<::UnityEngine::Vector3> offset)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioListenerMode, ::UnityEngine::Transform*, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETUILISTNERMODE_OFFSET))(this, listenerMode, followTarget, withinDist, offset);
		}

		::System::Void ResetUIListnerMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESETUILISTNERMODE_OFFSET))(this);
		}

		::System::Void ResetListnerMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESETLISTNERMODE_OFFSET))(this);
		}

		::System::Void SetListnerMode(::RPG::Client::AudioListenerMode listenerMode, ::UnityEngine::Transform* followTarget, ::System::Single withinDist, ::System::Nullable_1<::UnityEngine::Vector3> offset, ::RPG::Client::AudioListenerType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioListenerMode, ::UnityEngine::Transform*, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>, ::RPG::Client::AudioListenerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETLISTNERMODE_OFFSET))(this, listenerMode, followTarget, withinDist, offset, type);
		}

		::System::Boolean IsEventPlaying(::System::String* eventName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISEVENTPLAYING_OFFSET))(this, eventName);
		}

		::System::Boolean IsEventPending(::System::String* eventName, ::UnityEngine::GameObject* gameObject, ::Class_1_239D87D7563FF971*& audioEventParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_1_239D87D7563FF971*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISEVENTPENDING_OFFSET))(this, eventName, gameObject, audioEventParam);
		}

		::System::Void SetBGMGameState(::RPG::GameCore::AudioGameState gameState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AudioGameState))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETBGMGAMESTATE_OFFSET))(this, gameState);
		}

		::System::Void BackToPreviousBGMGameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_BACKTOPREVIOUSBGMGAMESTATE_OFFSET))(this);
		}

		::System::Void ClearBGMGameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CLEARBGMGAMESTATE_OFFSET))(this);
		}

		::System::Void PauseEvent(::System::String* eventName, ::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSEEVENT_OFFSET))(this, eventName, obj);
		}

		::System::Void ResumeEvent(::System::String* eventName, ::UnityEngine::GameObject* obj, ::System::Single transitionDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMEEVENT_OFFSET))(this, eventName, obj, transitionDuration);
		}

		::System::Void BreakEvent(::System::String* eventName, ::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_BREAKEVENT_OFFSET))(this, eventName, obj);
		}

		::System::Void StopEvent(::System::String* eventName, ::UnityEngine::GameObject* obj, ::System::Single transitionDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPEVENT_OFFSET))(this, eventName, obj, transitionDuration);
		}

		::System::Void StopEventID(::System::UInt32 eventID, ::System::Single transitionDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPEVENTID_OFFSET))(this, eventID, transitionDuration);
		}

		::System::Void PauseEventID(::System::UInt32 eventID, ::System::Single transitionDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSEEVENTID_OFFSET))(this, eventID, transitionDuration);
		}

		::System::Void ResumeEventID(::System::UInt32 eventID, ::System::Single transitionDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMEEVENTID_OFFSET))(this, eventID, transitionDuration);
		}

		::System::Void StopEventsByEventName(::System::String* eventName, ::System::Single transitionDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPEVENTSBYEVENTNAME_OFFSET))(this, eventName, transitionDuration);
		}

		::System::Void GameobjectSoundFade(::System::Boolean isFadeOut, ::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GAMEOBJECTSOUNDFADE_OFFSET))(this, isFadeOut, obj);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEventIDListByEventName(::System::String* eventName)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETEVENTIDLISTBYEVENTNAME_OFFSET))(this, eventName);
		}

		::Class_1_253F4BEA35E6A1BB* GetPlayingInfoByPlayingID(::System::UInt32 playingID)
		{
			return ((::Class_1_253F4BEA35E6A1BB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPLAYINGINFOBYPLAYINGID_OFFSET))(this, playingID);
		}

		::System::Int32 GetPlayingEventPositionByEventName(::System::String* eventName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPLAYINGEVENTPOSITIONBYEVENTNAME_OFFSET))(this, eventName);
		}

		::System::Boolean TryGetPlayingEventPosition(::System::UInt32 eventID, ::System::Int32& position)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_TRYGETPLAYINGEVENTPOSITION_OFFSET))(this, eventID, position);
		}

		::System::Int32 GetPlayingEventPosition(::System::UInt32 eventID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPLAYINGEVENTPOSITION_OFFSET))(this, eventID);
		}

		::System::Void SeekOnEventID(::System::UInt32 eventID, ::System::Int32 targetPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SEEKONEVENTID_OFFSET))(this, eventID, targetPosition);
		}

		::System::Void SeekOnEventID_1(::System::UInt32 eventID, ::System::Single targetPercent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SEEKONEVENTID_1_OFFSET))(this, eventID, targetPercent);
		}

		::System::Boolean SetSwitch(::System::String* switchGroupName, ::System::String* switchName, ::UnityEngine::GameObject* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETSWITCH_OFFSET))(this, switchGroupName, switchName, obj);
		}

		::System::Boolean SetState(::System::String* stateGroupName, ::System::String* stateName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETSTATE_OFFSET))(this, stateGroupName, stateName);
		}

		::System::Void ReloadVoBanks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RELOADVOBANKS_OFFSET))(this);
		}

		::System::String* GetUIButtonSoundEventByType(::RPG::Client::UIButtonSoundType sountType)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::UIButtonSoundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETUIBUTTONSOUNDEVENTBYTYPE_OFFSET))(this, sountType);
		}

		::System::Void SetLanguage(::System::String* audioLanguageKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETLANGUAGE_OFFSET))(this, audioLanguageKey);
		}

		::System::Void SetMasterVolume(::System::UInt32 volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETMASTERVOLUME_OFFSET))(this, volume);
		}

		::System::Void SetBGMVolume(::System::UInt32 volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETBGMVOLUME_OFFSET))(this, volume);
		}

		::System::Void SetSFXVolume(::System::UInt32 volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETSFXVOLUME_OFFSET))(this, volume);
		}

		::System::Void SetVOVolume(::System::UInt32 volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETVOVOLUME_OFFSET))(this, volume);
		}

		::System::Void SetSpeakerMode(::RPG::Client::AudioSettings_SpeakerModeType speakerMode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioSettings_SpeakerModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETSPEAKERMODE_OFFSET))(this, speakerMode);
		}

		::System::Single CheckEmitterHasOcclusion(::UnityEngine::Transform* emitterTrans)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CHECKEMITTERHASOCCLUSION_OFFSET))(this, emitterTrans);
		}

		::System::Boolean IsEventExistInPck(::System::String* eventName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISEVENTEXISTINPCK_OFFSET))(this, eventName);
		}

		::System::Int32 GetJukeBoxMusicTime(::System::String* switchName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETJUKEBOXMUSICTIME_OFFSET))(this, switchName);
		}

		::System::Boolean IsEventInCD(::System::String* eventName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISEVENTINCD_OFFSET))(this, eventName);
		}

		::System::Boolean CanPostEventInCD(::System::String* eventName, ::System::Single cd)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CANPOSTEVENTINCD_OFFSET))(this, eventName, cd);
		}

		::System::Void SetMotion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETMOTION_OFFSET))(this);
		}

		::System::Void RefreshVibrationIntensity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_REFRESHVIBRATIONINTENSITY_OFFSET))(this);
		}

		::System::Void SetVibrationIntensityActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETVIBRATIONINTENSITYACTIVE_OFFSET))(this, isActive);
		}

		::System::Void SaveVolume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SAVEVOLUME_OFFSET))(this);
		}

		::System::Void PauseVoice(::System::UInt32 voiceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSEVOICE_OFFSET))(this, voiceID);
		}

		::System::Void ResumeVoice(::System::UInt32 voiceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMEVOICE_OFFSET))(this, voiceID);
		}

		::System::Void TryPlayJoinTeamCharacterVO(::RPG::Client::IAvatarInfoProvider* avatar, ::RPG::Client::TeamData* teamData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_TRYPLAYJOINTEAMCHARACTERVO_OFFSET))(this, avatar, teamData);
		}

		::System::Void TryStopJoinTeamCharacterVO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_TRYSTOPJOINTEAMCHARACTERVO_OFFSET))(this);
		}

		::System::Boolean GetIsMuteOnLostFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETISMUTEONLOSTFOCUS_OFFSET))(this);
		}

		::System::Void SetIsMuteOnLostFocus(::System::Boolean isMute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETISMUTEONLOSTFOCUS_OFFSET))(this, isMute);
		}

		::RPG::GameCore::PropSoundConfigOverrideConfig* GetPropSoundOverrideConfig(::System::UInt32 id)
		{
			return ((::RPG::GameCore::PropSoundConfigOverrideConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPROPSOUNDOVERRIDECONFIG_OFFSET))(this, id);
		}

		::System::Void MuteAllAudioOfGameobject(::UnityEngine::GameObject* emitter)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_MUTEALLAUDIOOFGAMEOBJECT_OFFSET))(this, emitter);
		}

		::System::Void UnmuteAllAudioOfGameobject(::UnityEngine::GameObject* emitter)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_UNMUTEALLAUDIOOFGAMEOBJECT_OFFSET))(this, emitter);
		}

		::System::Void UnloadUnusedMissionPcks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_UNLOADUNUSEDMISSIONPCKS_OFFSET))(this);
		}

		::Class_1_2B525158BC356FC8* GetPckMgr()
		{
			return ((::Class_1_2B525158BC356FC8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPCKMGR_OFFSET))(this);
		}

		::System::Void PlayUICharacterVO(::RPG::GameCore::AdventureCharacterVOType vOType, ::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterVOType, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PLAYUICHARACTERVO_OFFSET))(this, vOType, avatarData);
		}

		::System::Void PlayUICharacterVO_1(::RPG::GameCore::AdventureCharacterVOType vOType, ::System::String* voTag)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterVOType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PLAYUICHARACTERVO_1_OFFSET))(this, vOType, voTag);
		}

		::System::Void _InitListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__INITLISTENER_OFFSET))(this);
		}

		::System::UInt32 _PostAtOnce(::System::String* eventName, ::UnityEngine::GameObject* gameObj, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* callbackAction, ::System::Action_1<::System::UInt32>* beginCallback, ::AkExternalSourceInfoArray* externalInfo, ::AkCallbackType callbackType)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::System::Action_1<::System::UInt32>*, ::AkExternalSourceInfoArray*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__POSTATONCE_OFFSET))(this, eventName, gameObj, callbackAction, beginCallback, externalInfo, callbackType);
		}

		::System::UInt32 _PostAfterBankPrepared(::System::String* eventName, ::UnityEngine::GameObject* gameObj, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* callbackAction, ::AkExternalSourceInfoArray* externalInfo, ::System::Action_1<::System::UInt32>* beginCallBack, ::AkCallbackType callbackType)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::AkExternalSourceInfoArray*, ::System::Action_1<::System::UInt32>*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__POSTAFTERBANKPREPARED_OFFSET))(this, eventName, gameObj, callbackAction, externalInfo, beginCallBack, callbackType);
		}

		::System::Void _TickPendingEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKPENDINGEVENTS_OFFSET))(this);
		}

		::System::Boolean _TickPendingEvent(::Class_1_239D87D7563FF971* audioEventParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_239D87D7563FF971*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKPENDINGEVENT_OFFSET))(this, audioEventParam);
		}

		::System::UInt32 _DoPost(::Class_1_239D87D7563FF971* audioEventParam)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_239D87D7563FF971*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__DOPOST_OFFSET))(this, audioEventParam);
		}

		::System::Void _PostCallback(::System::Object* cbCookie, ::AkCallbackType cbType, ::AkCallbackInfo* cbInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__POSTCALLBACK_OFFSET))(this, cbCookie, cbType, cbInfo);
		}

		::System::Void _LoadInitBankCallback(::System::UInt32 bankID, ::System::IntPtr memoryBankPtr, ::AKRESULT loadResult, ::System::Object* cookie)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__LOADINITBANKCALLBACK_OFFSET))(this, bankID, memoryBankPtr, loadResult, cookie);
		}

		::System::Void _UnLoadBankCallback(::System::UInt32 bankID, ::System::IntPtr memoryBankPtr, ::AKRESULT loadResult, ::System::Object* cookie)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__UNLOADBANKCALLBACK_OFFSET))(this, bankID, memoryBankPtr, loadResult, cookie);
		}

		::System::Void _RemoveSoundBankUsage(::System::Collections::Generic::List_1<::System::UInt32>* banks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__REMOVESOUNDBANKUSAGE_OFFSET))(this, banks);
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

		::System::Void _LoadAudioConfig(::System::Boolean onlyStartPack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__LOADAUDIOCONFIG_OFFSET))(this, onlyStartPack);
		}

		::System::Void _InitUIButtonSoundTypeStringCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__INITUIBUTTONSOUNDTYPESTRINGCACHE_OFFSET))(this);
		}

		::System::Void _PreLoadEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__PRELOADEVENT_OFFSET))(this);
		}

		::System::Void _GetNeedBanks(::System::String* eventName, ::System::Int32 emitterID, ::System::Collections::Generic::List_1<::System::UInt32>*& banks)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__GETNEEDBANKS_OFFSET))(this, eventName, emitterID, banks);
		}

		::System::Boolean _RayCastOcclusion(::UnityEngine::Transform* emitterTrans, ::UnityEngine::Transform* listenerTrans)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__RAYCASTOCCLUSION_OFFSET))(this, emitterTrans, listenerTrans);
		}

		::System::String* _GetVoiceEventName(::RPG::GameCore::VoicePlayType voiceType)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::VoicePlayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__GETVOICEEVENTNAME_OFFSET))(this, voiceType);
		}

		::System::String* _GetSFXEventName(::RPG::GameCore::SFXPlayType sfxType)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::SFXPlayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__GETSFXEVENTNAME_OFFSET))(this, sfxType);
		}

		::System::Void _SetEventCD(::System::String* eventName, ::System::Single cd)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__SETEVENTCD_OFFSET))(this, eventName, cd);
		}

		::System::Void _RefreshVibrationLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__REFRESHVIBRATIONLEVEL_OFFSET))(this);
		}

		::System::Void _OnInputDeviceClassSwitched(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ONINPUTDEVICECLASSSWITCHED_OFFSET))(this, arg);
		}

		::System::Void _OnAndroidHeadsetBluetoothPermissionRequestResult(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ONANDROIDHEADSETBLUETOOTHPERMISSIONREQUESTRESULT_OFFSET))(this, response);
		}

		::System::Void _OnSDKNotification(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ONSDKNOTIFICATION_OFFSET))(this, jsonString);
		}

		::System::Void _OnFocusChanged(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ONFOCUSCHANGED_OFFSET))(this, userParam);
		}

		::Class_1_83BDA5F3F46879EA* _GetTeamCharacterVOPlayer()
		{
			return ((::Class_1_83BDA5F3F46879EA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__GETTEAMCHARACTERVOPLAYER_OFFSET))(this);
		}

		::System::Void _UpdateAudioListenerMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__UPDATEAUDIOLISTENERMODE_OFFSET))(this);
		}

		::System::Void _SetInnerState(::RPG::Client::AudioManager_InnerState state)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioManager_InnerState))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__SETINNERSTATE_OFFSET))(this, state);
		}

		::UnityEngine::GameObject* get_ListenerObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_LISTENEROBJECT_OFFSET))(this);
		}

		::System::UInt32 get_BGMEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_BGMEVENTID_OFFSET))(this);
		}

		::System::Void set_BGMEventID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_BGMEVENTID_OFFSET))(this, value);
		}

		::RPG::GameCore::AudioGameState get_BGMGameMode()
		{
			return ((::RPG::GameCore::AudioGameState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_BGMGAMEMODE_OFFSET))(this);
		}

		::System::Void set_BGMGameMode(::RPG::GameCore::AudioGameState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AudioGameState))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_BGMGAMEMODE_OFFSET))(this, value);
		}

		::System::Boolean get_IsBGMMute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_ISBGMMUTE_OFFSET))(this);
		}

		::System::Void set_IsBGMMute(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ISBGMMUTE_OFFSET))(this, value);
		}

		::System::Boolean get_IsSFXMute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_ISSFXMUTE_OFFSET))(this);
		}

		::System::Void set_IsSFXMute(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ISSFXMUTE_OFFSET))(this, value);
		}

		::System::Boolean get_IsVOMute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_ISVOMUTE_OFFSET))(this);
		}

		::System::Void set_IsVOMute(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ISVOMUTE_OFFSET))(this, value);
		}

		::System::UInt32 get_MasterVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_MASTERVOLUME_OFFSET))(this);
		}

		::System::Void set_MasterVolume(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_MASTERVOLUME_OFFSET))(this, value);
		}

		::System::UInt32 get_BGMVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_BGMVOLUME_OFFSET))(this);
		}

		::System::Void set_BGMVolume(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_BGMVOLUME_OFFSET))(this, value);
		}

		::System::UInt32 get_SFXVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_SFXVOLUME_OFFSET))(this);
		}

		::System::Void set_SFXVolume(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_SFXVOLUME_OFFSET))(this, value);
		}

		::System::UInt32 get_VOVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_VOVOLUME_OFFSET))(this);
		}

		::System::Void set_VOVolume(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_VOVOLUME_OFFSET))(this, value);
		}

		::RPG::Client::AudioSettings_SpeakerModeType get_SpeakerMode()
		{
			return ((::RPG::Client::AudioSettings_SpeakerModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_SPEAKERMODE_OFFSET))(this);
		}

		::System::Void set_SpeakerMode(::RPG::Client::AudioSettings_SpeakerModeType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioSettings_SpeakerModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_SPEAKERMODE_OFFSET))(this, value);
		}

		::Class_1_033D34C575E1323A* get_AudioPlayingCacheData()
		{
			return ((::Class_1_033D34C575E1323A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_AUDIOPLAYINGCACHEDATA_OFFSET))(this);
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

		::System::Void set_AdventureBGMWorldState(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMWORLDSTATE_OFFSET))(this, value);
		}

		::System::String* get_AdventureBGMFloorGroup()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMFLOORGROUP_OFFSET))(this);
		}

		::System::Void set_AdventureBGMFloorGroup(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMFLOORGROUP_OFFSET))(this, value);
		}

		::System::String* get_AdventureBGMFloorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMFLOORSTATE_OFFSET))(this);
		}

		::System::Void set_AdventureBGMFloorState(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMFLOORSTATE_OFFSET))(this, value);
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

		::System::Boolean AsyncUpdateLangSize(::System::Action* successCb, ::System::Action* failCb)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ASYNCUPDATELANGSIZE_OFFSET))(this, successCb, failCb);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUME_OFFSET))(this);
		}

		::System::Void StartDownload(::System::String* languageKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STARTDOWNLOAD_OFFSET))(this, languageKey);
		}

		::System::Void OnAudioDowloadSucceed(::System::String* languageKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ONAUDIODOWLOADSUCCEED_OFFSET))(this, languageKey);
		}

		::System::Void OnAudioDownloadFailed(::System::String* languageKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ONAUDIODOWNLOADFAILED_OFFSET))(this, languageKey);
		}

		::System::Void OnAudioSizeSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ONAUDIOSIZESUCCESS_OFFSET))(this);
		}

		::System::Void OnAudioSizeFail(::Class_2_2690241A4D35989E* ax)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ONAUDIOSIZEFAIL_OFFSET))(this, ax);
		}

		::System::Void UpdatePartialDownloadLang(::System::String* languageKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_UPDATEPARTIALDOWNLOADLANG_OFFSET))(this, languageKey);
		}

		::System::Boolean IsLocalLangDirExist(::System::String* wwiseLangKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISLOCALLANGDIREXIST_OFFSET))(this, wwiseLangKey);
		}

		::System::Void StopDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPDOWNLOAD_OFFSET))(this);
		}

		::System::Void ResumeDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMEDOWNLOAD_OFFSET))(this);
		}

		::System::Void CancelDownloadAudio(::System::String* languageKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CANCELDOWNLOADAUDIO_OFFSET))(this, languageKey);
		}

		::RPG::Client::AudioManager_AudioDownloadState GetDownloadStage()
		{
			return ((::RPG::Client::AudioManager_AudioDownloadState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADSTAGE_OFFSET))(this);
		}

		::System::Boolean ApplyAudio(::System::String* audioKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_APPLYAUDIO_OFFSET))(this, audioKey);
		}

		::System::Boolean IsAudioDownloaded(::System::String* languageKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISAUDIODOWNLOADED_OFFSET))(this, languageKey);
		}

		::System::Boolean IsAudioPartialDownloaded(::System::String* languageKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISAUDIOPARTIALDOWNLOADED_OFFSET))(this, languageKey);
		}

		::System::String* GetAudioSize(::System::String* audioKey)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETAUDIOSIZE_OFFSET))(this, audioKey);
		}

		::System::Int32 GetDownloadedAudioCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADEDAUDIOCOUNT_OFFSET))(this);
		}

		::RPG::Client::AudioLanguageItem* GetAudioItemByAudioKey(::System::String* audioKey)
		{
			return ((::RPG::Client::AudioLanguageItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETAUDIOITEMBYAUDIOKEY_OFFSET))(this, audioKey);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AudioLanguageItem*>* GetDownloadedAudioItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AudioLanguageItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADEDAUDIOITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AudioLanguageItem*>* GetPartialDownloadedAudioItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AudioLanguageItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPARTIALDOWNLOADEDAUDIOITEMS_OFFSET))(this);
		}

		::System::Void DeleteAudioPack(::System::String* audiokey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_DELETEAUDIOPACK_OFFSET))(this, audiokey);
		}

		::System::Void SetState_1(::RPG::Client::AudioManager_AudioDownloadState state)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioManager_AudioDownloadState))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETSTATE_1_OFFSET))(this, state);
		}

		::System::Void _DownloadDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__DOWNLOADDISPOSE_OFFSET))(this);
		}

		::System::Void _AsyncUpdateLangSize_b__245_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__245_0_OFFSET))(this);
		}

		::System::Void _AsyncUpdateLangSize_b__245_1(::Class_2_2690241A4D35989E* ax)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__245_1_OFFSET))(this, ax);
		}

		::System::Void _AsyncUpdateLangSize_b__245_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__245_2_OFFSET))(this);
		}
	};
}
