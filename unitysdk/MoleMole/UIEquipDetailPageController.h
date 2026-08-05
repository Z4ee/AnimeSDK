#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_B9002106B360C669.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Share/EItemType.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_1CA90EAAC2B72680;
class Class_1_C5FDB00B12827EE9;
class Class_1_F0F4C9318CC412F9;
class Class_2_1824EF69C8E376A3;
class Class_2_208CC9941471731A_477;
class Class_2_5E8E56AB26D3F10E;
class Class_2_60638234271CCDB8_101;
class Class_2_888734130AA1067E;
class Class_2_C2B4B123B5A9B78A;
class Class_2_F7CAAD54879BD084;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoUIWeaponVideoScreenPlayer; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIRoleInfoDataContext; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ALLOCRTUNIT_OFFSET UNITYSDK_OFFSET(0x18D499D0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_BINDNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x18D53720)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_DESTROYWEAPONVIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0x18D53170)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_DOREFRESHVIEWCOMMON_OFFSET UNITYSDK_OFFSET(0x18D4F840)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_GETRTSOUNDGO_OFFSET UNITYSDK_OFFSET(0x18D54390)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_GETWEAPONRTANIMATOR_OFFSET UNITYSDK_OFFSET(0x18D4DBA0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x18D476D0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_GET_INPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x18D47370)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_GET_ROTATESPEED_OFFSET UNITYSDK_OFFSET(0x18D50E20)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18D47360)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_HANDLEZHENZHENWEAPONSTART_OFFSET UNITYSDK_OFFSET(0x18D51260)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x18D48790)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_INITWEAPON2DSWITCH_OFFSET UNITYSDK_OFFSET(0x18D4F680)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_INITWEAPONVIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0x18D54100)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ISHOLLOWGAMEROOM_OFFSET UNITYSDK_OFFSET(0x18D48620)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONBACKBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x18D49E80)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONCLICKINFOBTN_OFFSET UNITYSDK_OFFSET(0x18D4C6F0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONCLICKLEVELUPBTN_OFFSET UNITYSDK_OFFSET(0x18D4C910)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONCLICKPREVIEWBTN_OFFSET UNITYSDK_OFFSET(0x18D4A530)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONCLICKREFINELEVELPREVIEWBTN_OFFSET UNITYSDK_OFFSET(0x18D4CE00)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONCLICKSPINFOBTN_OFFSET UNITYSDK_OFFSET(0x18D49BF0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONCLICKSTARUPBTN_OFFSET UNITYSDK_OFFSET(0x18D4A100)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONCLICKSWITCHWEAPON2DBTN_OFFSET UNITYSDK_OFFSET(0x18D53950)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18D47640)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONEQUIPRTLOADED_OFFSET UNITYSDK_OFFSET(0x18D515F0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x18D52B20)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18D4D120)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONITEMCHANGE_OFFSET UNITYSDK_OFFSET(0x18D52D90)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18D476E0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONMAINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18D4CC40)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONSHOWFRIENDPREVIEWMODEHINT_OFFSET UNITYSDK_OFFSET(0x18D4A010)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONSHOWPREVIEWMODEHINT_OFFSET UNITYSDK_OFFSET(0x18D49F20)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18D521D0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONSTORYINFOBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18D47D80)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONSTORYINFOGAMEPADBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18D4CD70)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18D52DF0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18D52FD0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18D522E0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONWEAPONREFINECLOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x18D4A430)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONWEAPONRTLOADED_OFFSET UNITYSDK_OFFSET(0x18D50FB0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_OPENPANELBYJUMP_OFFSET UNITYSDK_OFFSET(0x18D47460)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_PLAYVIDEOFORWEAPON_OFFSET UNITYSDK_OFFSET(0x18D53C90)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_PROCESSUIAVATAR_OFFSET UNITYSDK_OFFSET(0x18D48740)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REALLOCRTUNIT_OFFSET UNITYSDK_OFFSET(0x18D484D0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHANDPLAYLEVELUPANIM_OFFSET UNITYSDK_OFFSET(0x18D4E340)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHANDPLAYREFINEANIM_OFFSET UNITYSDK_OFFSET(0x18D4E420)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHAUDIOOCCLUSION_OFFSET UNITYSDK_OFFSET(0x18D54540)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHMAINCITYBTN_OFFSET UNITYSDK_OFFSET(0x18D47940)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHRTORVIDEO_OFFSET UNITYSDK_OFFSET(0x18D536A0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHRT_OFFSET UNITYSDK_OFFSET(0x18D50B00)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHVIEWFOREQUIP_OFFSET UNITYSDK_OFFSET(0x18D4E630)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHVIEWFORWEAPON_OFFSET UNITYSDK_OFFSET(0x18D4A6A0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18D48570)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_RELEASERTUNIT_OFFSET UNITYSDK_OFFSET(0x18D49B80)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_RESETGAMEPADLISTSELECT_OFFSET UNITYSDK_OFFSET(0x18D47C10)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_SETBTNGAMEPADLISTFOCUS_OFFSET UNITYSDK_OFFSET(0x18D51DD0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_SETROLEJUMPDATA_OFFSET UNITYSDK_OFFSET(0x18D51E80)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_SETSTAR_OFFSET UNITYSDK_OFFSET(0x18D4CF70)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_SETUPSTARLIGHTNODES_OFFSET UNITYSDK_OFFSET(0x18D4DFC0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_SETWEAPONANIMATORENABLE_OFFSET UNITYSDK_OFFSET(0x18D4DE40)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_SETWEAPONVIDEOTOGGLEBTNSTATE_OFFSET UNITYSDK_OFFSET(0x18D535C0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_SHOULDSHOWWEAPON2DSWITCH_OFFSET UNITYSDK_OFFSET(0x18D53550)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_SHOULDWEAPONSHOWSP_OFFSET UNITYSDK_OFFSET(0x18D51D60)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_STOPVIDEOFORWEAPON_OFFSET UNITYSDK_OFFSET(0x18D53EB0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_TICKRTROTATING_OFFSET UNITYSDK_OFFSET(0x18D4D390)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_TOGGLEAUDIOFORWEAPONVIDEO_OFFSET UNITYSDK_OFFSET(0x18D531D0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_TRIGGERSTARTWEAPONPERFORM_OFFSET UNITYSDK_OFFSET(0x18D4D8D0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_TRYREADWEAPONVIDEONEW_OFFSET UNITYSDK_OFFSET(0x18D53A10)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_TRYSETOCCLUSIONRTPCFORRTGO_OFFSET UNITYSDK_OFFSET(0x18D546A0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_TRYSETOCCULSIONRTPCFORVIDEO_OFFSET UNITYSDK_OFFSET(0x18D548F0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18D4D340)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D54AA0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D54A40)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__INITVIEW_B__39_0_OFFSET UNITYSDK_OFFSET(0x18D54AF0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__INITVIEW_B__39_1_OFFSET UNITYSDK_OFFSET(0x18D54B00)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__INITWEAPONVIDEOPLAYER_B__107_0_OFFSET UNITYSDK_OFFSET(0x18D55380)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__ONBACKBTNCLICKHANDLE_B__44_0_OFFSET UNITYSDK_OFFSET(0x18D54B70)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__ONCLICKSPINFOBTN_B__43_0_OFFSET UNITYSDK_OFFSET(0x18D54B10)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__ONCLICKSPINFOBTN_B__43_1_OFFSET UNITYSDK_OFFSET(0x18D54B40)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__ONSTORYINFOBTNCLICKED_B__54_0_OFFSET UNITYSDK_OFFSET(0x18D54FA0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__ONUIOPEN_B__81_0_OFFSET UNITYSDK_OFFSET(0x18D55350)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__ONUIOPEN_B__81_1_OFFSET UNITYSDK_OFFSET(0x18D55370)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__REFRESHANDPLAYLEVELUPANIM_B__63_0_OFFSET UNITYSDK_OFFSET(0x18D552B0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__REFRESHANDPLAYREFINEANIM_B__64_0_OFFSET UNITYSDK_OFFSET(0x18D552D0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__STOPVIDEOFORWEAPON_B__110_1_OFFSET UNITYSDK_OFFSET(0x18D55390)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__STOPVIDEOFORWEAPON_G__SETSTATE_110_0_OFFSET UNITYSDK_OFFSET(0x18D542B0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__TRIGGERSTARTWEAPONPERFORM_B__59_0_OFFSET UNITYSDK_OFFSET(0x18D55170)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18D55410)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x18D554A0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18D55530)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18D55560)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18D555F0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18D55600)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18D556C0)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18D556D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDetailPageController_TypeDefinitionIndex = 59127;

	class UIEquipDetailPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_BaseMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIEquipDetailPageController_TypeDefinitionIndex)->GetStaticField(0x10830);
		}
		static ::System::Int32* StaticGet_SecondaryMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIEquipDetailPageController_TypeDefinitionIndex)->GetStaticField(0x10834);
		}
		// static const ::System::Int32 MAX_BASE_PROP_COUNT = 0x1; // 0x0
		// static const ::System::String* DETAIL_TEXT; // 0x0
		// static const ::System::String* DETAIL_ICON; // 0x0
		// static const ::System::Int32 MAX_PROPERTY_COUNT = 0x4; // 0x0
		// static const ::System::String* WEAPON_TRANSFORM_TRIGGER_NAME; // 0x0
		// static const ::System::Single WEAPON_TRANSFORM_TRIGGER_RESET_TIME; // 0x0
		::Enum_3_B9002106B360C669 _curDevelopType; // 0x318
		::Share::EItemType _itemType; // 0x31C
		::System::Collections::Generic::List_1<::Class_1_C5FDB00B12827EE9*>* _equipBasePropertyItems; // 0x320
		::System::Collections::Generic::List_1<::Class_1_C5FDB00B12827EE9*>* _equipRandomPropertyItems; // 0x328
		::Class_1_0D6706375CDAAE8C* _curItemData; // 0x330
		::Class_2_5E8E56AB26D3F10E* _equipModel; // 0x338
		::Class_2_1824EF69C8E376A3* _avatarData; // 0x340
		::System::Collections::Generic::List_1<::Class_1_F0F4C9318CC412F9*>* _equipStar; // 0x348
		::System::Int32 _closeIndex; // 0x350
		::Il2CppArray<::UnityEngine::Transform*>* starLightNodes; // 0x358
		::System::Int32 _lastStar; // 0x360
		::System::Int32 _lastLv; // 0x364
		::System::Int32 _lastRandomCount; // 0x368
		::Foundation::Coroutine::CoroutineHandle _weaponTransformTriggerResetHandle; // 0x36C
		::System::Single _weaponTransformTriggerRotateCounter; // 0x370
		::System::Boolean _showMaxLevelAndStar; // 0x374
		::System::Boolean _showMaxRefineLevel; // 0x375
		::System::Boolean hasWeaponFirstRefreshed; // 0x376
		::System::Boolean shouldShowSP; // 0x377
		::System::Boolean isSPInfoExpand; // 0x378
		::MoleMole::UIGeneralDynamicTipsPopWindowController* _tipsWidget; // 0x380
		::Class_2_60638234271CCDB8_101* _view; // 0x388
		::MoleMole::UIRoleInfoDataContext* _context; // 0x390
		::Class_2_C2B4B123B5A9B78A* _iconRTUnit; // 0x398
		::System::Boolean _isInitted; // 0x3A0
		::System::Boolean _isMuteLevelUpClick; // 0x3A1
		::System::Boolean _isMuteRefineClick; // 0x3A2
		::System::Boolean _isMaxRefine; // 0x3A3
		::System::Boolean _isMaxLevelAndStar; // 0x3A4
		::System::Boolean _isGamepadSelectDirty; // 0x3A5
		::Class_1_1CA90EAAC2B72680* _gamepadEquipStateProxy; // 0x3A8
		::System::Boolean _isPlayVideo; // 0x3B0
		::MoleMole::MonoUIWeaponVideoScreenPlayer* _uiWeaponVideoScreenPlayer; // 0x3B8
		::System::String* Parameter_UIWeapon_Occlusion; // 0x3C0
		::System::UInt32 _weaponVideoPendingID; // 0x3C8
		::UnityEngine::Transform* _zhenzhenSpecialWeaponVideoTarget; // 0x3D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_InPreviewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_GET_INPREVIEWMODE_OFFSET))(this);
		}

		static ::System::Void OpenPanelByJump(::System::Int32 itemId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_OPENPANELBYJUMP_OFFSET))(itemId);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void RefreshMainCityBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHMAINCITYBTN_OFFSET))(this);
		}

		::System::Boolean IsHollowGameRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ISHOLLOWGAMEROOM_OFFSET))(this);
		}

		::System::Void ProcessUIAvatar(::System::Int32 avatarConfig, ::System::Int32 showTypeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_PROCESSUIAVATAR_OFFSET))(this, avatarConfig, showTypeIndex);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void ReAllocRTUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REALLOCRTUNIT_OFFSET))(this);
		}

		::System::Void ReleaseRTUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_RELEASERTUNIT_OFFSET))(this);
		}

		::System::Void AllocRTUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ALLOCRTUNIT_OFFSET))(this);
		}

		::System::Void OnClickSPInfoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONCLICKSPINFOBTN_OFFSET))(this);
		}

		::System::Void OnBackBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONBACKBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnShowPreviewModeHint(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONSHOWPREVIEWMODEHINT_OFFSET))(this, args);
		}

		::System::Void OnShowFriendPreviewModeHint(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONSHOWFRIENDPREVIEWMODEHINT_OFFSET))(this, args);
		}

		::System::Void OnClickStarUpBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONCLICKSTARUPBTN_OFFSET))(this);
		}

		::System::Void OnWeaponRefineCloseHandle(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONWEAPONREFINECLOSEHANDLE_OFFSET))(this, args);
		}

		::System::Void OnClickPreviewBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONCLICKPREVIEWBTN_OFFSET))(this);
		}

		::System::Void OnClickInfoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONCLICKINFOBTN_OFFSET))(this);
		}

		::System::Void OnClickLevelUpBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONCLICKLEVELUPBTN_OFFSET))(this);
		}

		::System::Void OnMainBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONMAINBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnStoryInfoGamepadBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONSTORYINFOGAMEPADBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnStoryInfoBtnClicked(::System::Boolean showAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONSTORYINFOBTNCLICKED_OFFSET))(this, showAnim);
		}

		::System::Void OnClickRefineLevelPreviewBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONCLICKREFINELEVELPREVIEWBTN_OFFSET))(this);
		}

		::System::Void SetStar(::System::Int32 count, ::System::Int32 maxStar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_SETSTAR_OFFSET))(this, count, maxStar);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void TriggerStartWeaponPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_TRIGGERSTARTWEAPONPERFORM_OFFSET))(this);
		}

		::UnityEngine::Animator* GetWeaponRTAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_GETWEAPONRTANIMATOR_OFFSET))(this);
		}

		::System::Void SetWeaponAnimatorEnable(::System::Boolean bEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_SETWEAPONANIMATORENABLE_OFFSET))(this, bEnabled);
		}

		::System::Void SetUpStarLightNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_SETUPSTARLIGHTNODES_OFFSET))(this);
		}

		::System::Void RefreshAndPlayLevelUpAnim(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHANDPLAYLEVELUPANIM_OFFSET))(this, args);
		}

		::System::Void RefreshAndPlayRefineAnim(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHANDPLAYREFINEANIM_OFFSET))(this, args);
		}

		::System::Void RefreshView(::System::Boolean isRefreshRT, ::System::Boolean withOutProperty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, isRefreshRT, withOutProperty);
		}

		::System::Void DoRefreshViewCommon(::System::Int32 templateID, ::Class_2_208CC9941471731A_477* itemConfig, ::System::UInt32 avatarUID, ::System::UInt32 curLevel, ::System::UInt32 maxLevel, ::System::String* iconPath, ::System::Boolean canLevelUp, ::System::Boolean canStarUp, ::System::Boolean isMaxLevel, ::System::Boolean isMaxStar, ::System::Boolean isEquip, ::System::Boolean isRefreshRT)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_208CC9941471731A_477*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_DOREFRESHVIEWCOMMON_OFFSET))(this, templateID, itemConfig, avatarUID, curLevel, maxLevel, iconPath, canLevelUp, canStarUp, isMaxLevel, isMaxStar, isEquip, isRefreshRT);
		}

		::System::Void RefreshRT(::System::Boolean isEquip, ::System::String* iconPath, ::System::Int32 templateID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHRT_OFFSET))(this, isEquip, iconPath, templateID);
		}

		::System::Void TickRTRotating()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_TICKRTROTATING_OFFSET))(this);
		}

		::System::Single get_RotateSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_GET_ROTATESPEED_OFFSET))(this);
		}

		::System::Void OnWeaponRTLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONWEAPONRTLOADED_OFFSET))(this);
		}

		::System::Void HandleZhenzhenWeaponStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_HANDLEZHENZHENWEAPONSTART_OFFSET))(this);
		}

		::System::Void OnEquipRTLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONEQUIPRTLOADED_OFFSET))(this);
		}

		::System::Void RefreshViewForEquip(::System::Boolean isRefreshRT, ::System::Boolean withOutProperty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHVIEWFOREQUIP_OFFSET))(this, isRefreshRT, withOutProperty);
		}

		::System::Void RefreshViewForWeapon(::System::Boolean isRefreshRT, ::System::Boolean withOutProperty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHVIEWFORWEAPON_OFFSET))(this, isRefreshRT, withOutProperty);
		}

		::System::Boolean ShouldWeaponShowSP(::Class_2_F7CAAD54879BD084* weaponData, ::Class_2_888734130AA1067E* weaponConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_F7CAAD54879BD084*, ::Class_2_888734130AA1067E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_SHOULDWEAPONSHOWSP_OFFSET))(this, weaponData, weaponConfig);
		}

		::System::Void SetBtnGamepadListFocus(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_SETBTNGAMEPADLISTFOCUS_OFFSET))(this, isFocus);
		}

		::System::Void ResetGamepadListSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_RESETGAMEPADLISTSELECT_OFFSET))(this);
		}

		::System::Void SetRoleJumpData(::System::Int32 itemID, ::System::Int32 needCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_SETROLEJUMPDATA_OFFSET))(this, itemID, needCount);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnItemChange(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONITEMCHANGE_OFFSET))(this, obj);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitWeapon2DSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_INITWEAPON2DSWITCH_OFFSET))(this);
		}

		::System::Void OnClickSwitchWeapon2DBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_ONCLICKSWITCHWEAPON2DBTN_OFFSET))(this);
		}

		::System::Void RefreshRTOrVideo(::System::Boolean withAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHRTORVIDEO_OFFSET))(this, withAnim);
		}

		::System::Void SetWeaponVideoToggleBtnState(::System::Boolean isOn, ::System::Boolean withAni)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_SETWEAPONVIDEOTOGGLEBTNSTATE_OFFSET))(this, isOn, withAni);
		}

		::System::Void BindNotificationNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_BINDNOTIFICATIONNODE_OFFSET))(this);
		}

		::System::Void TryReadWeaponVideoNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_TRYREADWEAPONVIDEONEW_OFFSET))(this);
		}

		::System::Boolean ShouldShowWeapon2DSwitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_SHOULDSHOWWEAPON2DSWITCH_OFFSET))(this);
		}

		::System::Void InitWeaponVideoPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_INITWEAPONVIDEOPLAYER_OFFSET))(this);
		}

		::System::Void DestroyWeaponVideoPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_DESTROYWEAPONVIDEOPLAYER_OFFSET))(this);
		}

		::System::Void PlayVideoForWeapon(::System::Int32 weaponItemID, ::System::Boolean withAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_PLAYVIDEOFORWEAPON_OFFSET))(this, weaponItemID, withAnim);
		}

		::System::Void StopVideoForWeapon(::System::Boolean withAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_STOPVIDEOFORWEAPON_OFFSET))(this, withAnim);
		}

		::System::Void ToggleAudioForWeaponVideo(::System::Boolean play)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_TOGGLEAUDIOFORWEAPONVIDEO_OFFSET))(this, play);
		}

		::UnityEngine::GameObject* GetRTSoundGo()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_GETRTSOUNDGO_OFFSET))(this);
		}

		::System::Void RefreshAudioOcclusion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_REFRESHAUDIOOCCLUSION_OFFSET))(this);
		}

		::System::Void TrySetOcclusionRTPCForRTGo(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_TRYSETOCCLUSIONRTPCFORRTGO_OFFSET))(this, value);
		}

		::System::Void TrySetOcculsionRTPCForVideo(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER_TRYSETOCCULSIONRTPCFORVIDEO_OFFSET))(this, value);
		}

		::System::Void _InitView_b__39_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__INITVIEW_B__39_0_OFFSET))(this);
		}

		::System::Void _InitView_b__39_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__INITVIEW_B__39_1_OFFSET))(this);
		}

		::System::Void _OnClickSPInfoBtn_b__43_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__ONCLICKSPINFOBTN_B__43_0_OFFSET))(this);
		}

		::System::Void _OnClickSPInfoBtn_b__43_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__ONCLICKSPINFOBTN_B__43_1_OFFSET))(this);
		}

		::System::Void _OnBackBtnClickHandle_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__ONBACKBTNCLICKHANDLE_B__44_0_OFFSET))(this);
		}

		::System::Void _OnStoryInfoBtnClicked_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__ONSTORYINFOBTNCLICKED_B__54_0_OFFSET))(this);
		}

		::System::Void _TriggerStartWeaponPerform_b__59_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__TRIGGERSTARTWEAPONPERFORM_B__59_0_OFFSET))(this);
		}

		::System::Void _RefreshAndPlayLevelUpAnim_b__63_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__REFRESHANDPLAYLEVELUPANIM_B__63_0_OFFSET))(this);
		}

		::System::Void _RefreshAndPlayRefineAnim_b__64_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__REFRESHANDPLAYREFINEANIM_B__64_0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__81_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__ONUIOPEN_B__81_0_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__81_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__ONUIOPEN_B__81_1_OFFSET))(this, args);
		}

		::System::Void _InitWeaponVideoPlayer_b__107_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__INITWEAPONVIDEOPLAYER_B__107_0_OFFSET))(this);
		}

		::System::Void _StopVideoForWeapon_b__110_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__STOPVIDEOFORWEAPON_B__110_1_OFFSET))(this);
		}

		::System::Void _StopVideoForWeapon_g__SetState_110_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER__STOPVIDEOFORWEAPON_G__SETSTATE_110_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
