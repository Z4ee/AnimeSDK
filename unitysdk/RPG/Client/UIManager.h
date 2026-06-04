#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoadingStyle.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/Client/UIManager_ClearReason.h"
#include "unitysdk/RPG/GameCore/CustomScreenTransferType.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
#include "unitysdk/RPG/GameCore/UIAudioStage.h"
#include "unitysdk/System/Object.h"

class Class_1_04089E9105CCB96A;
class Class_1_0A0F7052F7BEDB7E;
class Class_1_23F67DD15593C8D6;
class Class_1_2B4C9D5EFCB958DD;
class Class_1_3A34A5229D2C5A1E;
class Class_1_A235F584F11D514A;
class Class_1_DAD06FCACDA2E3A8;
class Class_2_7A7212356C52D9CF;
namespace RPG::Client { class AboveSwitchDialog; }
namespace RPG::Client { class CartoonTransfer_Config; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RspHandler; }
namespace RPG::Client { class ScreenClickEffect; }
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class PlayScreenTransfer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_UIMANAGER_ADDSCREENTRANSFEREXITCALLBACK_OFFSET UNITYSDK_OFFSET(0xCB5CCA0)
#define RPG_CLIENT_UIMANAGER_ADDTICK_OFFSET UNITYSDK_OFFSET(0xCB61CF0)
#define RPG_CLIENT_UIMANAGER_BACKTOFIRSTPAGE_OFFSET UNITYSDK_OFFSET(0xCB5F4E0)
#define RPG_CLIENT_UIMANAGER_BACKTOPAGE_OFFSET UNITYSDK_OFFSET(0xCB5F6F0)
#define RPG_CLIENT_UIMANAGER_BEGINSHOWGROUP_OFFSET UNITYSDK_OFFSET(0xCB5ED70)
#define RPG_CLIENT_UIMANAGER_BLOCKFIXEDTIME_OFFSET UNITYSDK_OFFSET(0xCB5B7C0)
#define RPG_CLIENT_UIMANAGER_BLOCKFOREVERTIME_OFFSET UNITYSDK_OFFSET(0xCB5B880)
#define RPG_CLIENT_UIMANAGER_BLOCKWAITNETPACKET_OFFSET UNITYSDK_OFFSET(0xCB5B9D0)
#define RPG_CLIENT_UIMANAGER_CHECKINPERFORMANCESHOWUI_OFFSET UNITYSDK_OFFSET(0xCB62F30)
#define RPG_CLIENT_UIMANAGER_CLEARALLFULLSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xCB5D3A0)
#define RPG_CLIENT_UIMANAGER_CLEARFULLSCREENBLOCK_OFFSET UNITYSDK_OFFSET(0xCB5BBA0)
#define RPG_CLIENT_UIMANAGER_CLEARUISTACK_OFFSET UNITYSDK_OFFSET(0xCB5E6F0)
#define RPG_CLIENT_UIMANAGER_CLEARVIEWCACHE_OFFSET UNITYSDK_OFFSET(0xCB5EBB0)
#define RPG_CLIENT_UIMANAGER_CLEARWAITNETPACKETFULLSCREENBLOCK_OFFSET UNITYSDK_OFFSET(0xCB5BCA0)
#define RPG_CLIENT_UIMANAGER_CLOSEBELOWTRANSFER_OFFSET UNITYSDK_OFFSET(0xCB5CC30)
#define RPG_CLIENT_UIMANAGER_CLOSECUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xCB5D690)
#define RPG_CLIENT_UIMANAGER_CLOSESCREENTRANSFERDIALOG_OFFSET UNITYSDK_OFFSET(0xCB5C840)
#define RPG_CLIENT_UIMANAGER_CONTROLLERWILLAPPEAR_OFFSET UNITYSDK_OFFSET(0xCB5FC00)
#define RPG_CLIENT_UIMANAGER_CONTROLLERWILLDESTROY_OFFSET UNITYSDK_OFFSET(0xCB5FCE0)
#define RPG_CLIENT_UIMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB5E580)
#define RPG_CLIENT_UIMANAGER_ENABLEFULLSCREENBLOCK_OFFSET UNITYSDK_OFFSET(0xCB5BC20)
#define RPG_CLIENT_UIMANAGER_ENDSHOWGROUP_OFFSET UNITYSDK_OFFSET(0xCB5EFA0)
#define RPG_CLIENT_UIMANAGER_EXITABOVEDIALOG_OFFSET UNITYSDK_OFFSET(0xCB61C60)
#define RPG_CLIENT_UIMANAGER_EXITABOVEPAGE_OFFSET UNITYSDK_OFFSET(0xCB61C10)
#define RPG_CLIENT_UIMANAGER_EXITBELOWPAGE_OFFSET UNITYSDK_OFFSET(0xCB61B80)
#define RPG_CLIENT_UIMANAGER_GETABOVEDIALOGBYNAME_OFFSET UNITYSDK_OFFSET(0xCB61E20)
#define RPG_CLIENT_UIMANAGER_GETALLPAGENAMES_OFFSET UNITYSDK_OFFSET(0xCB5FE30)
#define RPG_CLIENT_UIMANAGER_GETCACHE_OFFSET UNITYSDK_OFFSET(0xCB5F100)
#define RPG_CLIENT_UIMANAGER_GETDIALOGBYDIALOGNAME_OFFSET UNITYSDK_OFFSET(0xCB61090)
#define RPG_CLIENT_UIMANAGER_GETDIALOGBYNAME_OFFSET UNITYSDK_OFFSET(0xCB60E80)
#define RPG_CLIENT_UIMANAGER_GETLAYERROOT_OFFSET UNITYSDK_OFFSET(0xCB61FF0)
#define RPG_CLIENT_UIMANAGER_GETMISSIONFULLSCREENTRANSFERSEQID_OFFSET UNITYSDK_OFFSET(0xCB5D910)
#define RPG_CLIENT_UIMANAGER_GETPAGEBYNAME_OFFSET UNITYSDK_OFFSET(0xCB60D50)
#define RPG_CLIENT_UIMANAGER_GETPAGEBYROOTNAME_OFFSET UNITYSDK_OFFSET(0xCB611F0)
#define RPG_CLIENT_UIMANAGER_GETTOPPAGEORDIALOGINSET_OFFSET UNITYSDK_OFFSET(0xCB61340)
#define RPG_CLIENT_UIMANAGER_GETTRANSITIONMANAGER_OFFSET UNITYSDK_OFFSET(0xCB630C0)
#define RPG_CLIENT_UIMANAGER_GETVIEWCACHE_OFFSET UNITYSDK_OFFSET(0xCB5EB10)
#define RPG_CLIENT_UIMANAGER_GET_FOCUSEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0xCB65080)
#define RPG_CLIENT_UIMANAGER_GET_FORBIDTASKOPENSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xCB5C400)
#define RPG_CLIENT_UIMANAGER_GET_FULLSCREENTRANSFERMANAGER_OFFSET UNITYSDK_OFFSET(0xCB5C410)
#define RPG_CLIENT_UIMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xCB650D0)
#define RPG_CLIENT_UIMANAGER_GET_ISBLOCK_OFFSET UNITYSDK_OFFSET(0xCB5BD70)
#define RPG_CLIENT_UIMANAGER_GET_ISINAUDIOPAUSEORFILTERING_OFFSET UNITYSDK_OFFSET(0xCB64FE0)
#define RPG_CLIENT_UIMANAGER_GET_ISINLOADINGPROCESS_OFFSET UNITYSDK_OFFSET(0xCB5BFF0)
#define RPG_CLIENT_UIMANAGER_GET_ISINSTORYMODE_OFFSET UNITYSDK_OFFSET(0xCB64FC0)
#define RPG_CLIENT_UIMANAGER_GET_ISSCREENTRANSFERFULLMASK_OFFSET UNITYSDK_OFFSET(0xCB5C370)
#define RPG_CLIENT_UIMANAGER_GET_ISSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xCB5C310)
#define RPG_CLIENT_UIMANAGER_GET_PAGESTACKCOUNT_OFFSET UNITYSDK_OFFSET(0xCB61650)
#define RPG_CLIENT_UIMANAGER_GET_SHOWSCREENCLICKEFFECT_OFFSET UNITYSDK_OFFSET(0xCB5C230)
#define RPG_CLIENT_UIMANAGER_GET_TOPPAGEDIALOGCOUNT_OFFSET UNITYSDK_OFFSET(0xCB616B0)
#define RPG_CLIENT_UIMANAGER_GET_TRANSITIONUICONTROLLER_OFFSET UNITYSDK_OFFSET(0xCB650A0)
#define RPG_CLIENT_UIMANAGER_GET_UICONTROLLERGROUP_OFFSET UNITYSDK_OFFSET(0xCB650C0)
#define RPG_CLIENT_UIMANAGER_HANDLEEXITCONTEXT_OFFSET UNITYSDK_OFFSET(0xCB3B160)
#define RPG_CLIENT_UIMANAGER_HANDLESHOWCONTEXT_OFFSET UNITYSDK_OFFSET(0xCB39F20)
#define RPG_CLIENT_UIMANAGER_HASABOVEDIALOGINSTACK_OFFSET UNITYSDK_OFFSET(0xCB602B0)
#define RPG_CLIENT_UIMANAGER_HASDIALOGINSTACK_OFFSET UNITYSDK_OFFSET(0xCB60160)
#define RPG_CLIENT_UIMANAGER_HASPAGEINSTACK_OFFSET UNITYSDK_OFFSET(0xCB60020)
#define RPG_CLIENT_UIMANAGER_HIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xCB5BF60)
#define RPG_CLIENT_UIMANAGER_INITVIEWCACHE_OFFSET UNITYSDK_OFFSET(0xCB5E140)
#define RPG_CLIENT_UIMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xCB5DE40)
#define RPG_CLIENT_UIMANAGER_ISBATTLEGAMEPAGE_OFFSET UNITYSDK_OFFSET(0xCB63210)
#define RPG_CLIENT_UIMANAGER_ISCUSTOMSCREENTRANSFERFULLOPENED_OFFSET UNITYSDK_OFFSET(0xCB5D7E0)
#define RPG_CLIENT_UIMANAGER_ISCUSTOMSCREENTRANSFEROPENED_OFFSET UNITYSDK_OFFSET(0xCB5D720)
#define RPG_CLIENT_UIMANAGER_ISDIALOGSTACKEMPTY_OFFSET UNITYSDK_OFFSET(0xCB60400)
#define RPG_CLIENT_UIMANAGER_ISFOCUSONABOVEDIALOG_OFFSET UNITYSDK_OFFSET(0xCB60AE0)
#define RPG_CLIENT_UIMANAGER_ISMAZEMAINPAGE_OFFSET UNITYSDK_OFFSET(0xCB63110)
#define RPG_CLIENT_UIMANAGER_ISONBATTLEGAMEPAGE_OFFSET UNITYSDK_OFFSET(0xCB63340)
#define RPG_CLIENT_UIMANAGER_ISONMAZEMAINPAGE_OFFSET UNITYSDK_OFFSET(0xCB632B0)
#define RPG_CLIENT_UIMANAGER_ISTRANSFERREASONACTIVE_OFFSET UNITYSDK_OFFSET(0xCB5D580)
#define RPG_CLIENT_UIMANAGER_ISUILOCKED_OFFSET UNITYSDK_OFFSET(0xCB62090)
#define RPG_CLIENT_UIMANAGER_ISVIEWCACHEENABLE_OFFSET UNITYSDK_OFFSET(0xCB5E320)
#define RPG_CLIENT_UIMANAGER_NEXTPAGE_OFFSET UNITYSDK_OFFSET(0xCB5FDE0)
#define RPG_CLIENT_UIMANAGER_NOTIFYPLAYSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xCB5C8F0)
#define RPG_CLIENT_UIMANAGER_ONBACKPRESSED_OFFSET UNITYSDK_OFFSET(0xCB60A60)
#define RPG_CLIENT_UIMANAGER_ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0xCB5F2A0)
#define RPG_CLIENT_UIMANAGER_ONSCREENTRANSFEREXITFULLMASK_OFFSET UNITYSDK_OFFSET(0xCB5D160)
#define RPG_CLIENT_UIMANAGER_ONSCREENTRANSFERFULLMASK_OFFSET UNITYSDK_OFFSET(0xCB5D0D0)
#define RPG_CLIENT_UIMANAGER_ONUIBLURSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xCB63460)
#define RPG_CLIENT_UIMANAGER_OPENCUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xCB5D600)
#define RPG_CLIENT_UIMANAGER_OPENSCREENTRANSFERDIALOG_1_OFFSET UNITYSDK_OFFSET(0xCB5C4E0)
#define RPG_CLIENT_UIMANAGER_OPENSCREENTRANSFERDIALOG_OFFSET UNITYSDK_OFFSET(0xCB5C420)
#define RPG_CLIENT_UIMANAGER_PLAYCARTOONSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xCB5CD50)
#define RPG_CLIENT_UIMANAGER_PLAYFULLSCREENTRANSFERWITHDURATION_OFFSET UNITYSDK_OFFSET(0xCB5D2D0)
#define RPG_CLIENT_UIMANAGER_PLAYFULLSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xCB5D240)
#define RPG_CLIENT_UIMANAGER_RELEASEALLCACHE_OFFSET UNITYSDK_OFFSET(0xCB5F260)
#define RPG_CLIENT_UIMANAGER_REMOVECONTROLLER_OFFSET UNITYSDK_OFFSET(0xCB3B7C0)
#define RPG_CLIENT_UIMANAGER_REMOVEDIALOG_OFFSET UNITYSDK_OFFSET(0xCB609D0)
#define RPG_CLIENT_UIMANAGER_REMOVEPAGE_OFFSET UNITYSDK_OFFSET(0xCB60940)
#define RPG_CLIENT_UIMANAGER_REMOVETICK_OFFSET UNITYSDK_OFFSET(0xCB61DB0)
#define RPG_CLIENT_UIMANAGER_RESETFOCUSEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0xCB624C0)
#define RPG_CLIENT_UIMANAGER_RESETVIEWCACHE_OFFSET UNITYSDK_OFFSET(0xCB5E3D0)
#define RPG_CLIENT_UIMANAGER_RETURNTOCACHE_OFFSET UNITYSDK_OFFSET(0xCB5F1C0)
#define RPG_CLIENT_UIMANAGER_SECONDTOPPAGEDIALOG_OFFSET UNITYSDK_OFFSET(0xCB61990)
#define RPG_CLIENT_UIMANAGER_SETAUDIOLOADING_OFFSET UNITYSDK_OFFSET(0xCB62520)
#define RPG_CLIENT_UIMANAGER_SETAUDIOOPENNORMALUI_OFFSET UNITYSDK_OFFSET(0xCB62990)
#define RPG_CLIENT_UIMANAGER_SETAUDIOOPENSCREENTRANS_OFFSET UNITYSDK_OFFSET(0xCB62A70)
#define RPG_CLIENT_UIMANAGER_SETAUDIOPAUSEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xCB62C00)
#define RPG_CLIENT_UIMANAGER_SETAUDIOPAUSE_OFFSET UNITYSDK_OFFSET(0xCB62B50)
#define RPG_CLIENT_UIMANAGER_SETFORBIDTASKOPENSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xCB5D1F0)
#define RPG_CLIENT_UIMANAGER_SETINLOADINGPROCESS_OFFSET UNITYSDK_OFFSET(0xCB5BE80)
#define RPG_CLIENT_UIMANAGER_SETISTRANSFERREASONACTIVELUAFUNC_OFFSET UNITYSDK_OFFSET(0xCB5D530)
#define RPG_CLIENT_UIMANAGER_SETLOADINGPROGRESS_OFFSET UNITYSDK_OFFSET(0xCB5BEE0)
#define RPG_CLIENT_UIMANAGER_SETTRANSFERLUATABLE_OFFSET UNITYSDK_OFFSET(0xCB5D4E0)
#define RPG_CLIENT_UIMANAGER_SETUPLONGPRESSHINTSHOW_OFFSET UNITYSDK_OFFSET(0xCB62CB0)
#define RPG_CLIENT_UIMANAGER_SETVIEWCACHEENABLE_OFFSET UNITYSDK_OFFSET(0xCB5E370)
#define RPG_CLIENT_UIMANAGER_SET_FOCUSEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0xCB65090)
#define RPG_CLIENT_UIMANAGER_SET_ISINLOADINGPROCESS_OFFSET UNITYSDK_OFFSET(0xCB5C000)
#define RPG_CLIENT_UIMANAGER_SET_ISINSTORYMODE_OFFSET UNITYSDK_OFFSET(0xCB64FD0)
#define RPG_CLIENT_UIMANAGER_SET_SHOWSCREENCLICKEFFECT_OFFSET UNITYSDK_OFFSET(0xCB5C290)
#define RPG_CLIENT_UIMANAGER_SET_TRANSITIONUICONTROLLER_OFFSET UNITYSDK_OFFSET(0xCB650B0)
#define RPG_CLIENT_UIMANAGER_SHOULDSHOWANDROIDEXITUI_OFFSET UNITYSDK_OFFSET(0xCB60B40)
#define RPG_CLIENT_UIMANAGER_SHOULDSHOWCONTEXT_OFFSET UNITYSDK_OFFSET(0xCB39E70)
#define RPG_CLIENT_UIMANAGER_SHOWBELOWTRANSFER_OFFSET UNITYSDK_OFFSET(0xCB5CB70)
#define RPG_CLIENT_UIMANAGER_SHOWLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xCB5BDD0)
#define RPG_CLIENT_UIMANAGER_SWITCHINABOVETRANSFER_OFFSET UNITYSDK_OFFSET(0xCB5CAB0)
#define RPG_CLIENT_UIMANAGER_SWITCHOUTABOVETRANSFER_OFFSET UNITYSDK_OFFSET(0xCB5C960)
#define RPG_CLIENT_UIMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xCB60490)
#define RPG_CLIENT_UIMANAGER_TOPDIALOGORPAGE_OFFSET UNITYSDK_OFFSET(0xCB3D8E0)
#define RPG_CLIENT_UIMANAGER_TOPPAGEDIALOGNAME_OFFSET UNITYSDK_OFFSET(0xCB61920)
#define RPG_CLIENT_UIMANAGER_TOPPAGE_OFFSET UNITYSDK_OFFSET(0xCB3D980)
#define RPG_CLIENT_UIMANAGER_TRYUNBLOCKFIXEDTIME_OFFSET UNITYSDK_OFFSET(0xCB5BAE0)
#define RPG_CLIENT_UIMANAGER_TRYUNBLOCKWAITNETPACKET_OFFSET UNITYSDK_OFFSET(0xCB5BB40)
#define RPG_CLIENT_UIMANAGER_UNACTIVEPAGEBEHINDTOP_OFFSET UNITYSDK_OFFSET(0xCB60880)
#define RPG_CLIENT_UIMANAGER_UPDATECURSORSTATE_OFFSET UNITYSDK_OFFSET(0xCB62110)
#define RPG_CLIENT_UIMANAGER_UPDATEUIPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0xCB64BC0)
#define RPG_CLIENT_UIMANAGER__ADJUSTSIBLING_OFFSET UNITYSDK_OFFSET(0xCB64E80)
#define RPG_CLIENT_UIMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB65100)
#define RPG_CLIENT_UIMANAGER__CLEARCARTOONSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xCB5CF10)
#define RPG_CLIENT_UIMANAGER__CREATESCREENCLICKEFFECT_OFFSET UNITYSDK_OFFSET(0xCB5C010)
#define RPG_CLIENT_UIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCB5D960)
#define RPG_CLIENT_UIMANAGER__DISPATCHSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xCB64AF0)
#define RPG_CLIENT_UIMANAGER__DISPOSESCREENCLICKEFFECT_OFFSET UNITYSDK_OFFSET(0xCB5C1C0)
#define RPG_CLIENT_UIMANAGER__GETCONSTVALUE_OFFSET UNITYSDK_OFFSET(0xCB635D0)
#define RPG_CLIENT_UIMANAGER__GETFIRSTFOCUSABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0xCB64310)
#define RPG_CLIENT_UIMANAGER__GETFIRSTMAZEMAINPAGENAME_OFFSET UNITYSDK_OFFSET(0xCB5F530)
#define RPG_CLIENT_UIMANAGER__HASPAGEINSTACK_OFFSET UNITYSDK_OFFSET(0xCB5FA30)
#define RPG_CLIENT_UIMANAGER__ISLOGINPAGE_OFFSET UNITYSDK_OFFSET(0xCB64F00)
#define RPG_CLIENT_UIMANAGER__ISTOPINCURRENTLAYER_OFFSET UNITYSDK_OFFSET(0xCB648E0)
#define RPG_CLIENT_UIMANAGER__ONINPUTDISABLETIMEUP_OFFSET UNITYSDK_OFFSET(0xCB64C80)
#define RPG_CLIENT_UIMANAGER__ONPRESENTATIONCHANGED_OFFSET UNITYSDK_OFFSET(0xCB64250)
#define RPG_CLIENT_UIMANAGER__ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xCB649F0)
#define RPG_CLIENT_UIMANAGER__ONTOPCONTROLLERCHANGED_OFFSET UNITYSDK_OFFSET(0xCB64870)
#define RPG_CLIENT_UIMANAGER__ONUIEXIT_OFFSET UNITYSDK_OFFSET(0xCB5CF60)
#define RPG_CLIENT_UIMANAGER__PROCESSABOVEDIALOGENTERVIEW_OFFSET UNITYSDK_OFFSET(0xCB63F00)
#define RPG_CLIENT_UIMANAGER__PROCESSABOVEDIALOGEXITVIEW_OFFSET UNITYSDK_OFFSET(0xCB64190)
#define RPG_CLIENT_UIMANAGER__PROCESSABOVEPAGEENTERVIEW_OFFSET UNITYSDK_OFFSET(0xCB63DE0)
#define RPG_CLIENT_UIMANAGER__PROCESSBELOWPAGEENTERVIEW_OFFSET UNITYSDK_OFFSET(0xCB63E40)
#define RPG_CLIENT_UIMANAGER__PROCESSDEFAULTEXITVIEW_OFFSET UNITYSDK_OFFSET(0xCB641F0)
#define RPG_CLIENT_UIMANAGER__PROCESSDIALOGENTERVIEW_OFFSET UNITYSDK_OFFSET(0xCB63A70)
#define RPG_CLIENT_UIMANAGER__PROCESSDIALOGEXITVIEW_OFFSET UNITYSDK_OFFSET(0xCB640B0)
#define RPG_CLIENT_UIMANAGER__PROCESSPAGEENTERVIEW_OFFSET UNITYSDK_OFFSET(0xCB63810)
#define RPG_CLIENT_UIMANAGER__PROCESSPAGEEXITVIEW_OFFSET UNITYSDK_OFFSET(0xCB63FC0)
#define RPG_CLIENT_UIMANAGER__REFRESHAUDIOSTAGE_OFFSET UNITYSDK_OFFSET(0xCB625D0)
#define RPG_CLIENT_UIMANAGER__RESETAUDIOPAUSEANDFILTER_OFFSET UNITYSDK_OFFSET(0xCB64D20)
#define RPG_CLIENT_UIMANAGER__RESETMISSIONFULLSCREENTRANSFERSEQID_OFFSET UNITYSDK_OFFSET(0xCB5D430)
#define RPG_CLIENT_UIMANAGER__SETCURRENTFOCUSED_OFFSET UNITYSDK_OFFSET(0xCB64700)
#define RPG_CLIENT_UIMANAGER__SHOULDCACHE_OFFSET UNITYSDK_OFFSET(0xCB636A0)
#define RPG_CLIENT_UIMANAGER__TICKBLOCK_OFFSET UNITYSDK_OFFSET(0xCB5BD00)
#define RPG_CLIENT_UIMANAGER__TICKFULLSCREENTRANSFERMANAGER_OFFSET UNITYSDK_OFFSET(0xCB5D480)
#define RPG_CLIENT_UIMANAGER__UPDATECURSORSTATEBYCONTROLLER_OFFSET UNITYSDK_OFFSET(0xCB623B0)
#define RPG_CLIENT_UIMANAGER__UPDATEMULTITOUCHSTATE_OFFSET UNITYSDK_OFFSET(0xCB647F0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIManager_TypeDefinitionIndex = 68239;

	class UIManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_BATTLEGAMEPHASE_UIPREFAB_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x54AC0);
		}
		static ::System::String** StaticGet_GACHA_RESULT_DIALOG_PAHT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x54AC8);
		}
		static ::System::String** StaticGet_SCREEN_CLICK_EFFECT_PREFAB_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x54AD0);
		}
		static ::System::String** StaticGet_GACHA_OBTAIN_DIALOG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x54AD8);
		}
		static ::System::String** StaticGet_LOGIN_UI3D_PREFAB_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x54AE0);
		}
		static ::System::String** StaticGet_TALK_OPTION_UIPREFAB_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x54AE8);
		}
		static ::System::String** StaticGet_SCREEN_TRANSFER_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x54AF0);
		}
		static ::System::String** StaticGet_TALK_DIALOG_UIPREFAB_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x54AF8);
		}
		static ::System::String** StaticGet_BATTLETOMAZE_SWITCH_PAGE_UIPREFAB_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x54B00);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__FullScreenBlockMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x54B08);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickListMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x54B10);
		}
		static ::System::String** StaticGet_COMMON_SWITCH_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x54B18);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__UIButtonEventManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x54B20);
		}
		static ::System::String** StaticGet_MAZETOBATTLE_SWITCH_PAGE_UIPREFAB_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x54B28);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__FullScreenTransferManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x54B30);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__InputDisableTickTimerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x54B38);
		}
		static ::System::Int32* StaticGet_ADV_DEFAULT_PAGE_COUNT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x10C80);
		}
		// static const ::System::String* CARTOON_TRANSFER_DIALOG; // 0x0
		// static const ::System::Single MIN_ASPECT_RATIO; // 0x0
		// static const ::System::Single MAX_ASPECT_RATIO; // 0x0
		// static const ::System::String* MAZE_MAIN_PAGE_NAME; // 0x0
		// static const ::System::String* LOGIN_PAGE_NAME; // 0x0
		// static const ::System::String* BATTLE_GAME_PAGE_NAME; // 0x0
		// static const ::System::String* FIVEDIM_MAIN_PAGE_NAME; // 0x0
		// static const ::System::String* FIVEDIM_WINDOW_STAGE_PAGE_NAME; // 0x0
		// static const ::System::String* FOUR_ROTATE_VOXEL_MAIN_PAGE_NAME; // 0x0
		// static const ::System::String* UI_ENABLE_VIEW_CACHE_KEY; // 0x0
		// static const ::System::String* PAGE_LRU_CACHE_CAPACITY_KEY; // 0x0
		// static const ::System::String* DIALOG_LRU_CACHE_CAPACITY_KEY; // 0x0
		// static const ::System::String* PAGE_LRU_CACHE_CAPACITY_IOS_KEY; // 0x0
		// static const ::System::String* DIALOG_LRU_CACHE_CAPACITY_IOS_KEY; // 0x0
		// static const ::System::Single INPUT_DISABLE_TIME; // 0x0
		::UnityEngine::Transform* _AboveDialogRoot; // 0x10
		::UnityEngine::Transform* _3DRoot; // 0x18
		::UnityEngine::Transform* _BelowPageRoot; // 0x20
		::Class_1_23F67DD15593C8D6* _InputDisableTickTimer; // 0x28
		::RPG::Client::UIController* _FocusedController_k__BackingField; // 0x30
		::RPG::Client::ScreenClickEffect* _MonoScreenClickEffect; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::Class_1_3A34A5229D2C5A1E*>* _ViewCacheByLayer; // 0x40
		::System::Collections::Generic::List_1<::System::Action*>* _ScreenTransferUIExitCallbacks; // 0x48
		::Class_1_04089E9105CCB96A* _PageStack; // 0x50
		::RPG::Client::AboveSwitchDialog* _AboveTransfer; // 0x58
		::UnityEngine::Transform* _PageRoot; // 0x60
		::RPG::Client::LuaUIController* _CartoonScreenTransferDialog; // 0x68
		::Class_1_04089E9105CCB96A* _BelowPages; // 0x70
		::UnityEngine::Transform* _AbovePageRoot; // 0x78
		::Class_1_04089E9105CCB96A* _DialogStack; // 0x80
		::Class_2_7A7212356C52D9CF* _BelowTransfer; // 0x88
		::Class_1_DAD06FCACDA2E3A8* _FullScreenBlock; // 0x90
		::System::Func_3<::XLua::LuaTable*, ::RPG::GameCore::ScreenTransferReason, ::System::Boolean>* _IsTransferReasonActiveLuaFunc; // 0x98
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::UIAudioStage, ::System::Int32>* _UIAudioStages; // 0xA0
		::UnityEngine::Transform* _DialogRoot; // 0xA8
		::Class_1_04089E9105CCB96A* _AboveDialogStack; // 0xB0
		::Class_1_2B4C9D5EFCB958DD* _ControllerGroup; // 0xB8
		::XLua::LuaTable* _ScreenTransferLuaTable; // 0xC0
		::System::Collections::Generic::List_1<::RPG::Client::UIController*>* _TickList; // 0xC8
		::RPG::Client::LuaUIController* _ScreenTransferDialog; // 0xD0
		::RPG::Client::LuaUIController* _TransitionUIController; // 0xD8
		::Class_1_A235F584F11D514A* _TransitionMgr; // 0xE0
		::UnityEngine::GameObject* _ObjScreenClickEffect; // 0xE8
		::Class_1_0A0F7052F7BEDB7E* _FullScreenTransferManager; // 0xF0
		::System::Boolean _isScreenFullMask; // 0xF8
		::System::Boolean _IsInStoryMode_k__BackingField; // 0xF9
		::System::Boolean _UseViewCache; // 0xFA
		::System::Boolean _IsInLoadingProcess_k__BackingField; // 0xFB
		::System::Int32 _CachedScreenHeight; // 0xFC
		::System::Boolean _ForbidTaskOpenScreenTransfer; // 0x100
		::System::Boolean _IsScreenSizeChanged; // 0x101
		::System::Boolean _IsAlreadyDisposed; // 0x102
		::System::UInt32 _BlockUID; // 0x104
		::System::Int32 _CachedScreenWidth; // 0x108
		::RPG::GameCore::UIAudioStage _CurrentUIAudioStage; // 0x10C
		::System::UInt32 _MissionFullScreenTransferSeqID; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__CCTOR_OFFSET))();
		}

		::System::UInt32 BlockFixedTime(::System::Single a1, ::System::Single a2, ::System::Action* a3, ::System::Boolean a4, ::System::String* a5)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BLOCKFIXEDTIME_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 BlockForeverTime(::System::Boolean a1, ::System::Single a2, ::System::Boolean a3, ::System::String* a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BLOCKFOREVERTIME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BlockWaitNetPacket(::System::UInt16 a1, ::RPG::Client::RspHandler* a2, ::System::Action* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::String* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::RPG::Client::RspHandler*, ::System::Action*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BLOCKWAITNETPACKET_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void TryUnblockFixedTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_TRYUNBLOCKFIXEDTIME_OFFSET))(this, a1);
		}

		::System::Void TryUnblockWaitNetPacket(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_TRYUNBLOCKWAITNETPACKET_OFFSET))(this, a1);
		}

		::System::Void ClearFullScreenBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLEARFULLSCREENBLOCK_OFFSET))(this);
		}

		::System::Void EnableFullScreenBlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ENABLEFULLSCREENBLOCK_OFFSET))(this, a1);
		}

		::System::Void ClearWaitNetPacketFullScreenBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLEARWAITNETPACKETFULLSCREENBLOCK_OFFSET))(this);
		}

		::System::Void _TickBlock(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__TICKBLOCK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_ISBLOCK_OFFSET))(this);
		}

		::System::Void ShowLoadingPage(::RPG::Client::LoadingStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoadingStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SHOWLOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void SetLoadingProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETLOADINGPROGRESS_OFFSET))(this, a1);
		}

		::System::Void HideLoadingPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HIDELOADINGPAGE_OFFSET))(this);
		}

		::System::Void SetInLoadingProcess(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETINLOADINGPROCESS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInLoadingProcess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_ISINLOADINGPROCESS_OFFSET))(this);
		}

		::System::Void set_IsInLoadingProcess(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SET_ISINLOADINGPROCESS_OFFSET))(this, a1);
		}

		::System::Void _CreateScreenClickEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__CREATESCREENCLICKEFFECT_OFFSET))(this);
		}

		::System::Void _DisposeScreenClickEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__DISPOSESCREENCLICKEFFECT_OFFSET))(this);
		}

		::System::Boolean get_ShowScreenClickEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_SHOWSCREENCLICKEFFECT_OFFSET))(this);
		}

		::System::Void set_ShowScreenClickEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SET_SHOWSCREENCLICKEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsScreenTransfer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_ISSCREENTRANSFER_OFFSET))(this);
		}

		::System::Boolean get_IsScreenTransferFullMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_ISSCREENTRANSFERFULLMASK_OFFSET))(this);
		}

		::System::Boolean get_ForbidTaskOpenScreenTransfer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_FORBIDTASKOPENSCREENTRANSFER_OFFSET))(this);
		}

		::Class_1_0A0F7052F7BEDB7E* get_FullScreenTransferManager()
		{
			return ((::Class_1_0A0F7052F7BEDB7E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_FULLSCREENTRANSFERMANAGER_OFFSET))(this);
		}

		::System::Void OpenScreenTransferDialog(::System::Single a1, ::RPG::GameCore::ScreenTransferReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_OPENSCREENTRANSFERDIALOG_OFFSET))(this, a1, a2);
		}

		::System::Void OpenScreenTransferDialog_1(::RPG::GameCore::PlayScreenTransfer* a1, ::RPG::GameCore::ScreenTransferReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayScreenTransfer*, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_OPENSCREENTRANSFERDIALOG_1_OFFSET))(this, a1, a2);
		}

		::System::Void CloseScreenTransferDialog(::System::Single a1, ::RPG::GameCore::ScreenTransferReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLOSESCREENTRANSFERDIALOG_OFFSET))(this, a1, a2);
		}

		::System::Void NotifyPlayScreenTransfer(::RPG::GameCore::PlayScreenTransfer* a1, ::RPG::GameCore::ScreenTransferReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayScreenTransfer*, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_NOTIFYPLAYSCREENTRANSFER_OFFSET))(this, a1, a2);
		}

		::System::Void SwitchOutAboveTransfer(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SWITCHOUTABOVETRANSFER_OFFSET))(this, a1);
		}

		::System::Void SwitchInAboveTransfer(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SWITCHINABOVETRANSFER_OFFSET))(this, a1);
		}

		::System::Void ShowBelowTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SHOWBELOWTRANSFER_OFFSET))(this);
		}

		::System::Void CloseBelowTransfer(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLOSEBELOWTRANSFER_OFFSET))(this, a1);
		}

		::System::Void AddScreenTransferExitCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ADDSCREENTRANSFEREXITCALLBACK_OFFSET))(this, a1);
		}

		::System::Void PlayCartoonScreenTransfer(::RPG::Client::CartoonTransfer_Config* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CartoonTransfer_Config*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_PLAYCARTOONSCREENTRANSFER_OFFSET))(this, a1);
		}

		::System::Void _ClearCartoonScreenTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__CLEARCARTOONSCREENTRANSFER_OFFSET))(this);
		}

		::System::Void _OnUIExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ONUIEXIT_OFFSET))(this);
		}

		::System::Void OnScreenTransferFullMask(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ONSCREENTRANSFERFULLMASK_OFFSET))(this, a1);
		}

		::System::Void OnScreenTransferExitFullMask(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ONSCREENTRANSFEREXITFULLMASK_OFFSET))(this, a1);
		}

		::System::Void SetForbidTaskOpenScreenTransfer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETFORBIDTASKOPENSCREENTRANSFER_OFFSET))(this, a1);
		}

		::System::Void PlayFullScreenTransfer(::RPG::GameCore::ScreenTransferReason a1, ::System::Action* a2, ::System::Func_1<::System::Boolean>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason, ::System::Action*, ::System::Func_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_PLAYFULLSCREENTRANSFER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayFullScreenTransferWithDuration(::RPG::GameCore::ScreenTransferReason a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Action* a5, ::System::Func_1<::System::Boolean>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason, ::System::Single, ::System::Single, ::System::Single, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_PLAYFULLSCREENTRANSFERWITHDURATION_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ClearAllFullScreenTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLEARALLFULLSCREENTRANSFER_OFFSET))(this);
		}

		::System::Void _TickFullScreenTransferManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__TICKFULLSCREENTRANSFERMANAGER_OFFSET))(this);
		}

		::System::Void SetTransferLuaTable(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETTRANSFERLUATABLE_OFFSET))(this, a1);
		}

		::System::Void SetIsTransferReasonActiveLuaFunc(::System::Func_3<::XLua::LuaTable*, ::RPG::GameCore::ScreenTransferReason, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_3<::XLua::LuaTable*, ::RPG::GameCore::ScreenTransferReason, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETISTRANSFERREASONACTIVELUAFUNC_OFFSET))(this, a1);
		}

		::System::Boolean IsTransferReasonActive(::RPG::GameCore::ScreenTransferReason a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISTRANSFERREASONACTIVE_OFFSET))(this, a1);
		}

		::System::Void OpenCustomScreenTransfer(::RPG::GameCore::CustomScreenTransferType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CustomScreenTransferType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_OPENCUSTOMSCREENTRANSFER_OFFSET))(this, a1);
		}

		::System::Void CloseCustomScreenTransfer(::RPG::GameCore::CustomScreenTransferType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CustomScreenTransferType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLOSECUSTOMSCREENTRANSFER_OFFSET))(this, a1);
		}

		::System::Boolean IsCustomScreenTransferOpened(::RPG::GameCore::CustomScreenTransferType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CustomScreenTransferType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISCUSTOMSCREENTRANSFEROPENED_OFFSET))(this, a1);
		}

		::System::Boolean IsCustomScreenTransferFullOpened(::RPG::GameCore::CustomScreenTransferType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CustomScreenTransferType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISCUSTOMSCREENTRANSFERFULLOPENED_OFFSET))(this, a1);
		}

		::System::UInt32 GetMissionFullScreenTransferSeqID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETMISSIONFULLSCREENTRANSFERSEQID_OFFSET))(this);
		}

		::System::Void _ResetMissionFullScreenTransferSeqID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__RESETMISSIONFULLSCREENTRANSFERSEQID_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_INIT_OFFSET))(this);
		}

		::System::Void InitViewCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_INITVIEWCACHE_OFFSET))(this);
		}

		::System::Boolean IsViewCacheEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISVIEWCACHEENABLE_OFFSET))(this);
		}

		::System::Void SetViewCacheEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETVIEWCACHEENABLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_DISPOSE_OFFSET))(this);
		}

		::Class_1_3A34A5229D2C5A1E* GetViewCache(::RPG::Client::UILayer a1)
		{
			return ((::Class_1_3A34A5229D2C5A1E*(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETVIEWCACHE_OFFSET))(this, a1);
		}

		::System::Void ClearViewCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLEARVIEWCACHE_OFFSET))(this);
		}

		::System::Void ResetViewCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_RESETVIEWCACHE_OFFSET))(this);
		}

		::System::Void BeginShowGroup(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BEGINSHOWGROUP_OFFSET))(this, a1);
		}

		::System::Void EndShowGroup(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ENDSHOWGROUP_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetCache(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETCACHE_OFFSET))(this, a1);
		}

		::System::Void ReturnToCache(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_RETURNTOCACHE_OFFSET))(this, a1);
		}

		::System::Void ReleaseAllCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_RELEASEALLCACHE_OFFSET))(this);
		}

		::System::Void OnNetworkReconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ONNETWORKRECONNECTED_OFFSET))(this);
		}

		::System::Void ClearUIStack(::RPG::Client::UIManager_ClearReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIManager_ClearReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLEARUISTACK_OFFSET))(this, a1);
		}

		::System::Void BackToFirstPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BACKTOFIRSTPAGE_OFFSET))(this);
		}

		::System::Void BackToPage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BACKTOPAGE_OFFSET))(this, a1);
		}

		::System::String* _GetFirstMazeMainPageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__GETFIRSTMAZEMAINPAGENAME_OFFSET))(this);
		}

		::System::Boolean _HasPageInStack(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__HASPAGEINSTACK_OFFSET))(this, a1);
		}

		::System::Void ControllerWillAppear(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CONTROLLERWILLAPPEAR_OFFSET))(this, a1);
		}

		::System::Void ControllerWillDestroy(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CONTROLLERWILLDESTROY_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* TopPage()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_TOPPAGE_OFFSET))(this);
		}

		::RPG::Client::UIController* NextPage()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_NEXTPAGE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetAllPageNames()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETALLPAGENAMES_OFFSET))(this);
		}

		::System::Boolean HasPageInStack(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HASPAGEINSTACK_OFFSET))(this, a1);
		}

		::System::Boolean HasDialogInStack(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HASDIALOGINSTACK_OFFSET))(this, a1);
		}

		::System::Boolean HasAboveDialogInStack(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HASABOVEDIALOGINSTACK_OFFSET))(this, a1);
		}

		::System::Boolean IsDialogStackEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISDIALOGSTACKEMPTY_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Boolean ShouldShowContext(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SHOULDSHOWCONTEXT_OFFSET))(this, a1);
		}

		::System::Void HandleShowContext(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HANDLESHOWCONTEXT_OFFSET))(this, a1);
		}

		::System::Void HandleExitContext(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HANDLEEXITCONTEXT_OFFSET))(this, a1);
		}

		::System::Void UnactivePageBehindTop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_UNACTIVEPAGEBEHINDTOP_OFFSET))(this);
		}

		::System::Void RemoveController(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_REMOVECONTROLLER_OFFSET))(this, a1);
		}

		::System::Void RemovePage(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_REMOVEPAGE_OFFSET))(this, a1);
		}

		::System::Void RemoveDialog(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_REMOVEDIALOG_OFFSET))(this, a1);
		}

		::System::Void OnBackPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ONBACKPRESSED_OFFSET))(this);
		}

		::RPG::Client::UIController* TopDialogOrPage()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_TOPDIALOGORPAGE_OFFSET))(this);
		}

		::System::Boolean IsFocusOnAboveDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISFOCUSONABOVEDIALOG_OFFSET))(this);
		}

		::System::Boolean ShouldShowAndroidExitUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SHOULDSHOWANDROIDEXITUI_OFFSET))(this);
		}

		::RPG::Client::UIController* GetPageByName(::System::String* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETPAGEBYNAME_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* GetDialogByName(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETDIALOGBYNAME_OFFSET))(this, a1, a2);
		}

		::RPG::Client::UIController* GetDialogByDialogName(::System::String* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETDIALOGBYDIALOGNAME_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* GetPageByRootName(::System::String* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETPAGEBYROOTNAME_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* GetTopPageOrDialogInSet(::System::Collections::Generic::HashSet_1<::RPG::Client::UIController*>* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::UIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETTOPPAGEORDIALOGINSET_OFFSET))(this, a1);
		}

		::System::Int32 get_PageStackCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_PAGESTACKCOUNT_OFFSET))(this);
		}

		::System::Int32 get_TopPageDialogCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_TOPPAGEDIALOGCOUNT_OFFSET))(this);
		}

		::System::String* TopPageDialogName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_TOPPAGEDIALOGNAME_OFFSET))(this);
		}

		::RPG::Client::UIController* SecondTopPageDialog()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SECONDTOPPAGEDIALOG_OFFSET))(this);
		}

		::System::Void ExitBelowPage(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_EXITBELOWPAGE_OFFSET))(this, a1);
		}

		::System::Void ExitAbovePage(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_EXITABOVEPAGE_OFFSET))(this, a1);
		}

		::System::Void ExitAboveDialog(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_EXITABOVEDIALOG_OFFSET))(this, a1);
		}

		::System::Void AddTick(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ADDTICK_OFFSET))(this, a1);
		}

		::System::Void RemoveTick(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_REMOVETICK_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* GetAboveDialogByName(::System::String* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETABOVEDIALOGBYNAME_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetLayerRoot(::RPG::Client::UILayer a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETLAYERROOT_OFFSET))(this, a1);
		}

		::System::Boolean IsUILocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISUILOCKED_OFFSET))(this);
		}

		::System::Void UpdateCursorState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_UPDATECURSORSTATE_OFFSET))(this);
		}

		::System::Void ResetFocusedController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_RESETFOCUSEDCONTROLLER_OFFSET))(this);
		}

		::System::Void SetAudioLoading(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETAUDIOLOADING_OFFSET))(this, a1);
		}

		::System::Void SetAudioOpenNormalUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETAUDIOOPENNORMALUI_OFFSET))(this, a1);
		}

		::System::Void SetAudioOpenScreenTrans(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETAUDIOOPENSCREENTRANS_OFFSET))(this, a1);
		}

		::System::Void SetAudioPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETAUDIOPAUSE_OFFSET))(this, a1);
		}

		::System::Void SetAudioPausePerformance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETAUDIOPAUSEPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void SetupLongPressHintShow(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETUPLONGPRESSHINTSHOW_OFFSET))(this, a1, a2);
		}

		::System::Void CheckInPerformanceShowUI(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CHECKINPERFORMANCESHOWUI_OFFSET))(this, a1);
		}

		::Class_1_A235F584F11D514A* GetTransitionManager()
		{
			return ((::Class_1_A235F584F11D514A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETTRANSITIONMANAGER_OFFSET))(this);
		}

		::System::Boolean IsMazeMainPage(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISMAZEMAINPAGE_OFFSET))(this, a1);
		}

		::System::Boolean IsBattleGamePage(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISBATTLEGAMEPAGE_OFFSET))(this, a1);
		}

		::System::Boolean IsOnMazeMainPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISONMAZEMAINPAGE_OFFSET))(this);
		}

		::System::Boolean IsOnBattleGamePage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISONBATTLEGAMEPAGE_OFFSET))(this);
		}

		::System::Void OnUIBlurStateChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ONUIBLURSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Int32 _GetConstValue(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__GETCONSTVALUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _ShouldCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__SHOULDCACHE_OFFSET))(this);
		}

		::System::Void _ProcessPageEnterView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSPAGEENTERVIEW_OFFSET))(this, a1);
		}

		::System::Void _ProcessDialogEnterView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSDIALOGENTERVIEW_OFFSET))(this, a1);
		}

		::System::Void _ProcessAbovePageEnterView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSABOVEPAGEENTERVIEW_OFFSET))(this, a1);
		}

		::System::Void _ProcessBelowPageEnterView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSBELOWPAGEENTERVIEW_OFFSET))(this, a1);
		}

		::System::Void _ProcessAboveDialogEnterView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSABOVEDIALOGENTERVIEW_OFFSET))(this, a1);
		}

		::System::Void _ProcessPageExitView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSPAGEEXITVIEW_OFFSET))(this, a1);
		}

		::System::Void _ProcessDialogExitView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSDIALOGEXITVIEW_OFFSET))(this, a1);
		}

		::System::Void _ProcessAboveDialogExitView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSABOVEDIALOGEXITVIEW_OFFSET))(this, a1);
		}

		::System::Void _ProcessDefaultExitView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSDEFAULTEXITVIEW_OFFSET))(this, a1);
		}

		::System::Void _OnPresentationChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ONPRESENTATIONCHANGED_OFFSET))(this);
		}

		::System::Void _OnTopControllerChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ONTOPCONTROLLERCHANGED_OFFSET))(this);
		}

		::System::Boolean _IsTopInCurrentLayer(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ISTOPINCURRENTLAYER_OFFSET))(this, a1);
		}

		::System::Void _SetCurrentFocused(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__SETCURRENTFOCUSED_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* _GetFirstFocusableController()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__GETFIRSTFOCUSABLECONTROLLER_OFFSET))(this);
		}

		::System::Void _OnScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ONSCREENSIZECHANGED_OFFSET))(this);
		}

		::System::Void _DispatchScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__DISPATCHSCREENSIZECHANGED_OFFSET))(this);
		}

		::System::Void UpdateUIPostProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_UPDATEUIPOSTPROCESS_OFFSET))(this);
		}

		::System::Void _OnInputDisableTimeup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ONINPUTDISABLETIMEUP_OFFSET))(this);
		}

		::System::Void _UpdateCursorStateByController(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__UPDATECURSORSTATEBYCONTROLLER_OFFSET))(this, a1);
		}

		::System::Void _UpdateMultiTouchState(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__UPDATEMULTITOUCHSTATE_OFFSET))(this, a1);
		}

		::System::Void _ResetAudioPauseAndFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__RESETAUDIOPAUSEANDFILTER_OFFSET))(this);
		}

		::System::Void _RefreshAudioStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__REFRESHAUDIOSTAGE_OFFSET))(this);
		}

		::System::Void _AdjustSibling(::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::UIController*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::UIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ADJUSTSIBLING_OFFSET))(this, a1);
		}

		::System::Boolean _IsLoginPage(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ISLOGINPAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInStoryMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_ISINSTORYMODE_OFFSET))(this);
		}

		::System::Void set_IsInStoryMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SET_ISINSTORYMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInAudioPauseOrFiltering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_ISINAUDIOPAUSEORFILTERING_OFFSET))(this);
		}

		::RPG::Client::UIController* get_FocusedController()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_FOCUSEDCONTROLLER_OFFSET))(this);
		}

		::System::Void set_FocusedController(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SET_FOCUSEDCONTROLLER_OFFSET))(this, a1);
		}

		::RPG::Client::LuaUIController* get_TransitionUIController()
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_TRANSITIONUICONTROLLER_OFFSET))(this);
		}

		::System::Void set_TransitionUIController(::RPG::Client::LuaUIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SET_TRANSITIONUICONTROLLER_OFFSET))(this, a1);
		}

		::Class_1_2B4C9D5EFCB958DD* get_UIControllerGroup()
		{
			return ((::Class_1_2B4C9D5EFCB958DD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_UICONTROLLERGROUP_OFFSET))(this);
		}

		static ::RPG::Client::UIManager* get_Instance()
		{
			return ((::RPG::Client::UIManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_INSTANCE_OFFSET))();
		}
	};
}
