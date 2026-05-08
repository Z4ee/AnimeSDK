#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_2E422E90B3DF8C7E.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_401;
class Class_1_3056A65E74601914;
class Class_1_3773F938AA2C6232;
class Class_1_44EB9C1BE1434A8D;
class Class_1_57F7F2BF8C55D6B6;
class Class_1_A11CB4C08EF906E4;
class Class_1_EC682544DE1271C8;
class Class_2_51B971E69E38047E;
class Class_2_60638234271CCDB8_119;
class Class_3_A78BAD31C5B5D3FD;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class ConfigNewbie_HighLightDynamicData; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIPhotoWall3D3DModelController; }
namespace MoleMole { class UIPhotoWallContext; }
namespace MoleMole { class UIPhotoWallEditModeWidgetController; }
namespace MoleMole { class UIPhotoWallWatchModeWidgetController; }
namespace MoleMole { class UIVirtualCameraConfigs; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_BEGINDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x14556EA0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_CHANGEPLATFORMIDMODE_OFFSET UNITYSDK_OFFSET(0x14555A20)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_CHANGETOEDITMODE_OFFSET UNITYSDK_OFFSET(0x145540F0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_CHANGETOWATCHMODE_OFFSET UNITYSDK_OFFSET(0x14554210)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_CUSTOMCHECKEDGEFUNC_OFFSET UNITYSDK_OFFSET(0x1455C100)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_CUSTOMCOLLECTALLITEMFUNC_OFFSET UNITYSDK_OFFSET(0x1455ACC0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_CUSTOMGETITEMPOSFUNC_OFFSET UNITYSDK_OFFSET(0x14559DB0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_CUSTOMSETITEMSELECTSTATEFUNC_OFFSET UNITYSDK_OFFSET(0x14559BB0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_DRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x14557540)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_DRAGTWOPOINTCALLBACK_OFFSET UNITYSDK_OFFSET(0x14558960)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ENDDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x14557410)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ENDDRAGTWOPOINTCALLBACK_OFFSET UNITYSDK_OFFSET(0x14558900)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_FIXEXMOVEDELTA_OFFSET UNITYSDK_OFFSET(0x145520C0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GETCAMERA_OFFSET UNITYSDK_OFFSET(0x1454AA30)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GETCURRENTCAMERAOFFSET_OFFSET UNITYSDK_OFFSET(0x1454ABA0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GETCURRENTFOV_OFFSET UNITYSDK_OFFSET(0x145544C0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GETFRIENDNETWORKDATA_OFFSET UNITYSDK_OFFSET(0x14556CA0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x14559880)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GET_CURRENTFRIENDSYS_OFFSET UNITYSDK_OFFSET(0x1454F4C0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GET_CURRENTGROUP_OFFSET UNITYSDK_OFFSET(0x1454F460)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GET_FRIENDSYSINFOS_OFFSET UNITYSDK_OFFSET(0x1454F4A0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GET_NETWORKDATA_OFFSET UNITYSDK_OFFSET(0x1454F470)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GET_OPENMODE_OFFSET UNITYSDK_OFFSET(0x1454F480)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GET_PHOTOWALLOBJECTDATAS_OFFSET UNITYSDK_OFFSET(0x14543CC0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GET_VIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x14544950)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1454F450)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_INITBYOPENMODE_OFFSET UNITYSDK_OFFSET(0x14550DC0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_INITCAMERA_OFFSET UNITYSDK_OFFSET(0x145560B0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_INITDATA_OFFSET UNITYSDK_OFFSET(0x14556830)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ISINNEWBIE_OFFSET UNITYSDK_OFFSET(0x14548020)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14558000)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_MOVECAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0x14552B10)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_MOVECAMERATO_OFFSET UNITYSDK_OFFSET(0x1454AC70)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONBEFORENEXTSTEPHANDLE_OFFSET UNITYSDK_OFFSET(0x1455BE30)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONCHANGECURRENTINDEXHANDLE_OFFSET UNITYSDK_OFFSET(0x145565E0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x14555370)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONCLICKLEFTCALLBACK_OFFSET UNITYSDK_OFFSET(0x14559660)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONCLICKPLATFORMIDCALLBACK_OFFSET UNITYSDK_OFFSET(0x145559D0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONCLICKRIGHTCALLBACK_OFFSET UNITYSDK_OFFSET(0x14559780)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONCLICKSHOWUI_OFFSET UNITYSDK_OFFSET(0x14555890)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONCLICKSWITCHCALLBACK_OFFSET UNITYSDK_OFFSET(0x14555E50)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1454F4E0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x14552C80)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x145507B0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14551B20)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONNEWBIECLOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x1455C0B0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONPHOTOWALLNAMEHANDLE_OFFSET UNITYSDK_OFFSET(0x14559A70)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONSCROLLCALLBACK_OFFSET UNITYSDK_OFFSET(0x14559530)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14550890)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1454FFF0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1454F570)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x145506F0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_POINTUPCALLBACK_OFFSET UNITYSDK_OFFSET(0x14558710)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_PROCESS3DENTITYHANDLE_OFFSET UNITYSDK_OFFSET(0x14551990)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_PROCESSAFTERSETFOV_OFFSET UNITYSDK_OFFSET(0x14552DD0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_PROCESSTWOPOINTERDRAG_OFFSET UNITYSDK_OFFSET(0x14558A00)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_RAYCASTPHOTOWALLOBJECT_OFFSET UNITYSDK_OFFSET(0x14557050)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_REFRESHOPENMODE_OFFSET UNITYSDK_OFFSET(0x14550CB0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0x14548220)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_SETBACKBTNENABLE_OFFSET UNITYSDK_OFFSET(0x14554450)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_SETBLOCKALLBUTTON_OFFSET UNITYSDK_OFFSET(0x1455BEA0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_SETEDITMODECAMERACLAMP_OFFSET UNITYSDK_OFFSET(0x14554590)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_SETFULLSCREENBTNACTIVE_OFFSET UNITYSDK_OFFSET(0x14547C90)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_SETSHARECONSOLEBTN_OFFSET UNITYSDK_OFFSET(0x145599C0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x14551A80)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__CHANGETOEDITMODE_B__36_0_OFFSET UNITYSDK_OFFSET(0x1455D130)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__CHANGETOEDITMODE_B__36_1_OFFSET UNITYSDK_OFFSET(0x1455D220)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1455CAA0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__ONCHANGECURRENTINDEXHANDLE_B__56_0_OFFSET UNITYSDK_OFFSET(0x1455D550)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__ONCLICKBACK_B__51_0_OFFSET UNITYSDK_OFFSET(0x1455D2F0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__ONCLICKBACK_B__51_1_OFFSET UNITYSDK_OFFSET(0x1455D330)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__ONCLICKSWITCHCALLBACK_B__54_0_OFFSET UNITYSDK_OFFSET(0x1455D370)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__ONSHOW_B__27_0_OFFSET UNITYSDK_OFFSET(0x1455CB50)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__ONUIINIT_B__23_0_OFFSET UNITYSDK_OFFSET(0x1455CAB0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__ONUIINIT_B__23_1_OFFSET UNITYSDK_OFFSET(0x1455CB00)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x1455D8F0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1455D980)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1455DA10)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1455DAC0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1455DB50)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1455DB80)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1455DC20)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1455DC30)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1455DC40)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1455DC50)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallPageController_TypeDefinitionIndex = 66541;

	class UIPhotoWallPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::String* ConfigPlaneCameraAssetPath; // 0x0
		::Class_2_60638234271CCDB8_119* _view; // 0x320
		::Class_1_3773F938AA2C6232* _currentGroup; // 0x328
		::Class_1_3056A65E74601914* _currentNetworkData; // 0x330
		::MoleMole::UIPhotoWall3D3DModelController* _3DController; // 0x338
		::System::Single _originFov; // 0x340
		::DG::Tweening::Tween* _cameraTween; // 0x348
		::System::Boolean _cameraDirty; // 0x350
		::MoleMole::UIPhotoWallWatchModeWidgetController* _watchMode; // 0x358
		::MoleMole::UIPhotoWallEditModeWidgetController* _editMode; // 0x360
		::Class_2_51B971E69E38047E* _model; // 0x368
		::MoleMole::UIPhotoWallContext* _context; // 0x370
		::System::Boolean _draging; // 0x378
		::System::Boolean consoleDraging; // 0x379
		::Class_1_44EB9C1BE1434A8D* _cameraMode; // 0x380

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_1_3773F938AA2C6232* get_CurrentGroup()
		{
			return ((::Class_1_3773F938AA2C6232*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GET_CURRENTGROUP_OFFSET))(this);
		}

		::Class_1_3056A65E74601914* get_NetworkData()
		{
			return ((::Class_1_3056A65E74601914*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GET_NETWORKDATA_OFFSET))(this);
		}

		::Enum_3_2E422E90B3DF8C7E get_OpenMode()
		{
			return ((::Enum_3_2E422E90B3DF8C7E(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GET_OPENMODE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FriendSysInfos()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GET_FRIENDSYSINFOS_OFFSET))(this);
		}

		::Class_1_57F7F2BF8C55D6B6* get_CurrentFriendSys()
		{
			return ((::Class_1_57F7F2BF8C55D6B6*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GET_CURRENTFRIENDSYS_OFFSET))(this);
		}

		::MoleMole::MonoGamepadVirtualCursor* get_VirtualCursor()
		{
			return ((::MoleMole::MonoGamepadVirtualCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GET_VIRTUALCURSOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void Process3DEntityHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_PROCESS3DENTITYHANDLE_OFFSET))(this, obj);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::UnityEngine::Camera* GetCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GETCAMERA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EC682544DE1271C8*>* get_PhotoWallObjectDatas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EC682544DE1271C8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GET_PHOTOWALLOBJECTDATAS_OFFSET))(this);
		}

		::System::Void ResetCamera(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_RESETCAMERA_OFFSET))(this, anim);
		}

		::System::Void ChangeToEditMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_CHANGETOEDITMODE_OFFSET))(this);
		}

		::System::Void ChangeToWatchMode(::System::Boolean curtain, ::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_CHANGETOWATCHMODE_OFFSET))(this, curtain, anim);
		}

		::System::Void SetFullscreenBtnActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_SETFULLSCREENBTNACTIVE_OFFSET))(this, active);
		}

		::System::Void SetbackBtnEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_SETBACKBTNENABLE_OFFSET))(this, enable);
		}

		::System::Single GetCurrentFov()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GETCURRENTFOV_OFFSET))(this);
		}

		::System::Void SetEditModeCameraClamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_SETEDITMODECAMERACLAMP_OFFSET))(this);
		}

		::System::Void MoveCameraForward(::UnityEngine::Vector2 axisValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_MOVECAMERAFORWARD_OFFSET))(this, axisValue);
		}

		::System::Void ProcessAfterSetFov()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_PROCESSAFTERSETFOV_OFFSET))(this);
		}

		::System::Void OnClickBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONCLICKBACK_OFFSET))(this);
		}

		::System::Boolean OnClickShowUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONCLICKSHOWUI_OFFSET))(this);
		}

		::System::Void OnClickPlatformIDCallback(::System::Boolean showPlatformInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONCLICKPLATFORMIDCALLBACK_OFFSET))(this, showPlatformInfo);
		}

		::System::Void OnClickSwitchCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONCLICKSWITCHCALLBACK_OFFSET))(this);
		}

		::System::Void InitCamera(::Class_3_A78BAD31C5B5D3FD* cameraPos, ::MoleMole::UIVirtualCameraConfigs* cameraConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_A78BAD31C5B5D3FD*, ::MoleMole::UIVirtualCameraConfigs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_INITCAMERA_OFFSET))(this, cameraPos, cameraConfig);
		}

		::System::Void OnChangeCurrentIndexHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONCHANGECURRENTINDEXHANDLE_OFFSET))(this, obj);
		}

		::System::Void InitByOpenMode(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_INITBYOPENMODE_OFFSET))(this, callback);
		}

		::System::Void GetFriendNetworkData(::System::Int32 index, ::System::Action_2<::System::Boolean, ::Class_1_57F7F2BF8C55D6B6*>* onGet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::System::Boolean, ::Class_1_57F7F2BF8C55D6B6*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GETFRIENDNETWORKDATA_OFFSET))(this, index, onGet);
		}

		::System::Void InitData(::Class_1_3056A65E74601914* networkData, ::Class_1_3773F938AA2C6232* targetGroup)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3056A65E74601914*, ::Class_1_3773F938AA2C6232*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_INITDATA_OFFSET))(this, networkData, targetGroup);
		}

		::System::Void BeginDragCallback(::UnityEngine::EventSystems::PointerEventData* eventdata, ::UnityEngine::Vector3 worldpoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_BEGINDRAGCALLBACK_OFFSET))(this, eventdata, worldpoint);
		}

		::System::Void EndDragCallback(::UnityEngine::EventSystems::PointerEventData* eventdata, ::UnityEngine::Vector3 wordlpoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ENDDRAGCALLBACK_OFFSET))(this, eventdata, wordlpoint);
		}

		::UnityEngine::Vector2 FixExMoveDelta(::UnityEngine::Vector2 worldDelta)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_FIXEXMOVEDELTA_OFFSET))(this, worldDelta);
		}

		::System::Void DragCallback(::UnityEngine::EventSystems::PointerEventData* eventdata, ::UnityEngine::Vector3 worldpointdelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_DRAGCALLBACK_OFFSET))(this, eventdata, worldpointdelta);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void PointUpCallback(::UnityEngine::EventSystems::PointerEventData* eventdata)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_POINTUPCALLBACK_OFFSET))(this, eventdata);
		}

		::System::Void EndDragTwoPointCallback(::UnityEngine::EventSystems::PointerEventData* eventdata)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ENDDRAGTWOPOINTCALLBACK_OFFSET))(this, eventdata);
		}

		::System::Void DragTwoPointCallback(::UnityEngine::Vector2 screenPos1Old, ::UnityEngine::Vector2 screenPos2Old, ::UnityEngine::Vector2 screenPos1New, ::UnityEngine::Vector2 screenPos2New)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_DRAGTWOPOINTCALLBACK_OFFSET))(this, screenPos1Old, screenPos2Old, screenPos1New, screenPos2New);
		}

		::System::Void OnScrollCallback(::UnityEngine::EventSystems::PointerEventData* eventdata)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONSCROLLCALLBACK_OFFSET))(this, eventdata);
		}

		::Class_1_EC682544DE1271C8* RaycastPhotoWallObject(::UnityEngine::Vector3 screenPos)
		{
			return ((::Class_1_EC682544DE1271C8*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_RAYCASTPHOTOWALLOBJECT_OFFSET))(this, screenPos);
		}

		::System::Void OnClickLeftCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONCLICKLEFTCALLBACK_OFFSET))(this);
		}

		::System::Void OnClickRightCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONCLICKRIGHTCALLBACK_OFFSET))(this);
		}

		::Class_1_A11CB4C08EF906E4* GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* config)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, config);
		}

		::System::Boolean IsInNewbie(::System::Int32 step)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ISINNEWBIE_OFFSET))(this, step);
		}

		::System::Void RefreshOpenMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_REFRESHOPENMODE_OFFSET))(this);
		}

		::System::Void SetShareConsoleBtn(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_SETSHARECONSOLEBTN_OFFSET))(this, isShow);
		}

		::System::Void OnPhotoWallNameHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONPHOTOWALLNAMEHANDLE_OFFSET))(this, obj);
		}

		::System::Void CustomSetItemSelectStateFunc(::Class_0_16E4307DCC419505_401* target, ::System::Boolean isselect)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_CUSTOMSETITEMSELECTSTATEFUNC_OFFSET))(this, target, isselect);
		}

		::System::Void CustomGetItemPosFunc(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F& target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_CUSTOMGETITEMPOSFUNC_OFFSET))(this, target);
		}

		::System::Void CustomCollectAllItemFunc(::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>* targetlist)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_CUSTOMCOLLECTALLITEMFUNC_OFFSET))(this, targetlist);
		}

		::System::Void OnBeforeNextStepHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONBEFORENEXTSTEPHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnNewbieCloseHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_ONNEWBIECLOSEHANDLE_OFFSET))(this, obj);
		}

		::System::Void SetBlockAllButton(::System::Boolean block)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_SETBLOCKALLBUTTON_OFFSET))(this, block);
		}

		::System::Void ChangePlatformIDMode(::System::Boolean showid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_CHANGEPLATFORMIDMODE_OFFSET))(this, showid);
		}

		::UnityEngine::Vector2 GetCurrentCameraOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_GETCURRENTCAMERAOFFSET_OFFSET))(this);
		}

		::System::Void MoveCameraTo(::UnityEngine::Vector2 deltaPos, ::System::Single fov)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_MOVECAMERATO_OFFSET))(this, deltaPos, fov);
		}

		::UnityEngine::Vector2 CustomCheckEdgeFunc(::UnityEngine::Vector2 currentPos, ::UnityEngine::Vector2 delta, ::System::Single left, ::System::Single right, ::System::Single up, ::System::Single down, ::UnityEngine::Vector2 axisValueMutDelta)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_CUSTOMCHECKEDGEFUNC_OFFSET))(this, currentPos, delta, left, right, up, down, axisValueMutDelta);
		}

		::System::Void ProcessTwoPointerDrag(::UnityEngine::Vector2 screenPos1Old, ::UnityEngine::Vector2 screenPos2Old, ::UnityEngine::Vector2 screenPos1New, ::UnityEngine::Vector2 screenPos2New)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER_PROCESSTWOPOINTERDRAG_OFFSET))(this, screenPos1Old, screenPos2Old, screenPos1New, screenPos2New);
		}

		::System::Void _OnUIInit_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__ONUIINIT_B__23_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__23_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__ONUIINIT_B__23_1_OFFSET))(this);
		}

		::System::Void _OnShow_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__ONSHOW_B__27_0_OFFSET))(this);
		}

		::System::Void _ChangeToEditMode_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__CHANGETOEDITMODE_B__36_0_OFFSET))(this);
		}

		::System::Void _ChangeToEditMode_b__36_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__CHANGETOEDITMODE_B__36_1_OFFSET))(this);
		}

		::System::Void _OnClickBack_b__51_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__ONCLICKBACK_B__51_0_OFFSET))(this);
		}

		::System::Void _OnClickBack_b__51_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__ONCLICKBACK_B__51_1_OFFSET))(this);
		}

		::System::Void _OnClickSwitchCallback_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__ONCLICKSWITCHCALLBACK_B__54_0_OFFSET))(this);
		}

		::System::Void _OnChangeCurrentIndexHandle_b__56_0(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF r)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER__ONCHANGECURRENTINDEXHANDLE_B__56_0_OFFSET))(this, r);
		}

		::Class_1_A11CB4C08EF906E4* __base_GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* P0)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
