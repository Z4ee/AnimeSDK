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
class Class_0_16E4307DCC419505_565;
class Class_1_033D34C575E1323A;
class Class_1_239D87D7563FF971;
class Class_1_253F4BEA35E6A1BB;
class Class_1_2B525158BC356FC8;
class Class_1_58B161F85B3D684E;
class Class_1_6C462A2E579389F9;
class Class_1_8D0E66DD979ED13D;
class Class_1_A860CF37A3952C81;
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

#define RPG_CLIENT_AUDIOMANAGER_ADDSCOPELIMITEDTARGET_OFFSET UNITYSDK_OFFSET(0x9D52A00)
#define RPG_CLIENT_AUDIOMANAGER_ADDVOICETARGET_OFFSET UNITYSDK_OFFSET(0x9D576B0)
#define RPG_CLIENT_AUDIOMANAGER_APPLYAUDIO_OFFSET UNITYSDK_OFFSET(0x9D62120)
#define RPG_CLIENT_AUDIOMANAGER_ASYNCLOADINITGAMEPCKS_OFFSET UNITYSDK_OFFSET(0x9D562B0)
#define RPG_CLIENT_AUDIOMANAGER_ASYNCUPDATELANGSIZE_OFFSET UNITYSDK_OFFSET(0x9D60DE0)
#define RPG_CLIENT_AUDIOMANAGER_BACKTOPREVIOUSBGMGAMESTATE_OFFSET UNITYSDK_OFFSET(0x9D5A500)
#define RPG_CLIENT_AUDIOMANAGER_BEFORERESTART_OFFSET UNITYSDK_OFFSET(0x9D538D0)
#define RPG_CLIENT_AUDIOMANAGER_BREAKEVENT_OFFSET UNITYSDK_OFFSET(0x9D5A9C0)
#define RPG_CLIENT_AUDIOMANAGER_CANCELDOWNLOADAUDIO_OFFSET UNITYSDK_OFFSET(0x9D61FA0)
#define RPG_CLIENT_AUDIOMANAGER_CANDELETE_OFFSET UNITYSDK_OFFSET(0x9D5FD90)
#define RPG_CLIENT_AUDIOMANAGER_CANPOSTEVENTINCD_OFFSET UNITYSDK_OFFSET(0x9D5C830)
#define RPG_CLIENT_AUDIOMANAGER_CANSWITCHAUDIO_OFFSET UNITYSDK_OFFSET(0x9D5FC40)
#define RPG_CLIENT_AUDIOMANAGER_CHECKEMITTERHASOCCLUSION_OFFSET UNITYSDK_OFFSET(0x9D5BF10)
#define RPG_CLIENT_AUDIOMANAGER_CLEARBGMGAMESTATE_OFFSET UNITYSDK_OFFSET(0x9D5A670)
#define RPG_CLIENT_AUDIOMANAGER_DELETEAUDIOPACK_OFFSET UNITYSDK_OFFSET(0x9D629F0)
#define RPG_CLIENT_AUDIOMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D52FA0)
#define RPG_CLIENT_AUDIOMANAGER_GAMEOBJECTSOUNDFADE_OFFSET UNITYSDK_OFFSET(0x9D5B110)
#define RPG_CLIENT_AUDIOMANAGER_GETAUDIOITEMBYAUDIOKEY_OFFSET UNITYSDK_OFFSET(0x9D62510)
#define RPG_CLIENT_AUDIOMANAGER_GETAUDIOSIZE_OFFSET UNITYSDK_OFFSET(0x9D62340)
#define RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADEDAUDIOCOUNT_OFFSET UNITYSDK_OFFSET(0x9D624C0)
#define RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADEDAUDIOITEMS_OFFSET UNITYSDK_OFFSET(0x9D62600)
#define RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADSTAGE_OFFSET UNITYSDK_OFFSET(0x9D620D0)
#define RPG_CLIENT_AUDIOMANAGER_GETEVENTIDLISTBYEVENTNAME_OFFSET UNITYSDK_OFFSET(0x9D5B220)
#define RPG_CLIENT_AUDIOMANAGER_GETEXTERNALSOURCEINFO_OFFSET UNITYSDK_OFFSET(0x9D56A00)
#define RPG_CLIENT_AUDIOMANAGER_GETISMUTEONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x9D5DAE0)
#define RPG_CLIENT_AUDIOMANAGER_GETJUKEBOXMUSICTIME_OFFSET UNITYSDK_OFFSET(0x9D5C5A0)
#define RPG_CLIENT_AUDIOMANAGER_GETMUSICVISUALIZEDATA_OFFSET UNITYSDK_OFFSET(0x9D525F0)
#define RPG_CLIENT_AUDIOMANAGER_GETPARTIALDOWNLOADEDAUDIOITEMS_OFFSET UNITYSDK_OFFSET(0x9D627F0)
#define RPG_CLIENT_AUDIOMANAGER_GETPCKMGR_OFFSET UNITYSDK_OFFSET(0x9D5DFB0)
#define RPG_CLIENT_AUDIOMANAGER_GETPLAYINGEVENTPOSITIONBYEVENTNAME_OFFSET UNITYSDK_OFFSET(0x9D5B2E0)
#define RPG_CLIENT_AUDIOMANAGER_GETPLAYINGEVENTPOSITION_OFFSET UNITYSDK_OFFSET(0x9D5B350)
#define RPG_CLIENT_AUDIOMANAGER_GETPLAYINGINFOBYPLAYINGID_OFFSET UNITYSDK_OFFSET(0x9D5B280)
#define RPG_CLIENT_AUDIOMANAGER_GETPROPSOUNDOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x9D5DC60)
#define RPG_CLIENT_AUDIOMANAGER_GETUIBUTTONSOUNDEVENTBYTYPE_OFFSET UNITYSDK_OFFSET(0x9D5BA30)
#define RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMFLOORGROUP_OFFSET UNITYSDK_OFFSET(0x9D5FC00)
#define RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMFLOORSTATE_OFFSET UNITYSDK_OFFSET(0x9D5FC20)
#define RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMWORLDSTATE_OFFSET UNITYSDK_OFFSET(0x9D5FBE0)
#define RPG_CLIENT_AUDIOMANAGER_GET_AUDIOPLAYINGCACHEDATA_OFFSET UNITYSDK_OFFSET(0x9D5FBC0)
#define RPG_CLIENT_AUDIOMANAGER_GET_BGMEVENTID_OFFSET UNITYSDK_OFFSET(0x9D5FAD0)
#define RPG_CLIENT_AUDIOMANAGER_GET_BGMGAMEMODE_OFFSET UNITYSDK_OFFSET(0x9D5FAF0)
#define RPG_CLIENT_AUDIOMANAGER_GET_BGMVOLUME_OFFSET UNITYSDK_OFFSET(0x9D5FB80)
#define RPG_CLIENT_AUDIOMANAGER_GET_CANSETMUTEONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x9D53550)
#define RPG_CLIENT_AUDIOMANAGER_GET_DEFAULTEMITTEROBJECT_OFFSET UNITYSDK_OFFSET(0x9D5A230)
#define RPG_CLIENT_AUDIOMANAGER_GET_ISBGMMUTE_OFFSET UNITYSDK_OFFSET(0x9D5FB10)
#define RPG_CLIENT_AUDIOMANAGER_GET_ISSFXMUTE_OFFSET UNITYSDK_OFFSET(0x9D5FB30)
#define RPG_CLIENT_AUDIOMANAGER_GET_ISVOMUTE_OFFSET UNITYSDK_OFFSET(0x9D5FB50)
#define RPG_CLIENT_AUDIOMANAGER_GET_LISTENEROBJECT_OFFSET UNITYSDK_OFFSET(0x9D5FAC0)
#define RPG_CLIENT_AUDIOMANAGER_GET_MASTERVOLUME_OFFSET UNITYSDK_OFFSET(0x9D5FB70)
#define RPG_CLIENT_AUDIOMANAGER_GET_SFXVOLUME_OFFSET UNITYSDK_OFFSET(0x9D5FB90)
#define RPG_CLIENT_AUDIOMANAGER_GET_SPEAKERMODE_OFFSET UNITYSDK_OFFSET(0x9D5FBB0)
#define RPG_CLIENT_AUDIOMANAGER_GET_USEPCKMODE_OFFSET UNITYSDK_OFFSET(0x9D5FBD0)
#define RPG_CLIENT_AUDIOMANAGER_GET_VOVOLUME_OFFSET UNITYSDK_OFFSET(0x9D5FBA0)
#define RPG_CLIENT_AUDIOMANAGER_INITGAMEPCKSDEV_OFFSET UNITYSDK_OFFSET(0x9D55CF0)
#define RPG_CLIENT_AUDIOMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x9D53CD0)
#define RPG_CLIENT_AUDIOMANAGER_ISAUDIODOWNLOADED_OFFSET UNITYSDK_OFFSET(0x9D5BAA0)
#define RPG_CLIENT_AUDIOMANAGER_ISAUDIOPARTIALDOWNLOADED_OFFSET UNITYSDK_OFFSET(0x9D622A0)
#define RPG_CLIENT_AUDIOMANAGER_ISEVENTEXISTINPCK_OFFSET UNITYSDK_OFFSET(0x9D5C530)
#define RPG_CLIENT_AUDIOMANAGER_ISEVENTINCD_OFFSET UNITYSDK_OFFSET(0x9D5C6E0)
#define RPG_CLIENT_AUDIOMANAGER_ISEVENTPENDING_OFFSET UNITYSDK_OFFSET(0x9D59FB0)
#define RPG_CLIENT_AUDIOMANAGER_ISEVENTPLAYING_OFFSET UNITYSDK_OFFSET(0x9D59F50)
#define RPG_CLIENT_AUDIOMANAGER_ISLOCALLANGDIREXIST_OFFSET UNITYSDK_OFFSET(0x9D60B80)
#define RPG_CLIENT_AUDIOMANAGER_ISSOUNDEVENTMARKER_OFFSET UNITYSDK_OFFSET(0x9D52550)
#define RPG_CLIENT_AUDIOMANAGER_LOADINITGAMEPCKS_OFFSET UNITYSDK_OFFSET(0x9D56340)
#define RPG_CLIENT_AUDIOMANAGER_MUTEALLAUDIOOFGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x9D5DD80)
#define RPG_CLIENT_AUDIOMANAGER_ONAUDIODOWLOADSUCCEED_OFFSET UNITYSDK_OFFSET(0x9D615C0)
#define RPG_CLIENT_AUDIOMANAGER_ONAUDIODOWNLOADFAILED_OFFSET UNITYSDK_OFFSET(0x9D61740)
#define RPG_CLIENT_AUDIOMANAGER_ONAUDIOSIZEFAIL_OFFSET UNITYSDK_OFFSET(0x9D61AB0)
#define RPG_CLIENT_AUDIOMANAGER_ONAUDIOSIZESUCCESS_OFFSET UNITYSDK_OFFSET(0x9D61860)
#define RPG_CLIENT_AUDIOMANAGER_PAUSEBGM_OFFSET UNITYSDK_OFFSET(0x9D58610)
#define RPG_CLIENT_AUDIOMANAGER_PAUSEEVENTID_OFFSET UNITYSDK_OFFSET(0x9D5AEC0)
#define RPG_CLIENT_AUDIOMANAGER_PAUSEEVENT_OFFSET UNITYSDK_OFFSET(0x9D5A730)
#define RPG_CLIENT_AUDIOMANAGER_PAUSESOUNDINBATTLE_OFFSET UNITYSDK_OFFSET(0x9D58BF0)
#define RPG_CLIENT_AUDIOMANAGER_PAUSESOUNDINCUTSCENE_OFFSET UNITYSDK_OFFSET(0x9D587B0)
#define RPG_CLIENT_AUDIOMANAGER_PAUSEVOICE_OFFSET UNITYSDK_OFFSET(0x9D5D6E0)
#define RPG_CLIENT_AUDIOMANAGER_PAUSE_OFFSET UNITYSDK_OFFSET(0x9D61090)
#define RPG_CLIENT_AUDIOMANAGER_PLAYUICHARACTERVO_1_OFFSET UNITYSDK_OFFSET(0x9D5E100)
#define RPG_CLIENT_AUDIOMANAGER_PLAYUICHARACTERVO_OFFSET UNITYSDK_OFFSET(0x9D5DFF0)
#define RPG_CLIENT_AUDIOMANAGER_POSTATONCE_OFFSET UNITYSDK_OFFSET(0x9D56E60)
#define RPG_CLIENT_AUDIOMANAGER_POSTBGM_OFFSET UNITYSDK_OFFSET(0x9D55AE0)
#define RPG_CLIENT_AUDIOMANAGER_POSTEVENTWITHBEGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D565A0)
#define RPG_CLIENT_AUDIOMANAGER_POSTEVENT_OFFSET UNITYSDK_OFFSET(0x9D55C60)
#define RPG_CLIENT_AUDIOMANAGER_POSTEXTERNALSOURCE_OFFSET UNITYSDK_OFFSET(0x9D56960)
#define RPG_CLIENT_AUDIOMANAGER_POSTLOOPSFX_OFFSET UNITYSDK_OFFSET(0x9D57B60)
#define RPG_CLIENT_AUDIOMANAGER_POSTSFX_OFFSET UNITYSDK_OFFSET(0x9D57890)
#define RPG_CLIENT_AUDIOMANAGER_POSTVOICE_OFFSET UNITYSDK_OFFSET(0x9D57180)
#define RPG_CLIENT_AUDIOMANAGER_PREPAREAUDIODOWNLOADDATA_OFFSET UNITYSDK_OFFSET(0x9D5FF60)
#define RPG_CLIENT_AUDIOMANAGER_PREPAREDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x9D60C80)
#define RPG_CLIENT_AUDIOMANAGER_REFRESHVIBRATIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x9D5CF00)
#define RPG_CLIENT_AUDIOMANAGER_RELOADALLFULLPCKS_OFFSET UNITYSDK_OFFSET(0x9D56220)
#define RPG_CLIENT_AUDIOMANAGER_RELOADVOBANKS_OFFSET UNITYSDK_OFFSET(0x9D5B7E0)
#define RPG_CLIENT_AUDIOMANAGER_REMOVESCOPELIMITEDTARGET_OFFSET UNITYSDK_OFFSET(0x9D52B10)
#define RPG_CLIENT_AUDIOMANAGER_REMOVEVOICETARGET_OFFSET UNITYSDK_OFFSET(0x9D57830)
#define RPG_CLIENT_AUDIOMANAGER_RESETLISTNERMODE_OFFSET UNITYSDK_OFFSET(0x9D59D90)
#define RPG_CLIENT_AUDIOMANAGER_RESETSOUNDENGINE_OFFSET UNITYSDK_OFFSET(0x9D55990)
#define RPG_CLIENT_AUDIOMANAGER_RESETUILISTNERMODE_OFFSET UNITYSDK_OFFSET(0x9D59D20)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEBGM_OFFSET UNITYSDK_OFFSET(0x9D586E0)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x9D62060)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEEVENTID_OFFSET UNITYSDK_OFFSET(0x9D5AF80)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEEVENT_OFFSET UNITYSDK_OFFSET(0x9D5A8F0)
#define RPG_CLIENT_AUDIOMANAGER_RESUMESOUNDINBATTLE_OFFSET UNITYSDK_OFFSET(0x9D58D80)
#define RPG_CLIENT_AUDIOMANAGER_RESUMESOUNDINCUTSCENE_OFFSET UNITYSDK_OFFSET(0x9D589D0)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEVOICE_OFFSET UNITYSDK_OFFSET(0x9D5D800)
#define RPG_CLIENT_AUDIOMANAGER_RESUME_OFFSET UNITYSDK_OFFSET(0x9D610F0)
#define RPG_CLIENT_AUDIOMANAGER_SAVEVOLUME_OFFSET UNITYSDK_OFFSET(0x9D5D170)
#define RPG_CLIENT_AUDIOMANAGER_SEEKONBGM_OFFSET UNITYSDK_OFFSET(0x9D580F0)
#define RPG_CLIENT_AUDIOMANAGER_SEEKONEVENTID_1_OFFSET UNITYSDK_OFFSET(0x9D5B4A0)
#define RPG_CLIENT_AUDIOMANAGER_SEEKONEVENTID_OFFSET UNITYSDK_OFFSET(0x9D58150)
#define RPG_CLIENT_AUDIOMANAGER_SETBGMGAMESTATE_OFFSET UNITYSDK_OFFSET(0x9D5A2C0)
#define RPG_CLIENT_AUDIOMANAGER_SETBGMVOLUME_OFFSET UNITYSDK_OFFSET(0x9D5BB60)
#define RPG_CLIENT_AUDIOMANAGER_SETEXCLUDEVOICEMUTE_OFFSET UNITYSDK_OFFSET(0x9D585C0)
#define RPG_CLIENT_AUDIOMANAGER_SETISMUTEONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x9D5DB30)
#define RPG_CLIENT_AUDIOMANAGER_SETLANGUAGE_OFFSET UNITYSDK_OFFSET(0x9D55450)
#define RPG_CLIENT_AUDIOMANAGER_SETLISTNERMODE_OFFSET UNITYSDK_OFFSET(0x9D59AC0)
#define RPG_CLIENT_AUDIOMANAGER_SETMASTERVOLUME_OFFSET UNITYSDK_OFFSET(0x9D5BB10)
#define RPG_CLIENT_AUDIOMANAGER_SETMOTION_OFFSET UNITYSDK_OFFSET(0x9D5CB30)
#define RPG_CLIENT_AUDIOMANAGER_SETMUTEBGM_OFFSET UNITYSDK_OFFSET(0x9D58240)
#define RPG_CLIENT_AUDIOMANAGER_SETMUTESFX_OFFSET UNITYSDK_OFFSET(0x9D583A0)
#define RPG_CLIENT_AUDIOMANAGER_SETMUTEVO_OFFSET UNITYSDK_OFFSET(0x9D584B0)
#define RPG_CLIENT_AUDIOMANAGER_SETSFXVOLUME_OFFSET UNITYSDK_OFFSET(0x9D5BBF0)
#define RPG_CLIENT_AUDIOMANAGER_SETSPEAKERMODE_OFFSET UNITYSDK_OFFSET(0x9D5BD10)
#define RPG_CLIENT_AUDIOMANAGER_SETSTATE_1_OFFSET UNITYSDK_OFFSET(0x9D60D20)
#define RPG_CLIENT_AUDIOMANAGER_SETSTATE_OFFSET UNITYSDK_OFFSET(0x9D384F0)
#define RPG_CLIENT_AUDIOMANAGER_SETSWITCH_OFFSET UNITYSDK_OFFSET(0x9D5B590)
#define RPG_CLIENT_AUDIOMANAGER_SETUILISTNERMODE_OFFSET UNITYSDK_OFFSET(0x9D59A10)
#define RPG_CLIENT_AUDIOMANAGER_SETVIBRATIONINTENSITYACTIVE_OFFSET UNITYSDK_OFFSET(0x9D5D070)
#define RPG_CLIENT_AUDIOMANAGER_SETVOVOLUME_OFFSET UNITYSDK_OFFSET(0x9D5BC80)
#define RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMFLOORGROUP_OFFSET UNITYSDK_OFFSET(0x9D5FC10)
#define RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMFLOORSTATE_OFFSET UNITYSDK_OFFSET(0x9D5FC30)
#define RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMWORLDSTATE_OFFSET UNITYSDK_OFFSET(0x9D5FBF0)
#define RPG_CLIENT_AUDIOMANAGER_SET_BGMEVENTID_OFFSET UNITYSDK_OFFSET(0x9D5FAE0)
#define RPG_CLIENT_AUDIOMANAGER_SET_BGMGAMEMODE_OFFSET UNITYSDK_OFFSET(0x9D5FB00)
#define RPG_CLIENT_AUDIOMANAGER_SET_BGMVOLUME_OFFSET UNITYSDK_OFFSET(0x9D556D0)
#define RPG_CLIENT_AUDIOMANAGER_SET_ISBGMMUTE_OFFSET UNITYSDK_OFFSET(0x9D5FB20)
#define RPG_CLIENT_AUDIOMANAGER_SET_ISSFXMUTE_OFFSET UNITYSDK_OFFSET(0x9D5FB40)
#define RPG_CLIENT_AUDIOMANAGER_SET_ISVOMUTE_OFFSET UNITYSDK_OFFSET(0x9D5FB60)
#define RPG_CLIENT_AUDIOMANAGER_SET_MASTERVOLUME_OFFSET UNITYSDK_OFFSET(0x9D55590)
#define RPG_CLIENT_AUDIOMANAGER_SET_SFXVOLUME_OFFSET UNITYSDK_OFFSET(0x9D55740)
#define RPG_CLIENT_AUDIOMANAGER_SET_SPEAKERMODE_OFFSET UNITYSDK_OFFSET(0x9D55820)
#define RPG_CLIENT_AUDIOMANAGER_SET_VOVOLUME_OFFSET UNITYSDK_OFFSET(0x9D557B0)
#define RPG_CLIENT_AUDIOMANAGER_SHOWSIZE_OFFSET UNITYSDK_OFFSET(0x9D5FDD0)
#define RPG_CLIENT_AUDIOMANAGER_STARTDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x9D61150)
#define RPG_CLIENT_AUDIOMANAGER_STOPALLLOOPSFX_OFFSET UNITYSDK_OFFSET(0x9D57F90)
#define RPG_CLIENT_AUDIOMANAGER_STOPDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x9D61E50)
#define RPG_CLIENT_AUDIOMANAGER_STOPEVENTID_OFFSET UNITYSDK_OFFSET(0x9D57E30)
#define RPG_CLIENT_AUDIOMANAGER_STOPEVENTSBYEVENTNAME_OFFSET UNITYSDK_OFFSET(0x9D5B040)
#define RPG_CLIENT_AUDIOMANAGER_STOPEVENT_OFFSET UNITYSDK_OFFSET(0x9D5AA80)
#define RPG_CLIENT_AUDIOMANAGER_STOPLOOPSFX_OFFSET UNITYSDK_OFFSET(0x9D57D50)
#define RPG_CLIENT_AUDIOMANAGER_TICKDYNAMICLISTENER_OFFSET UNITYSDK_OFFSET(0x9D58F00)
#define RPG_CLIENT_AUDIOMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x9D53A60)
#define RPG_CLIENT_AUDIOMANAGER_TRYGETPLAYINGEVENTPOSITION_OFFSET UNITYSDK_OFFSET(0x9D5B410)
#define RPG_CLIENT_AUDIOMANAGER_TRYPLAYJOINTEAMCHARACTERVO_OFFSET UNITYSDK_OFFSET(0x9D5D920)
#define RPG_CLIENT_AUDIOMANAGER_TRYSTOPJOINTEAMCHARACTERVO_OFFSET UNITYSDK_OFFSET(0x9D5DA80)
#define RPG_CLIENT_AUDIOMANAGER_UNLOADINITGAMEPCKS_OFFSET UNITYSDK_OFFSET(0x9D56530)
#define RPG_CLIENT_AUDIOMANAGER_UNLOADMININUMBANK_OFFSET UNITYSDK_OFFSET(0x9D56140)
#define RPG_CLIENT_AUDIOMANAGER_UNLOADUNUSEDMISSIONPCKS_OFFSET UNITYSDK_OFFSET(0x9D5DF60)
#define RPG_CLIENT_AUDIOMANAGER_UNMUTEALLAUDIOOFGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x9D5DEC0)
#define RPG_CLIENT_AUDIOMANAGER_UPDATEAUDIODOWNLOADSTATE_OFFSET UNITYSDK_OFFSET(0x9D60650)
#define RPG_CLIENT_AUDIOMANAGER_UPDATEPARTIALDOWNLOADLANG_OFFSET UNITYSDK_OFFSET(0x9D61BB0)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__245_0_OFFSET UNITYSDK_OFFSET(0x9D634C0)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__245_1_OFFSET UNITYSDK_OFFSET(0x9D634D0)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__245_2_OFFSET UNITYSDK_OFFSET(0x9D634E0)
#define RPG_CLIENT_AUDIOMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D634B0)
#define RPG_CLIENT_AUDIOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D62CB0)
#define RPG_CLIENT_AUDIOMANAGER__DEBUGADD_OFFSET UNITYSDK_OFFSET(0x9D52E60)
#define RPG_CLIENT_AUDIOMANAGER__DEBUGREMOVE_OFFSET UNITYSDK_OFFSET(0x9D52F00)
#define RPG_CLIENT_AUDIOMANAGER__DOPOST_OFFSET UNITYSDK_OFFSET(0x9D5E3D0)
#define RPG_CLIENT_AUDIOMANAGER__DOWNLOADDISPOSE_OFFSET UNITYSDK_OFFSET(0x9D535E0)
#define RPG_CLIENT_AUDIOMANAGER__GETNEEDBANKS_OFFSET UNITYSDK_OFFSET(0x9D5E2D0)
#define RPG_CLIENT_AUDIOMANAGER__GETSFXEVENTNAME_OFFSET UNITYSDK_OFFSET(0x9D57A30)
#define RPG_CLIENT_AUDIOMANAGER__GETTEAMCHARACTERVOPLAYER_OFFSET UNITYSDK_OFFSET(0x9D5D990)
#define RPG_CLIENT_AUDIOMANAGER__GETVOICEEVENTNAME_OFFSET UNITYSDK_OFFSET(0x9D57410)
#define RPG_CLIENT_AUDIOMANAGER__INITLISTENER_OFFSET UNITYSDK_OFFSET(0x9D54B50)
#define RPG_CLIENT_AUDIOMANAGER__INITUIBUTTONSOUNDTYPESTRINGCACHE_OFFSET UNITYSDK_OFFSET(0x9D54E70)
#define RPG_CLIENT_AUDIOMANAGER__LOADAUDIOCONFIG_OFFSET UNITYSDK_OFFSET(0x9D54A90)
#define RPG_CLIENT_AUDIOMANAGER__LOADINITBANKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D5EFC0)
#define RPG_CLIENT_AUDIOMANAGER__ONANDROIDHEADSETBLUETOOTHPERMISSIONREQUESTRESULT_OFFSET UNITYSDK_OFFSET(0x9D5F570)
#define RPG_CLIENT_AUDIOMANAGER__ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x9D5F910)
#define RPG_CLIENT_AUDIOMANAGER__ONINPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0x9D5F4A0)
#define RPG_CLIENT_AUDIOMANAGER__ONSDKNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x9D5F5F0)
#define RPG_CLIENT_AUDIOMANAGER__POSTAFTERBANKPREPARED_OFFSET UNITYSDK_OFFSET(0x9D56650)
#define RPG_CLIENT_AUDIOMANAGER__POSTATONCE_OFFSET UNITYSDK_OFFSET(0x9D56EF0)
#define RPG_CLIENT_AUDIOMANAGER__POSTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D5E8E0)
#define RPG_CLIENT_AUDIOMANAGER__PRELOADEVENT_OFFSET UNITYSDK_OFFSET(0x9D55EF0)
#define RPG_CLIENT_AUDIOMANAGER__RAYCASTOCCLUSION_OFFSET UNITYSDK_OFFSET(0x9D5C060)
#define RPG_CLIENT_AUDIOMANAGER__REFRESHVIBRATIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9D5CDC0)
#define RPG_CLIENT_AUDIOMANAGER__REMOVESOUNDBANKUSAGE_OFFSET UNITYSDK_OFFSET(0x9D5AE20)
#define RPG_CLIENT_AUDIOMANAGER__SETEVENTCD_OFFSET UNITYSDK_OFFSET(0x9D5C9C0)
#define RPG_CLIENT_AUDIOMANAGER__SETINNERSTATE_OFFSET UNITYSDK_OFFSET(0x9D53500)
#define RPG_CLIENT_AUDIOMANAGER__TICKLISTENERCAMERAWITHDIST_OFFSET UNITYSDK_OFFSET(0x9D59380)
#define RPG_CLIENT_AUDIOMANAGER__TICKLISTENERCAMERA_OFFSET UNITYSDK_OFFSET(0x9D591D0)
#define RPG_CLIENT_AUDIOMANAGER__TICKLISTENERFOLLOWINGWITHDIRECT_OFFSET UNITYSDK_OFFSET(0x9D598B0)
#define RPG_CLIENT_AUDIOMANAGER__TICKLISTENERFOLLOWING_OFFSET UNITYSDK_OFFSET(0x9D58FF0)
#define RPG_CLIENT_AUDIOMANAGER__TICKMUSICVISUALIZE_OFFSET UNITYSDK_OFFSET(0x9D52880)
#define RPG_CLIENT_AUDIOMANAGER__TICKPENDINGEVENTS_OFFSET UNITYSDK_OFFSET(0x9D53BA0)
#define RPG_CLIENT_AUDIOMANAGER__TICKPENDINGEVENT_OFFSET UNITYSDK_OFFSET(0x9D5E6C0)
#define RPG_CLIENT_AUDIOMANAGER__TICKSCOPELIMIT_OFFSET UNITYSDK_OFFSET(0x9D52C70)
#define RPG_CLIENT_AUDIOMANAGER__UNLOADBANKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D5F230)
#define RPG_CLIENT_AUDIOMANAGER__UPDATEAUDIOLISTENERMODE_OFFSET UNITYSDK_OFFSET(0x9D59EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager_TypeDefinitionIndex = 55105;

	class AudioManager : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_MAX_AUDIO_VOLUME()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AudioManager_TypeDefinitionIndex)->GetStaticField(0xC5C0);
		}
		::Class_1_A860CF37A3952C81* _TeamCharacterVOPlayer; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* partialDownloadedLanguage; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* reverseDict; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _PreLoadBanks; // 0x28
		::Class_1_2B525158BC356FC8* _PckMgr; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _LoopSFXPlayingIds; // 0x38
		::Class_1_58B161F85B3D684E* audioLangSizeLoader; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MusicVisualizeDataSourceType, ::Class_1_FBA2F7F034B595FB*>* _MusicVisualzieDataDict; // 0x48
		::System::String* _AdventureBGMFloorGroup_k__BackingField; // 0x50
		::Il2CppArray<::UnityEngine::RaycastHit>* _OcclusionHitInfos; // 0x58
		::System::String* s_ExternalSourceFormat; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::AudioManager_AudioListenerInfo*>* _AudioListenerInfoList; // 0x68
		::RPG::Client::AudioManager_AudioListenerInfo* _ListenerInfo; // 0x70
		::RPG::GameCore::AudioConfig* AudioConfig; // 0x78
		::System::Collections::Generic::HashSet_1<::System::String*>* downloadedLanguage; // 0x80
		::UnityEngine::GameObject* _ListenerObject; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* audioDict; // 0x90
		::RPG::GameCore::JukeBoxMusicTimesConfig* JukeBoxConfig; // 0x98
		::System::Action* audioSizeFailCb; // 0xA0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::UIButtonSoundType, ::System::String*>* _UIButtonSoundTypeStringCache; // 0xA8
		::System::String* DownLoadAudioKey; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt64>* EventCDDict; // 0xB8
		::System::Action* audioSizeSuccessCb; // 0xC0
		::AkCallbackManager_EventCallback* _PostCallBackAction; // 0xC8
		::System::String* _AdventureBGMWorldState_k__BackingField; // 0xD0
		::System::String* s_DefaultListenerName; // 0xD8
		::Class_1_ABB37ED06833DBC5* _SoundBankTicker; // 0xE0
		::Class_1_6C462A2E579389F9* updateOneAudioLangAsset; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::AudioLanguageItem*>* languageItems; // 0xF0
		::System::Collections::Generic::HashSet_1<::System::Int32>* _WillMuteGameObjectIDs; // 0xF8
		::Class_1_8D0E66DD979ED13D* SoundBankLookUpData; // 0x100
		::System::String* _AdventureBGMFloorState_k__BackingField; // 0x108
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::GameObject*>* _VoiceTargets; // 0x110
		::System::Collections::Generic::List_1<::RPG::Client::AudioManager_ScopeLimitInstance*>* _LimitedInstanceList; // 0x118
		::System::Collections::Generic::CacheLinkedList_1<::Class_1_239D87D7563FF971*>* _PendingAudioEvents; // 0x120
		::System::Collections::Generic::Stack_1<::RPG::GameCore::AudioGameState>* _BGMGameStateStack; // 0x128
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _VoiceTypeExternalEventDict; // 0x130
		::System::Collections::Generic::List_1<::RPG::Client::AudioLanguageItem*>* items; // 0x138
		::Class_1_033D34C575E1323A* _AudioPlayingCacheData_k__BackingField; // 0x140
		::RPG::GameCore::PropSoundOverrideConfig* _PropSoundOverrideConfig; // 0x148
		::System::Single _ScopeLimitTickCooldown; // 0x150
		::RPG::Client::AudioSettings_SpeakerModeType _SpeakerMode; // 0x154
		::RPG::Client::AudioManager_AudioDownloadState downloadState; // 0x158
		::RPG::GameCore::AudioGameState _BGMGameMode_k__BackingField; // 0x15C
		::System::Single s_LoadSoundBankProtectTime; // 0x160
		::System::Boolean _IsResourceLoaded; // 0x164
		::System::Boolean _ExcludeVoiceMute; // 0x165
		::System::Boolean _IsVOMute_k__BackingField; // 0x166
		::System::Boolean isDownloading; // 0x167
		::System::Single _ScopeLimitTickInterval; // 0x168
		::RPG::Client::AudioManager_InnerState _InnerState; // 0x16C
		::System::Boolean _UsePckMode; // 0x170
		::System::Boolean ShowSizeDirty; // 0x171
		::System::Boolean _IsMuteOnLostFocus; // 0x172
		::System::UInt32 _SFXVolume; // 0x174
		::System::UInt32 _BGMVolume; // 0x178
		::System::UInt64 _CurrentOutputID; // 0x180
		::System::UInt32 _VOVolume; // 0x188
		::System::UInt32 _BGMEventID_k__BackingField; // 0x18C
		::System::UInt32 _MasterVolume; // 0x190
		::System::Boolean _IsBGMMute_k__BackingField; // 0x194
		::System::Boolean _IsSFXMute_k__BackingField; // 0x195
		::System::Boolean _IsUsingMiniBank; // 0x196
		::System::Boolean ShowSizeState; // 0x197

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

		::System::Void AddScopeLimitedTarget(::Class_0_16E4307DCC419505_565* target)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_565*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ADDSCOPELIMITEDTARGET_OFFSET))(this, target);
		}

		::System::Void RemoveScopeLimitedTarget(::Class_0_16E4307DCC419505_565* target)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_565*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_REMOVESCOPELIMITEDTARGET_OFFSET))(this, target);
		}

		::System::Void _TickScopeLimit(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKSCOPELIMIT_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _DebugAdd(::Class_0_16E4307DCC419505_565* target)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_565*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__DEBUGADD_OFFSET))(this, target);
		}

		::System::Void _DebugRemove(::Class_0_16E4307DCC419505_565* target)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_565*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__DEBUGREMOVE_OFFSET))(this, target);
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

		::Class_1_A860CF37A3952C81* _GetTeamCharacterVOPlayer()
		{
			return ((::Class_1_A860CF37A3952C81*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__GETTEAMCHARACTERVOPLAYER_OFFSET))(this);
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
