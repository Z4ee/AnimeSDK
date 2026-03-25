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
class Class_1_148FC490588BDD52;
class Class_1_23F67DD15593C8D6;
class Class_1_3C0CE2272C8848D2;
class Class_1_9625D463385089F2;
class Class_1_A235F584F11D514A;
class Class_1_CDF8B69C5FFC3CE4;
class Class_2_2FE90C7827206D3B;
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

#define RPG_CLIENT_UIMANAGER_ADDSCREENTRANSFEREXITCALLBACK_OFFSET UNITYSDK_OFFSET(0xA6A2380)
#define RPG_CLIENT_UIMANAGER_ADDTICK_OFFSET UNITYSDK_OFFSET(0xA67EB00)
#define RPG_CLIENT_UIMANAGER_BACKTOFIRSTPAGE_OFFSET UNITYSDK_OFFSET(0xA6A5080)
#define RPG_CLIENT_UIMANAGER_BACKTOPAGE_OFFSET UNITYSDK_OFFSET(0xA6A5330)
#define RPG_CLIENT_UIMANAGER_BEGINSHOWGROUP_OFFSET UNITYSDK_OFFSET(0xA6A4780)
#define RPG_CLIENT_UIMANAGER_BLOCKFIXEDTIME_OFFSET UNITYSDK_OFFSET(0xA6A0E10)
#define RPG_CLIENT_UIMANAGER_BLOCKFOREVERTIME_OFFSET UNITYSDK_OFFSET(0xA6A0ED0)
#define RPG_CLIENT_UIMANAGER_BLOCKWAITNETPACKET_OFFSET UNITYSDK_OFFSET(0xA6A1020)
#define RPG_CLIENT_UIMANAGER_CHECKINPERFORMANCESHOWUI_OFFSET UNITYSDK_OFFSET(0xA67E110)
#define RPG_CLIENT_UIMANAGER_CLEARALLFULLSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xA6A2A40)
#define RPG_CLIENT_UIMANAGER_CLEARFULLSCREENBLOCK_OFFSET UNITYSDK_OFFSET(0xA6A11F0)
#define RPG_CLIENT_UIMANAGER_CLEARUISTACK_OFFSET UNITYSDK_OFFSET(0xA6A3DF0)
#define RPG_CLIENT_UIMANAGER_CLEARVIEWCACHE_OFFSET UNITYSDK_OFFSET(0xA6A4620)
#define RPG_CLIENT_UIMANAGER_CLEARWAITNETPACKETFULLSCREENBLOCK_OFFSET UNITYSDK_OFFSET(0xA6A12F0)
#define RPG_CLIENT_UIMANAGER_CLOSEBELOWTRANSFER_OFFSET UNITYSDK_OFFSET(0xA6A2310)
#define RPG_CLIENT_UIMANAGER_CLOSECUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xA6A2D10)
#define RPG_CLIENT_UIMANAGER_CLOSESCREENTRANSFERDIALOG_OFFSET UNITYSDK_OFFSET(0xA6A1F00)
#define RPG_CLIENT_UIMANAGER_CONTROLLERWILLAPPEAR_OFFSET UNITYSDK_OFFSET(0xA6A5B50)
#define RPG_CLIENT_UIMANAGER_CONTROLLERWILLDESTROY_OFFSET UNITYSDK_OFFSET(0xA6A5CB0)
#define RPG_CLIENT_UIMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6A3C70)
#define RPG_CLIENT_UIMANAGER_ENABLEFULLSCREENBLOCK_OFFSET UNITYSDK_OFFSET(0xA6A1270)
#define RPG_CLIENT_UIMANAGER_ENDSHOWGROUP_OFFSET UNITYSDK_OFFSET(0xA6A4A00)
#define RPG_CLIENT_UIMANAGER_EXITABOVEDIALOG_OFFSET UNITYSDK_OFFSET(0xA6A7CC0)
#define RPG_CLIENT_UIMANAGER_EXITABOVEPAGE_OFFSET UNITYSDK_OFFSET(0xA6A7C70)
#define RPG_CLIENT_UIMANAGER_EXITBELOWPAGE_OFFSET UNITYSDK_OFFSET(0xA6A7BE0)
#define RPG_CLIENT_UIMANAGER_GETABOVEDIALOGBYNAME_OFFSET UNITYSDK_OFFSET(0xA6A9590)
#define RPG_CLIENT_UIMANAGER_GETALLPAGENAMES_OFFSET UNITYSDK_OFFSET(0xA6A6010)
#define RPG_CLIENT_UIMANAGER_GETCACHE_OFFSET UNITYSDK_OFFSET(0xA6A4B60)
#define RPG_CLIENT_UIMANAGER_GETDIALOGBYDIALOGNAME_OFFSET UNITYSDK_OFFSET(0xA6A8720)
#define RPG_CLIENT_UIMANAGER_GETDIALOGBYNAME_OFFSET UNITYSDK_OFFSET(0xA6A83D0)
#define RPG_CLIENT_UIMANAGER_GETLAYERROOT_OFFSET UNITYSDK_OFFSET(0xA6A96C0)
#define RPG_CLIENT_UIMANAGER_GETMISSIONFULLSCREENTRANSFERSEQID_OFFSET UNITYSDK_OFFSET(0xA6A2F90)
#define RPG_CLIENT_UIMANAGER_GETPAGEBYNAME_OFFSET UNITYSDK_OFFSET(0xA6A8200)
#define RPG_CLIENT_UIMANAGER_GETPAGEBYROOTNAME_OFFSET UNITYSDK_OFFSET(0xA6A8960)
#define RPG_CLIENT_UIMANAGER_GETTOPPAGEORDIALOGINSET_OFFSET UNITYSDK_OFFSET(0xA6A8B40)
#define RPG_CLIENT_UIMANAGER_GETTRANSITIONMANAGER_OFFSET UNITYSDK_OFFSET(0xA67F030)
#define RPG_CLIENT_UIMANAGER_GETVIEWCACHE_OFFSET UNITYSDK_OFFSET(0xA6A43E0)
#define RPG_CLIENT_UIMANAGER_GET_FOCUSEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA6AAB80)
#define RPG_CLIENT_UIMANAGER_GET_FORBIDTASKOPENSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xA6A1B00)
#define RPG_CLIENT_UIMANAGER_GET_FULLSCREENTRANSFERMANAGER_OFFSET UNITYSDK_OFFSET(0xA6A1B10)
#define RPG_CLIENT_UIMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA6AABD0)
#define RPG_CLIENT_UIMANAGER_GET_ISBLOCK_OFFSET UNITYSDK_OFFSET(0xA6A13C0)
#define RPG_CLIENT_UIMANAGER_GET_ISINAUDIOPAUSEORFILTERING_OFFSET UNITYSDK_OFFSET(0xA6AAAF0)
#define RPG_CLIENT_UIMANAGER_GET_ISINLOADINGPROCESS_OFFSET UNITYSDK_OFFSET(0xA6A16F0)
#define RPG_CLIENT_UIMANAGER_GET_ISINSTORYMODE_OFFSET UNITYSDK_OFFSET(0xA6AAAD0)
#define RPG_CLIENT_UIMANAGER_GET_ISSCREENTRANSFERFULLMASK_OFFSET UNITYSDK_OFFSET(0xA6A1A70)
#define RPG_CLIENT_UIMANAGER_GET_ISSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xA6A1A10)
#define RPG_CLIENT_UIMANAGER_GET_PAGESTACKCOUNT_OFFSET UNITYSDK_OFFSET(0xA6A8ED0)
#define RPG_CLIENT_UIMANAGER_GET_SHOWSCREENCLICKEFFECT_OFFSET UNITYSDK_OFFSET(0xA6A1930)
#define RPG_CLIENT_UIMANAGER_GET_TOPPAGEDIALOGCOUNT_OFFSET UNITYSDK_OFFSET(0xA6A8F30)
#define RPG_CLIENT_UIMANAGER_GET_TRANSITIONUICONTROLLER_OFFSET UNITYSDK_OFFSET(0xA6AABA0)
#define RPG_CLIENT_UIMANAGER_GET_UICONTROLLERGROUP_OFFSET UNITYSDK_OFFSET(0xA6AABC0)
#define RPG_CLIENT_UIMANAGER_HANDLEEXITCONTEXT_OFFSET UNITYSDK_OFFSET(0xA67F7C0)
#define RPG_CLIENT_UIMANAGER_HANDLESHOWCONTEXT_OFFSET UNITYSDK_OFFSET(0xA67E2E0)
#define RPG_CLIENT_UIMANAGER_HASABOVEDIALOGINSTACK_OFFSET UNITYSDK_OFFSET(0xA6A65E0)
#define RPG_CLIENT_UIMANAGER_HASDIALOGINSTACK_OFFSET UNITYSDK_OFFSET(0xA6A6410)
#define RPG_CLIENT_UIMANAGER_HASPAGEINSTACK_OFFSET UNITYSDK_OFFSET(0xA6A6230)
#define RPG_CLIENT_UIMANAGER_HIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xA6A15F0)
#define RPG_CLIENT_UIMANAGER_INITVIEWCACHE_OFFSET UNITYSDK_OFFSET(0xA6A37D0)
#define RPG_CLIENT_UIMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xA6A34E0)
#define RPG_CLIENT_UIMANAGER_ISBATTLEGAMEPAGE_OFFSET UNITYSDK_OFFSET(0xA6A8160)
#define RPG_CLIENT_UIMANAGER_ISCUSTOMSCREENTRANSFERFULLOPENED_OFFSET UNITYSDK_OFFSET(0xA6A2E60)
#define RPG_CLIENT_UIMANAGER_ISCUSTOMSCREENTRANSFEROPENED_OFFSET UNITYSDK_OFFSET(0xA6A2DA0)
#define RPG_CLIENT_UIMANAGER_ISDIALOGSTACKEMPTY_OFFSET UNITYSDK_OFFSET(0xA6A67C0)
#define RPG_CLIENT_UIMANAGER_ISFOCUSONABOVEDIALOG_OFFSET UNITYSDK_OFFSET(0xA6A7DD0)
#define RPG_CLIENT_UIMANAGER_ISMAZEMAINPAGE_OFFSET UNITYSDK_OFFSET(0xA6A5A50)
#define RPG_CLIENT_UIMANAGER_ISONBATTLEGAMEPAGE_OFFSET UNITYSDK_OFFSET(0xA6AA1F0)
#define RPG_CLIENT_UIMANAGER_ISONMAZEMAINPAGE_OFFSET UNITYSDK_OFFSET(0xA6AA120)
#define RPG_CLIENT_UIMANAGER_ISTRANSFERREASONACTIVE_OFFSET UNITYSDK_OFFSET(0xA6A2C10)
#define RPG_CLIENT_UIMANAGER_ISUILOCKED_OFFSET UNITYSDK_OFFSET(0xA6A9760)
#define RPG_CLIENT_UIMANAGER_ISVIEWCACHEENABLE_OFFSET UNITYSDK_OFFSET(0xA6A3A80)
#define RPG_CLIENT_UIMANAGER_NEXTPAGE_OFFSET UNITYSDK_OFFSET(0xA6A5F70)
#define RPG_CLIENT_UIMANAGER_NOTIFYPLAYSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xA6A1FB0)
#define RPG_CLIENT_UIMANAGER_ONBACKPRESSED_OFFSET UNITYSDK_OFFSET(0xA6A7D50)
#define RPG_CLIENT_UIMANAGER_ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0xA6A4D00)
#define RPG_CLIENT_UIMANAGER_ONSCREENTRANSFEREXITFULLMASK_OFFSET UNITYSDK_OFFSET(0xA6A2800)
#define RPG_CLIENT_UIMANAGER_ONSCREENTRANSFERFULLMASK_OFFSET UNITYSDK_OFFSET(0xA6A2770)
#define RPG_CLIENT_UIMANAGER_ONUIBLURSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xA6AA370)
#define RPG_CLIENT_UIMANAGER_OPENCUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xA6A2C80)
#define RPG_CLIENT_UIMANAGER_OPENSCREENTRANSFERDIALOG_1_OFFSET UNITYSDK_OFFSET(0xA6A1BE0)
#define RPG_CLIENT_UIMANAGER_OPENSCREENTRANSFERDIALOG_OFFSET UNITYSDK_OFFSET(0xA6A1B20)
#define RPG_CLIENT_UIMANAGER_PLAYCARTOONSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xA6A2410)
#define RPG_CLIENT_UIMANAGER_PLAYFULLSCREENTRANSFERWITHDURATION_OFFSET UNITYSDK_OFFSET(0xA6A2970)
#define RPG_CLIENT_UIMANAGER_PLAYFULLSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xA6A28E0)
#define RPG_CLIENT_UIMANAGER_RELEASEALLCACHE_OFFSET UNITYSDK_OFFSET(0xA6A4CC0)
#define RPG_CLIENT_UIMANAGER_REMOVECONTROLLER_OFFSET UNITYSDK_OFFSET(0xA67FE80)
#define RPG_CLIENT_UIMANAGER_REMOVEDIALOG_OFFSET UNITYSDK_OFFSET(0xA6A7B50)
#define RPG_CLIENT_UIMANAGER_REMOVEPAGE_OFFSET UNITYSDK_OFFSET(0xA6A7AC0)
#define RPG_CLIENT_UIMANAGER_REMOVETICK_OFFSET UNITYSDK_OFFSET(0xA67EC40)
#define RPG_CLIENT_UIMANAGER_RESETFOCUSEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA6A98F0)
#define RPG_CLIENT_UIMANAGER_RESETVIEWCACHE_OFFSET UNITYSDK_OFFSET(0xA6A3B30)
#define RPG_CLIENT_UIMANAGER_RETURNTOCACHE_OFFSET UNITYSDK_OFFSET(0xA6A4C20)
#define RPG_CLIENT_UIMANAGER_SECONDTOPPAGEDIALOG_OFFSET UNITYSDK_OFFSET(0xA6A9300)
#define RPG_CLIENT_UIMANAGER_SETAUDIOLOADING_OFFSET UNITYSDK_OFFSET(0xA6A1650)
#define RPG_CLIENT_UIMANAGER_SETAUDIOOPENNORMALUI_OFFSET UNITYSDK_OFFSET(0xA6A9CE0)
#define RPG_CLIENT_UIMANAGER_SETAUDIOOPENSCREENTRANS_OFFSET UNITYSDK_OFFSET(0xA6A9DC0)
#define RPG_CLIENT_UIMANAGER_SETAUDIOPAUSEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA6A9F40)
#define RPG_CLIENT_UIMANAGER_SETAUDIOPAUSE_OFFSET UNITYSDK_OFFSET(0xA6A9EA0)
#define RPG_CLIENT_UIMANAGER_SETFORBIDTASKOPENSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xA6A2890)
#define RPG_CLIENT_UIMANAGER_SETINLOADINGPROCESS_OFFSET UNITYSDK_OFFSET(0xA6A14A0)
#define RPG_CLIENT_UIMANAGER_SETISTRANSFERREASONACTIVELUAFUNC_OFFSET UNITYSDK_OFFSET(0xA6A2BC0)
#define RPG_CLIENT_UIMANAGER_SETLOADINGPROGRESS_OFFSET UNITYSDK_OFFSET(0xA6A1570)
#define RPG_CLIENT_UIMANAGER_SETTRANSFERLUATABLE_OFFSET UNITYSDK_OFFSET(0xA6A2B70)
#define RPG_CLIENT_UIMANAGER_SETUPLONGPRESSHINTSHOW_OFFSET UNITYSDK_OFFSET(0xA6A9FE0)
#define RPG_CLIENT_UIMANAGER_SETVIEWCACHEENABLE_OFFSET UNITYSDK_OFFSET(0xA6A3AD0)
#define RPG_CLIENT_UIMANAGER_SET_FOCUSEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA6AAB90)
#define RPG_CLIENT_UIMANAGER_SET_ISINLOADINGPROCESS_OFFSET UNITYSDK_OFFSET(0xA6A1700)
#define RPG_CLIENT_UIMANAGER_SET_ISINSTORYMODE_OFFSET UNITYSDK_OFFSET(0xA6AAAE0)
#define RPG_CLIENT_UIMANAGER_SET_SHOWSCREENCLICKEFFECT_OFFSET UNITYSDK_OFFSET(0xA6A1990)
#define RPG_CLIENT_UIMANAGER_SET_TRANSITIONUICONTROLLER_OFFSET UNITYSDK_OFFSET(0xA6AABB0)
#define RPG_CLIENT_UIMANAGER_SHOULDSHOWANDROIDEXITUI_OFFSET UNITYSDK_OFFSET(0xA6A7E30)
#define RPG_CLIENT_UIMANAGER_SHOULDSHOWCONTEXT_OFFSET UNITYSDK_OFFSET(0xA67E0B0)
#define RPG_CLIENT_UIMANAGER_SHOWBELOWTRANSFER_OFFSET UNITYSDK_OFFSET(0xA6A2250)
#define RPG_CLIENT_UIMANAGER_SHOWLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xA6A1420)
#define RPG_CLIENT_UIMANAGER_SWITCHINABOVETRANSFER_OFFSET UNITYSDK_OFFSET(0xA6A2180)
#define RPG_CLIENT_UIMANAGER_SWITCHOUTABOVETRANSFER_OFFSET UNITYSDK_OFFSET(0xA6A2020)
#define RPG_CLIENT_UIMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xA6A6850)
#define RPG_CLIENT_UIMANAGER_TOPDIALOGORPAGE_OFFSET UNITYSDK_OFFSET(0xA681FB0)
#define RPG_CLIENT_UIMANAGER_TOPPAGEDIALOGNAME_OFFSET UNITYSDK_OFFSET(0xA6A9290)
#define RPG_CLIENT_UIMANAGER_TOPPAGE_OFFSET UNITYSDK_OFFSET(0xA682090)
#define RPG_CLIENT_UIMANAGER_TRYUNBLOCKFIXEDTIME_OFFSET UNITYSDK_OFFSET(0xA6A1130)
#define RPG_CLIENT_UIMANAGER_TRYUNBLOCKWAITNETPACKET_OFFSET UNITYSDK_OFFSET(0xA6A1190)
#define RPG_CLIENT_UIMANAGER_UNACTIVEPAGEBEHINDTOP_OFFSET UNITYSDK_OFFSET(0xA6A7980)
#define RPG_CLIENT_UIMANAGER_UPDATECURSORSTATE_OFFSET UNITYSDK_OFFSET(0xA685F60)
#define RPG_CLIENT_UIMANAGER_UPDATEUIPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0xA67F2E0)
#define RPG_CLIENT_UIMANAGER__ADJUSTSIBLING_OFFSET UNITYSDK_OFFSET(0xA6A5C30)
#define RPG_CLIENT_UIMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6AAC00)
#define RPG_CLIENT_UIMANAGER__CLEARCARTOONSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xA6A25F0)
#define RPG_CLIENT_UIMANAGER__CREATESCREENCLICKEFFECT_OFFSET UNITYSDK_OFFSET(0xA6A1710)
#define RPG_CLIENT_UIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA6A2FE0)
#define RPG_CLIENT_UIMANAGER__DISPATCHSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA6A6C20)
#define RPG_CLIENT_UIMANAGER__DISPOSESCREENCLICKEFFECT_OFFSET UNITYSDK_OFFSET(0xA6A18C0)
#define RPG_CLIENT_UIMANAGER__GETCONSTVALUE_OFFSET UNITYSDK_OFFSET(0xA6A39B0)
#define RPG_CLIENT_UIMANAGER__GETFIRSTFOCUSABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0xA6AA4D0)
#define RPG_CLIENT_UIMANAGER__GETFIRSTMAZEMAINPAGENAME_OFFSET UNITYSDK_OFFSET(0xA6A50D0)
#define RPG_CLIENT_UIMANAGER__HASPAGEINSTACK_OFFSET UNITYSDK_OFFSET(0xA6A5750)
#define RPG_CLIENT_UIMANAGER__ISLOGINPAGE_OFFSET UNITYSDK_OFFSET(0xA6A80A0)
#define RPG_CLIENT_UIMANAGER__ISTOPINCURRENTLAYER_OFFSET UNITYSDK_OFFSET(0xA6A5DB0)
#define RPG_CLIENT_UIMANAGER__ONINPUTDISABLETIMEUP_OFFSET UNITYSDK_OFFSET(0xA6AAA30)
#define RPG_CLIENT_UIMANAGER__ONPRESENTATIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA6A5920)
#define RPG_CLIENT_UIMANAGER__ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA6A6CF0)
#define RPG_CLIENT_UIMANAGER__ONTOPCONTROLLERCHANGED_OFFSET UNITYSDK_OFFSET(0xA6A59E0)
#define RPG_CLIENT_UIMANAGER__ONUIEXIT_OFFSET UNITYSDK_OFFSET(0xA6A2640)
#define RPG_CLIENT_UIMANAGER__PROCESSABOVEDIALOGENTERVIEW_OFFSET UNITYSDK_OFFSET(0xA6A7590)
#define RPG_CLIENT_UIMANAGER__PROCESSABOVEDIALOGEXITVIEW_OFFSET UNITYSDK_OFFSET(0xA6A78C0)
#define RPG_CLIENT_UIMANAGER__PROCESSABOVEPAGEENTERVIEW_OFFSET UNITYSDK_OFFSET(0xA6A74B0)
#define RPG_CLIENT_UIMANAGER__PROCESSBELOWPAGEENTERVIEW_OFFSET UNITYSDK_OFFSET(0xA6A7510)
#define RPG_CLIENT_UIMANAGER__PROCESSDEFAULTEXITVIEW_OFFSET UNITYSDK_OFFSET(0xA6A7920)
#define RPG_CLIENT_UIMANAGER__PROCESSDIALOGENTERVIEW_OFFSET UNITYSDK_OFFSET(0xA6A6FF0)
#define RPG_CLIENT_UIMANAGER__PROCESSDIALOGEXITVIEW_OFFSET UNITYSDK_OFFSET(0xA6A7770)
#define RPG_CLIENT_UIMANAGER__PROCESSPAGEENTERVIEW_OFFSET UNITYSDK_OFFSET(0xA6A6DF0)
#define RPG_CLIENT_UIMANAGER__PROCESSPAGEEXITVIEW_OFFSET UNITYSDK_OFFSET(0xA6A7610)
#define RPG_CLIENT_UIMANAGER__REFRESHAUDIOSTAGE_OFFSET UNITYSDK_OFFSET(0xA6A9950)
#define RPG_CLIENT_UIMANAGER__RESETAUDIOPAUSEANDFILTER_OFFSET UNITYSDK_OFFSET(0xA6A4280)
#define RPG_CLIENT_UIMANAGER__RESETMISSIONFULLSCREENTRANSFERSEQID_OFFSET UNITYSDK_OFFSET(0xA6A2AD0)
#define RPG_CLIENT_UIMANAGER__SETCURRENTFOCUSED_OFFSET UNITYSDK_OFFSET(0xA6AA8B0)
#define RPG_CLIENT_UIMANAGER__SHOULDCACHE_OFFSET UNITYSDK_OFFSET(0xA6A44B0)
#define RPG_CLIENT_UIMANAGER__TICKBLOCK_OFFSET UNITYSDK_OFFSET(0xA6A1350)
#define RPG_CLIENT_UIMANAGER__TICKFULLSCREENTRANSFERMANAGER_OFFSET UNITYSDK_OFFSET(0xA6A2B20)
#define RPG_CLIENT_UIMANAGER__UPDATECURSORSTATEBYCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA6A97E0)
#define RPG_CLIENT_UIMANAGER__UPDATEMULTITOUCHSTATE_OFFSET UNITYSDK_OFFSET(0xA6AA9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIManager_TypeDefinitionIndex = 59889;

	class UIManager : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__UIButtonEventManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x359D0);
		}
		static ::System::String** StaticGet_MAZETOBATTLE_SWITCH_PAGE_UIPREFAB_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x359D8);
		}
		static ::System::String** StaticGet_TALK_OPTION_UIPREFAB_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x359E0);
		}
		static ::System::String** StaticGet_TALK_DIALOG_UIPREFAB_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x359E8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__InputDisableTickTimerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x359F0);
		}
		static ::System::String** StaticGet_SCREEN_CLICK_EFFECT_PREFAB_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x359F8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__FullScreenBlockMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x35A00);
		}
		static ::System::String** StaticGet_LOGIN_UI3D_PREFAB_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x35A08);
		}
		static ::System::String** StaticGet_SCREEN_TRANSFER_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x35A10);
		}
		static ::System::String** StaticGet_BATTLEGAMEPHASE_UIPREFAB_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x35A18);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickListMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x35A20);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__FullScreenTransferManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x35A28);
		}
		static ::System::String** StaticGet_GACHA_RESULT_DIALOG_PAHT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x35A30);
		}
		static ::System::String** StaticGet_GACHA_OBTAIN_DIALOG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x35A38);
		}
		static ::System::String** StaticGet_BATTLETOMAZE_SWITCH_PAGE_UIPREFAB_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x35A40);
		}
		static ::System::String** StaticGet_COMMON_SWITCH_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x35A48);
		}
		static ::System::Int32* StaticGet_ADV_DEFAULT_PAGE_COUNT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x10BC0);
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
		::UnityEngine::Transform* _BelowPageRoot; // 0x10
		::RPG::Client::LuaUIController* _ScreenTransferDialog; // 0x18
		::UnityEngine::Transform* _3DRoot; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::UIController*>* _TickList; // 0x28
		::System::Collections::Generic::List_1<::System::Action*>* _ScreenTransferUIExitCallbacks; // 0x30
		::Class_1_23F67DD15593C8D6* _InputDisableTickTimer; // 0x38
		::XLua::LuaTable* _ScreenTransferLuaTable; // 0x40
		::UnityEngine::Transform* _DialogRoot; // 0x48
		::RPG::Client::LuaUIController* _TransitionUIController; // 0x50
		::UnityEngine::Transform* _AboveDialogRoot; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::Class_1_9625D463385089F2*>* _ViewCacheByLayer; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::UIAudioStage, ::System::Int32>* _UIAudioStages; // 0x68
		::Class_1_3C0CE2272C8848D2* _FullScreenTransferManager; // 0x70
		::Class_1_04089E9105CCB96A* _DialogStack; // 0x78
		::RPG::Client::AboveSwitchDialog* _AboveTransfer; // 0x80
		::RPG::Client::ScreenClickEffect* _MonoScreenClickEffect; // 0x88
		::Class_1_04089E9105CCB96A* _AboveDialogStack; // 0x90
		::UnityEngine::GameObject* _ObjScreenClickEffect; // 0x98
		::RPG::Client::UIController* _FocusedController_k__BackingField; // 0xA0
		::Class_2_2FE90C7827206D3B* _BelowTransfer; // 0xA8
		::Class_1_A235F584F11D514A* _TransitionMgr; // 0xB0
		::UnityEngine::Transform* _PageRoot; // 0xB8
		::System::Func_3<::XLua::LuaTable*, ::RPG::GameCore::ScreenTransferReason, ::System::Boolean>* _IsTransferReasonActiveLuaFunc; // 0xC0
		::Class_1_148FC490588BDD52* _ControllerGroup; // 0xC8
		::Class_1_CDF8B69C5FFC3CE4* _FullScreenBlock; // 0xD0
		::UnityEngine::Transform* _AbovePageRoot; // 0xD8
		::RPG::Client::LuaUIController* _CartoonScreenTransferDialog; // 0xE0
		::Class_1_04089E9105CCB96A* _BelowPages; // 0xE8
		::Class_1_04089E9105CCB96A* _PageStack; // 0xF0
		::System::UInt32 _MissionFullScreenTransferSeqID; // 0xF8
		::System::Boolean _IsInStoryMode_k__BackingField; // 0xFC
		::System::Boolean _ForbidTaskOpenScreenTransfer; // 0xFD
		::System::Boolean _UseViewCache; // 0xFE
		::System::Boolean _IsInLoadingProcess_k__BackingField; // 0xFF
		::System::Int32 _CachedScreenWidth; // 0x100
		::RPG::GameCore::UIAudioStage _CurrentUIAudioStage; // 0x104
		::System::Boolean _IsScreenSizeChanged; // 0x108
		::System::Boolean _IsAlreadyDisposed; // 0x109
		::System::Boolean _isScreenFullMask; // 0x10A
		::System::UInt32 _BlockUID; // 0x10C
		::System::Int32 _CachedScreenHeight; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__CCTOR_OFFSET))();
		}

		::System::UInt32 BlockFixedTime(::System::Single fixedTime, ::System::Single showLoadingWheelDelay, ::System::Action* autoCloseCallback, ::System::Boolean isTransparent, ::System::String* reason)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BLOCKFIXEDTIME_OFFSET))(this, fixedTime, showLoadingWheelDelay, autoCloseCallback, isTransparent, reason);
		}

		::System::UInt32 BlockForeverTime(::System::Boolean showLoadingWheel, ::System::Single showLoadingWheelDelay, ::System::Boolean isTransparent, ::System::String* reason)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BLOCKFOREVERTIME_OFFSET))(this, showLoadingWheel, showLoadingWheelDelay, isTransparent, reason);
		}

		::System::Void BlockWaitNetPacket(::System::UInt16 cmdID, ::RPG::Client::RspHandler* rspHandler, ::System::Action* autoCloseCallback, ::System::Single maxWait, ::System::Single showLoadingWheelDelay, ::System::Single blockDelayTime, ::System::Boolean isTransparent, ::System::String* reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::RPG::Client::RspHandler*, ::System::Action*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BLOCKWAITNETPACKET_OFFSET))(this, cmdID, rspHandler, autoCloseCallback, maxWait, showLoadingWheelDelay, blockDelayTime, isTransparent, reason);
		}

		::System::Void TryUnblockFixedTime(::System::UInt32 blockUID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_TRYUNBLOCKFIXEDTIME_OFFSET))(this, blockUID);
		}

		::System::Void TryUnblockWaitNetPacket(::System::UInt16 CmdID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_TRYUNBLOCKWAITNETPACKET_OFFSET))(this, CmdID);
		}

		::System::Void ClearFullScreenBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLEARFULLSCREENBLOCK_OFFSET))(this);
		}

		::System::Void EnableFullScreenBlock(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ENABLEFULLSCREENBLOCK_OFFSET))(this, enable);
		}

		::System::Void ClearWaitNetPacketFullScreenBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLEARWAITNETPACKETFULLSCREENBLOCK_OFFSET))(this);
		}

		::System::Void _TickBlock(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__TICKBLOCK_OFFSET))(this, deltaTime);
		}

		::System::Boolean get_IsBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_ISBLOCK_OFFSET))(this);
		}

		::System::Void ShowLoadingPage(::RPG::Client::LoadingStyle pStyle)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoadingStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SHOWLOADINGPAGE_OFFSET))(this, pStyle);
		}

		::System::Void SetLoadingProgress(::System::Single fProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETLOADINGPROGRESS_OFFSET))(this, fProgress);
		}

		::System::Void HideLoadingPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HIDELOADINGPAGE_OFFSET))(this);
		}

		::System::Void SetInLoadingProcess(::System::Boolean isInLoading)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETINLOADINGPROCESS_OFFSET))(this, isInLoading);
		}

		::System::Boolean get_IsInLoadingProcess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_ISINLOADINGPROCESS_OFFSET))(this);
		}

		::System::Void set_IsInLoadingProcess(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SET_ISINLOADINGPROCESS_OFFSET))(this, value);
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

		::System::Void set_ShowScreenClickEffect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SET_SHOWSCREENCLICKEFFECT_OFFSET))(this, value);
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

		::Class_1_3C0CE2272C8848D2* get_FullScreenTransferManager()
		{
			return ((::Class_1_3C0CE2272C8848D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_FULLSCREENTRANSFERMANAGER_OFFSET))(this);
		}

		::System::Void OpenScreenTransferDialog(::System::Single fadeTime, ::RPG::GameCore::ScreenTransferReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_OPENSCREENTRANSFERDIALOG_OFFSET))(this, fadeTime, reason);
		}

		::System::Void OpenScreenTransferDialog_1(::RPG::GameCore::PlayScreenTransfer* playScreenTransfer, ::RPG::GameCore::ScreenTransferReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayScreenTransfer*, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_OPENSCREENTRANSFERDIALOG_1_OFFSET))(this, playScreenTransfer, reason);
		}

		::System::Void CloseScreenTransferDialog(::System::Single fadeTime, ::RPG::GameCore::ScreenTransferReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLOSESCREENTRANSFERDIALOG_OFFSET))(this, fadeTime, reason);
		}

		::System::Void NotifyPlayScreenTransfer(::RPG::GameCore::PlayScreenTransfer* playScreenTransfer, ::RPG::GameCore::ScreenTransferReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayScreenTransfer*, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_NOTIFYPLAYSCREENTRANSFER_OFFSET))(this, playScreenTransfer, reason);
		}

		::System::Void SwitchOutAboveTransfer(::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SWITCHOUTABOVETRANSFER_OFFSET))(this, duration);
		}

		::System::Void SwitchInAboveTransfer(::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SWITCHINABOVETRANSFER_OFFSET))(this, duration);
		}

		::System::Void ShowBelowTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SHOWBELOWTRANSFER_OFFSET))(this);
		}

		::System::Void CloseBelowTransfer(::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLOSEBELOWTRANSFER_OFFSET))(this, duration);
		}

		::System::Void AddScreenTransferExitCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ADDSCREENTRANSFEREXITCALLBACK_OFFSET))(this, callback);
		}

		::System::Void PlayCartoonScreenTransfer(::RPG::Client::CartoonTransfer_Config* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CartoonTransfer_Config*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_PLAYCARTOONSCREENTRANSFER_OFFSET))(this, config);
		}

		::System::Void _ClearCartoonScreenTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__CLEARCARTOONSCREENTRANSFER_OFFSET))(this);
		}

		::System::Void _OnUIExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ONUIEXIT_OFFSET))(this);
		}

		::System::Void OnScreenTransferFullMask(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ONSCREENTRANSFERFULLMASK_OFFSET))(this, arg);
		}

		::System::Void OnScreenTransferExitFullMask(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ONSCREENTRANSFEREXITFULLMASK_OFFSET))(this, arg);
		}

		::System::Void SetForbidTaskOpenScreenTransfer(::System::Boolean forbid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETFORBIDTASKOPENSCREENTRANSFER_OFFSET))(this, forbid);
		}

		::System::Void PlayFullScreenTransfer(::RPG::GameCore::ScreenTransferReason reason, ::System::Action* action, ::System::Func_1<::System::Boolean>* checkFinishFunc, ::System::Boolean requireBlock)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason, ::System::Action*, ::System::Func_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_PLAYFULLSCREENTRANSFER_OFFSET))(this, reason, action, checkFinishFunc, requireBlock);
		}

		::System::Void PlayFullScreenTransferWithDuration(::RPG::GameCore::ScreenTransferReason reason, ::System::Single inDuration, ::System::Single holdDuration, ::System::Single outDuration, ::System::Action* action, ::System::Func_1<::System::Boolean>* checkFinishFunc)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason, ::System::Single, ::System::Single, ::System::Single, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_PLAYFULLSCREENTRANSFERWITHDURATION_OFFSET))(this, reason, inDuration, holdDuration, outDuration, action, checkFinishFunc);
		}

		::System::Void ClearAllFullScreenTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLEARALLFULLSCREENTRANSFER_OFFSET))(this);
		}

		::System::Void _TickFullScreenTransferManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__TICKFULLSCREENTRANSFERMANAGER_OFFSET))(this);
		}

		::System::Void SetTransferLuaTable(::XLua::LuaTable* luaTable)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETTRANSFERLUATABLE_OFFSET))(this, luaTable);
		}

		::System::Void SetIsTransferReasonActiveLuaFunc(::System::Func_3<::XLua::LuaTable*, ::RPG::GameCore::ScreenTransferReason, ::System::Boolean>* func)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_3<::XLua::LuaTable*, ::RPG::GameCore::ScreenTransferReason, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETISTRANSFERREASONACTIVELUAFUNC_OFFSET))(this, func);
		}

		::System::Boolean IsTransferReasonActive(::RPG::GameCore::ScreenTransferReason reason)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISTRANSFERREASONACTIVE_OFFSET))(this, reason);
		}

		::System::Void OpenCustomScreenTransfer(::RPG::GameCore::CustomScreenTransferType customType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CustomScreenTransferType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_OPENCUSTOMSCREENTRANSFER_OFFSET))(this, customType);
		}

		::System::Void CloseCustomScreenTransfer(::RPG::GameCore::CustomScreenTransferType customType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CustomScreenTransferType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLOSECUSTOMSCREENTRANSFER_OFFSET))(this, customType);
		}

		::System::Boolean IsCustomScreenTransferOpened(::RPG::GameCore::CustomScreenTransferType customType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CustomScreenTransferType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISCUSTOMSCREENTRANSFEROPENED_OFFSET))(this, customType);
		}

		::System::Boolean IsCustomScreenTransferFullOpened(::RPG::GameCore::CustomScreenTransferType customType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CustomScreenTransferType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISCUSTOMSCREENTRANSFERFULLOPENED_OFFSET))(this, customType);
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

		::System::Void SetViewCacheEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETVIEWCACHEENABLE_OFFSET))(this, enable);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_DISPOSE_OFFSET))(this);
		}

		::Class_1_9625D463385089F2* GetViewCache(::RPG::Client::UILayer layer)
		{
			return ((::Class_1_9625D463385089F2*(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETVIEWCACHE_OFFSET))(this, layer);
		}

		::System::Void ClearViewCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLEARVIEWCACHE_OFFSET))(this);
		}

		::System::Void ResetViewCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_RESETVIEWCACHE_OFFSET))(this);
		}

		::System::Void BeginShowGroup(::System::String* debugTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BEGINSHOWGROUP_OFFSET))(this, debugTag);
		}

		::System::Void EndShowGroup(::System::String* debugTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ENDSHOWGROUP_OFFSET))(this, debugTag);
		}

		::UnityEngine::Transform* GetCache(::System::String* assetPath)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETCACHE_OFFSET))(this, assetPath);
		}

		::System::Void ReturnToCache(::UnityEngine::GameObject* uiObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_RETURNTOCACHE_OFFSET))(this, uiObject);
		}

		::System::Void ReleaseAllCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_RELEASEALLCACHE_OFFSET))(this);
		}

		::System::Void OnNetworkReconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ONNETWORKRECONNECTED_OFFSET))(this);
		}

		::System::Void ClearUIStack(::RPG::Client::UIManager_ClearReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIManager_ClearReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLEARUISTACK_OFFSET))(this, reason);
		}

		::System::Void BackToFirstPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BACKTOFIRSTPAGE_OFFSET))(this);
		}

		::System::Void BackToPage(::System::String* targetName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BACKTOPAGE_OFFSET))(this, targetName);
		}

		::System::String* _GetFirstMazeMainPageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__GETFIRSTMAZEMAINPAGENAME_OFFSET))(this);
		}

		::System::Boolean _HasPageInStack(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__HASPAGEINSTACK_OFFSET))(this, name);
		}

		::System::Void ControllerWillAppear(::RPG::Client::UIController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CONTROLLERWILLAPPEAR_OFFSET))(this, controller);
		}

		::System::Void ControllerWillDestroy(::RPG::Client::UIController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CONTROLLERWILLDESTROY_OFFSET))(this, controller);
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

		::System::Boolean HasPageInStack(::System::String* pageName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HASPAGEINSTACK_OFFSET))(this, pageName);
		}

		::System::Boolean HasDialogInStack(::System::String* dialogName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HASDIALOGINSTACK_OFFSET))(this, dialogName);
		}

		::System::Boolean HasAboveDialogInStack(::System::String* dialogName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HASABOVEDIALOGINSTACK_OFFSET))(this, dialogName);
		}

		::System::Boolean IsDialogStackEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISDIALOGSTACKEMPTY_OFFSET))(this);
		}

		::System::Void Tick(::System::Single deltaSecond)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_TICK_OFFSET))(this, deltaSecond);
		}

		::System::Boolean ShouldShowContext(::RPG::Client::UIController* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SHOULDSHOWCONTEXT_OFFSET))(this, context);
		}

		::System::Void HandleShowContext(::RPG::Client::UIController* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HANDLESHOWCONTEXT_OFFSET))(this, context);
		}

		::System::Void HandleExitContext(::RPG::Client::UIController* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HANDLEEXITCONTEXT_OFFSET))(this, context);
		}

		::System::Void UnactivePageBehindTop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_UNACTIVEPAGEBEHINDTOP_OFFSET))(this);
		}

		::System::Void RemoveController(::RPG::Client::UIController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_REMOVECONTROLLER_OFFSET))(this, controller);
		}

		::System::Void RemovePage(::RPG::Client::UIController* page)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_REMOVEPAGE_OFFSET))(this, page);
		}

		::System::Void RemoveDialog(::RPG::Client::UIController* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_REMOVEDIALOG_OFFSET))(this, dialog);
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

		::RPG::Client::UIController* GetPageByName(::System::String* pageName)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETPAGEBYNAME_OFFSET))(this, pageName);
		}

		::RPG::Client::UIController* GetDialogByName(::System::String* pageName, ::System::String* dialogName)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETDIALOGBYNAME_OFFSET))(this, pageName, dialogName);
		}

		::RPG::Client::UIController* GetDialogByDialogName(::System::String* dialogName)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETDIALOGBYDIALOGNAME_OFFSET))(this, dialogName);
		}

		::RPG::Client::UIController* GetPageByRootName(::System::String* pageRootName)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETPAGEBYROOTNAME_OFFSET))(this, pageRootName);
		}

		::RPG::Client::UIController* GetTopPageOrDialogInSet(::System::Collections::Generic::HashSet_1<::RPG::Client::UIController*>* searchSet)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::UIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETTOPPAGEORDIALOGINSET_OFFSET))(this, searchSet);
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

		::System::Void ExitBelowPage(::RPG::Client::UIController* belowPage)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_EXITBELOWPAGE_OFFSET))(this, belowPage);
		}

		::System::Void ExitAbovePage(::RPG::Client::UIController* abovePage)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_EXITABOVEPAGE_OFFSET))(this, abovePage);
		}

		::System::Void ExitAboveDialog(::RPG::Client::UIController* aboveDialog)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_EXITABOVEDIALOG_OFFSET))(this, aboveDialog);
		}

		::System::Void AddTick(::RPG::Client::UIController* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ADDTICK_OFFSET))(this, context);
		}

		::System::Void RemoveTick(::RPG::Client::UIController* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_REMOVETICK_OFFSET))(this, context);
		}

		::RPG::Client::UIController* GetAboveDialogByName(::System::String* dialogName)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETABOVEDIALOGBYNAME_OFFSET))(this, dialogName);
		}

		::UnityEngine::Transform* GetLayerRoot(::RPG::Client::UILayer layer)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETLAYERROOT_OFFSET))(this, layer);
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

		::System::Void SetAudioLoading(::System::Boolean isOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETAUDIOLOADING_OFFSET))(this, isOpen);
		}

		::System::Void SetAudioOpenNormalUI(::System::Boolean isOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETAUDIOOPENNORMALUI_OFFSET))(this, isOpen);
		}

		::System::Void SetAudioOpenScreenTrans(::System::Boolean isOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETAUDIOOPENSCREENTRANS_OFFSET))(this, isOpen);
		}

		::System::Void SetAudioPause(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETAUDIOPAUSE_OFFSET))(this, isPause);
		}

		::System::Void SetAudioPausePerformance(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETAUDIOPAUSEPERFORMANCE_OFFSET))(this, isPause);
		}

		::System::Void SetupLongPressHintShow(::System::Boolean isShow, ::System::Single preogressTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETUPLONGPRESSHINTSHOW_OFFSET))(this, isShow, preogressTime);
		}

		::System::Void CheckInPerformanceShowUI(::RPG::Client::UIController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CHECKINPERFORMANCESHOWUI_OFFSET))(this, controller);
		}

		::Class_1_A235F584F11D514A* GetTransitionManager()
		{
			return ((::Class_1_A235F584F11D514A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETTRANSITIONMANAGER_OFFSET))(this);
		}

		::System::Boolean IsMazeMainPage(::RPG::Client::UIController* controller)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISMAZEMAINPAGE_OFFSET))(this, controller);
		}

		::System::Boolean IsBattleGamePage(::RPG::Client::UIController* controller)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISBATTLEGAMEPAGE_OFFSET))(this, controller);
		}

		::System::Boolean IsOnMazeMainPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISONMAZEMAINPAGE_OFFSET))(this);
		}

		::System::Boolean IsOnBattleGamePage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISONBATTLEGAMEPAGE_OFFSET))(this);
		}

		::System::Void OnUIBlurStateChange(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ONUIBLURSTATECHANGE_OFFSET))(this, isEnable);
		}

		::System::Int32 _GetConstValue(::System::String* key, ::System::Int32 defaultValue)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__GETCONSTVALUE_OFFSET))(this, key, defaultValue);
		}

		::System::Boolean _ShouldCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__SHOULDCACHE_OFFSET))(this);
		}

		::System::Void _ProcessPageEnterView(::RPG::Client::UIController* page)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSPAGEENTERVIEW_OFFSET))(this, page);
		}

		::System::Void _ProcessDialogEnterView(::RPG::Client::UIController* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSDIALOGENTERVIEW_OFFSET))(this, dialog);
		}

		::System::Void _ProcessAbovePageEnterView(::RPG::Client::UIController* abovePage)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSABOVEPAGEENTERVIEW_OFFSET))(this, abovePage);
		}

		::System::Void _ProcessBelowPageEnterView(::RPG::Client::UIController* belowPage)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSBELOWPAGEENTERVIEW_OFFSET))(this, belowPage);
		}

		::System::Void _ProcessAboveDialogEnterView(::RPG::Client::UIController* aboveDialog)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSABOVEDIALOGENTERVIEW_OFFSET))(this, aboveDialog);
		}

		::System::Void _ProcessPageExitView(::RPG::Client::UIController* page)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSPAGEEXITVIEW_OFFSET))(this, page);
		}

		::System::Void _ProcessDialogExitView(::RPG::Client::UIController* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSDIALOGEXITVIEW_OFFSET))(this, dialog);
		}

		::System::Void _ProcessAboveDialogExitView(::RPG::Client::UIController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSABOVEDIALOGEXITVIEW_OFFSET))(this, controller);
		}

		::System::Void _ProcessDefaultExitView(::RPG::Client::UIController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSDEFAULTEXITVIEW_OFFSET))(this, controller);
		}

		::System::Void _OnPresentationChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ONPRESENTATIONCHANGED_OFFSET))(this);
		}

		::System::Void _OnTopControllerChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ONTOPCONTROLLERCHANGED_OFFSET))(this);
		}

		::System::Boolean _IsTopInCurrentLayer(::RPG::Client::UIController* controller)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ISTOPINCURRENTLAYER_OFFSET))(this, controller);
		}

		::System::Void _SetCurrentFocused(::RPG::Client::UIController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__SETCURRENTFOCUSED_OFFSET))(this, controller);
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

		::System::Void _UpdateCursorStateByController(::RPG::Client::UIController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__UPDATECURSORSTATEBYCONTROLLER_OFFSET))(this, controller);
		}

		::System::Void _UpdateMultiTouchState(::RPG::Client::UIController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__UPDATEMULTITOUCHSTATE_OFFSET))(this, controller);
		}

		::System::Void _ResetAudioPauseAndFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__RESETAUDIOPAUSEANDFILTER_OFFSET))(this);
		}

		::System::Void _RefreshAudioStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__REFRESHAUDIOSTAGE_OFFSET))(this);
		}

		::System::Void _AdjustSibling(::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::UIController*>* UIStack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::UIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ADJUSTSIBLING_OFFSET))(this, UIStack);
		}

		::System::Boolean _IsLoginPage(::RPG::Client::UIController* controller)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ISLOGINPAGE_OFFSET))(this, controller);
		}

		::System::Boolean get_IsInStoryMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_ISINSTORYMODE_OFFSET))(this);
		}

		::System::Void set_IsInStoryMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SET_ISINSTORYMODE_OFFSET))(this, value);
		}

		::System::Boolean get_IsInAudioPauseOrFiltering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_ISINAUDIOPAUSEORFILTERING_OFFSET))(this);
		}

		::RPG::Client::UIController* get_FocusedController()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_FOCUSEDCONTROLLER_OFFSET))(this);
		}

		::System::Void set_FocusedController(::RPG::Client::UIController* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SET_FOCUSEDCONTROLLER_OFFSET))(this, value);
		}

		::RPG::Client::LuaUIController* get_TransitionUIController()
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_TRANSITIONUICONTROLLER_OFFSET))(this);
		}

		::System::Void set_TransitionUIController(::RPG::Client::LuaUIController* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SET_TRANSITIONUICONTROLLER_OFFSET))(this, value);
		}

		::Class_1_148FC490588BDD52* get_UIControllerGroup()
		{
			return ((::Class_1_148FC490588BDD52*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_UICONTROLLERGROUP_OFFSET))(this);
		}

		static ::RPG::Client::UIManager* get_Instance()
		{
			return ((::RPG::Client::UIManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_INSTANCE_OFFSET))();
		}
	};
}
