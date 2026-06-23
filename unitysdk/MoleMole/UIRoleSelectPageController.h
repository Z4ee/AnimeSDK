#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_298DC3CE224F6DF8.h"
#include "unitysdk/Enum_3_32F297C5ACECCD12.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_80565EDC4420BFE0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_CDAC16D6E8EB95EB.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIRoleInfoPageController_UIRoleInfo_SubType.h"
#include "unitysdk/MoleMole/UIRoleSelectPageController___c__DisplayClass76_0.h"
#include "unitysdk/MoleMole/UIRoleSelectPageController___c__DisplayClass76_1.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_2CCC5D7984CDCED4;
class Class_1_A0B1A57C6DC75B0F;
class Class_1_A11CB4C08EF906E4;
class Class_2_07A2E3D9266E9604;
class Class_2_1824EF69C8E376A3;
class Class_2_79AE422BA06F6D26_230;
class Class_2_C2B4B123B5A9B78A;
class MonoUITableScrollV2;
namespace MoleMole { class ConfigNewbie_HighLightDynamicData; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBPPageTopBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace MoleMole { class UIRoleSelectPageContext_OnHandleRoleSelect; }
namespace MoleMole { class UIRoleTrustButtonWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class InteractionRangeProcessor_LocalPosZ_ByScrollY; }
namespace UnityEngine::UI::Extension { class InteractionRangeProcessor_LocalPositionY_DragY; }
namespace UnityEngine::UI::Extension { class InteractionRangeProcessor_RotateY_ByDeltaX; }
template <typename T> class Class_2_50F24C840F0D002C;

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_AFTERCLOSESCROLLTOCAMPIDLENODE_OFFSET UNITYSDK_OFFSET(0x16162040)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_AUTOTOROLEINFO_OFFSET UNITYSDK_OFFSET(0x1615D9C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_BINDBTNS_OFFSET UNITYSDK_OFFSET(0x161625C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_BUILDVIEWITEMS_OFFSET UNITYSDK_OFFSET(0x1615D090)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_CANNOTDRAGHANDLER_OFFSET UNITYSDK_OFFSET(0x16163700)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_CHECKROLEBTNCANCLICK_OFFSET UNITYSDK_OFFSET(0x16164A90)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_CLOSE_OFFSET UNITYSDK_OFFSET(0x161637D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_COLLECTRESULTSELECTEDAVATARITEM_OFFSET UNITYSDK_OFFSET(0x1615FD40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_COLROW2INDEX_OFFSET UNITYSDK_OFFSET(0x1615F030)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_CREATESORTER_OFFSET UNITYSDK_OFFSET(0x16159570)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_DONEWBIE_OFFSET UNITYSDK_OFFSET(0x1615C5A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ENJOYAGENTMODE_OFFSET UNITYSDK_OFFSET(0x16159260)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ENTERSELECT_OFFSET UNITYSDK_OFFSET(0x1615E9C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_FADEOUTANDCLOSE_OFFSET UNITYSDK_OFFSET(0x16162270)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_FADEOUTCLOSE_OFFSET UNITYSDK_OFFSET(0x16169FC0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_FADEOUTUISTOP_OFFSET UNITYSDK_OFFSET(0x16163770)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETINITSELECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1615F090)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x16168CE0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETSORTEDAVATARITEMLIST_OFFSET UNITYSDK_OFFSET(0x1615CCF0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETSTRATEGYGUIDEPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1616A4D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETTEAMSORTINDEX_OFFSET UNITYSDK_OFFSET(0x1615FCC0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x161584B0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_FOCUSAVATARITEM_OFFSET UNITYSDK_OFFSET(0x16157D90)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x161584C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0x16157E50)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_TRIGGERNEWBIEONSHOW_OFFSET UNITYSDK_OFFSET(0x16158460)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16158450)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET__FOCUSITEM_OFFSET UNITYSDK_OFFSET(0x16157970)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET__MULTISELECTON_OFFSET UNITYSDK_OFFSET(0x16157E70)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET__ROLEUPGRADEON_OFFSET UNITYSDK_OFFSET(0x16158160)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_INDEX2COLROW_OFFSET UNITYSDK_OFFSET(0x1615E960)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x16158990)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISHOLLOWGAMEROOM_OFFSET UNITYSDK_OFFSET(0x1616A360)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISITEMLISTCHANGED_OFFSET UNITYSDK_OFFSET(0x1615E530)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x16163E70)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISSTRATEGYBTNCANSHOW_OFFSET UNITYSDK_OFFSET(0x1616A480)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISTRAININGROOMSELECT_OFFSET UNITYSDK_OFFSET(0x161624A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_JUMPROLEINFOPAGE_OFFSET UNITYSDK_OFFSET(0x1615DA90)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1616A300)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_LOADRTMODELFINISHED_OFFSET UNITYSDK_OFFSET(0x1616A0B0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_NEVERFILTERTED_OFFSET UNITYSDK_OFFSET(0x16169C80)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONBACKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16163B30)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONCLICKSKINBTN_OFFSET UNITYSDK_OFFSET(0x161577E0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONCLOSEFILTERPOP_OFFSET UNITYSDK_OFFSET(0x16159410)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x161584D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONFAIRYBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x16164650)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONFAVORITEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x16163F60)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x161681B0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x161670B0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16167C30)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x161699D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONMUTISELECTTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x1615B490)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONNEWBIENEXTSTEPHANDLE_OFFSET UNITYSDK_OFFSET(0x161685F0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONOPENFILTERPOP_OFFSET UNITYSDK_OFFSET(0x161592A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONPOTENTIALBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x16162B70)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLECLICK1_OFFSET UNITYSDK_OFFSET(0x16163870)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLECLICK2_OFFSET UNITYSDK_OFFSET(0x16163950)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLECLICK3_OFFSET UNITYSDK_OFFSET(0x16163A40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLEITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1615F2F0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCAMPIDLEACTIVITY_OFFSET UNITYSDK_OFFSET(0x16161C40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCAMPIDLE_OFFSET UNITYSDK_OFFSET(0x161613A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCLICKED_OFFSET UNITYSDK_OFFSET(0x16160890)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCLICKWHENDEFAULTUSAGE_OFFSET UNITYSDK_OFFSET(0x16160A80)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16159E80)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSORTFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0x161696F0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSTRATEGYBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1616A550)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONTOGGLEMUTISELECT_OFFSET UNITYSDK_OFFSET(0x16169CF0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONTOGGLEUPGRADEBTN_OFFSET UNITYSDK_OFFSET(0x16163090)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16167AB0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16158560)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_PRELOADRTMODELFINISHED_OFFSET UNITYSDK_OFFSET(0x1616A050)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_PROCESSUIAVATAR_OFFSET UNITYSDK_OFFSET(0x16166840)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_READAVATARNEWREADDOT_OFFSET UNITYSDK_OFFSET(0x161609C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHALLSHOWAVATARITEMS_OFFSET UNITYSDK_OFFSET(0x1615B7E0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHBUILDBTNVIEW_OFFSET UNITYSDK_OFFSET(0x1615AE90)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHFAIRYBTNICON_OFFSET UNITYSDK_OFFSET(0x1615B130)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSCROLLVIEWITEM_OFFSET UNITYSDK_OFFSET(0x16164E10)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x16163640)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSELECTICON_OFFSET UNITYSDK_OFFSET(0x16164B00)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSELECTROLEBYUPGRADE_OFFSET UNITYSDK_OFFSET(0x1615E680)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_RELEASEPRELOADAVATAROBJ_OFFSET UNITYSDK_OFFSET(0x16167890)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SCROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0x1615ED40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SENDFAVORITECSREQ_OFFSET UNITYSDK_OFFSET(0x161643A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETMAINBTNSTATE_OFFSET UNITYSDK_OFFSET(0x16169830)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSELECTBTNCOLOR_OFFSET UNITYSDK_OFFSET(0x16166C50)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSELECTIONAVATARID_OFFSET UNITYSDK_OFFSET(0x16165E80)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSHOWAVATAR_OFFSET UNITYSDK_OFFSET(0x16165EE0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSHOWFOCUSAVATAR_OFFSET UNITYSDK_OFFSET(0x16164D40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETUNACTIVEMAINBTN_OFFSET UNITYSDK_OFFSET(0x1615B090)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SET__MULTISELECTON_OFFSET UNITYSDK_OFFSET(0x16157F40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_SET__ROLEUPGRADEON_OFFSET UNITYSDK_OFFSET(0x16158230)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATEAVATARSKINBTN_OFFSET UNITYSDK_OFFSET(0x161579F0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATEFAIRYBTNSTATE_OFFSET UNITYSDK_OFFSET(0x16165C40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATEFAVORITEBTNSTATE_OFFSET UNITYSDK_OFFSET(0x161657D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATESTRATEGYBTNSTATE_OFFSET UNITYSDK_OFFSET(0x1615B350)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATETRAILTIME_OFFSET UNITYSDK_OFFSET(0x161653E0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__86_0_OFFSET UNITYSDK_OFFSET(0x1616AF40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__86_1_OFFSET UNITYSDK_OFFSET(0x1616B040)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__86_2_OFFSET UNITYSDK_OFFSET(0x1616B070)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__86_3_OFFSET UNITYSDK_OFFSET(0x1616B0A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__86_4_OFFSET UNITYSDK_OFFSET(0x1616B0E0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__COLLECTRESULTSELECTEDAVATARITEM_G__ENSUREINDEX_79_0_OFFSET UNITYSDK_OFFSET(0x16160820)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1616A820)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ISITEMLISTCHANGED_B__69_0_OFFSET UNITYSDK_OFFSET(0x1616AC80)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONBACKBTNCLICK_B__100_0_OFFSET UNITYSDK_OFFSET(0x1616B120)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONBACKBTNCLICK_B__100_1_OFFSET UNITYSDK_OFFSET(0x1616B130)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONFAIRYBTNCLICKED_B__104_0_OFFSET UNITYSDK_OFFSET(0x1616B280)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONFAIRYBTNCLICKED_B__104_1_OFFSET UNITYSDK_OFFSET(0x1616B360)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSELECTCLICKWHENDEFAULTUSAGE_B__84_0_OFFSET UNITYSDK_OFFSET(0x1616ADA0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSHOW_B__66_1_OFFSET UNITYSDK_OFFSET(0x1616AB90)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSHOW_B__66_2_OFFSET UNITYSDK_OFFSET(0x1616ABA0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_B__131_1_OFFSET UNITYSDK_OFFSET(0x1616B4B0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_B__131_2_OFFSET UNITYSDK_OFFSET(0x1616B510)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_G__DOMUTISELECTREFRESH_131_0_OFFSET UNITYSDK_OFFSET(0x16169F90)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__REFRESHALLSHOWAVATARITEMS_G__TRYADDAVATAR_76_0_OFFSET UNITYSDK_OFFSET(0x1615FA40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__SENDFAVORITECSREQ_B__103_0_OFFSET UNITYSDK_OFFSET(0x1616B140)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1616B570)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x1616B590)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_GET_TRIGGERNEWBIEONSHOW_OFFSET UNITYSDK_OFFSET(0x1616B580)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1616B620)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1616B6B0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1616B760)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1616B7F0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1616B820)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1616B8B0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1616B8C0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1616B8D0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___N__0_OFFSET UNITYSDK_OFFSET(0x1616AF30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController_TypeDefinitionIndex = 76894;

	class UIRoleSelectPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* _rawImgFadeInAnimName; // 0x0
		// static const ::System::String* _rawImgFadeOutAnimName; // 0x0
		// static const ::System::String* UpgradeOpenRecordKey; // 0x0
		// static const ::System::String* UpgradeCloseRecordKey; // 0x0
		// static const ::System::String* FavoriteAvatarRecordKey; // 0x0
		::System::UInt32 prevSelectedAvatarID; // 0x318
		::System::Boolean prevAvatarCanOpenSkinPanel; // 0x31C
		::System::Int32 AvatarUpgradeID; // 0x320
		::Enum_3_80565EDC4420BFE0 BuildBtnType; // 0x324
		::System::Boolean _disableSubViews; // 0x328
		::Enum_3_CDAC16D6E8EB95EB _usage; // 0x32C
		::System::Int32 MAX_ROWCONTEN_COUNT; // 0x330
		::System::Collections::Generic::List_1<::MonoUITableScrollV2*>* _scrollViews; // 0x338
		::Class_2_C2B4B123B5A9B78A* _RoleRTUnit; // 0x340
		::Class_2_1824EF69C8E376A3* _showingAvatar; // 0x348
		::System::String* _multiSelectKey; // 0x350
		::System::Int32 _curFocusIndex; // 0x358
		::System::Boolean _firstShow; // 0x35C
		::System::String* _fromType; // 0x360
		::System::Boolean isDisposed; // 0x368
		::Class_2_79AE422BA06F6D26_230* _view; // 0x370
		::Class_2_07A2E3D9266E9604* _roleModel; // 0x378
		::Class_1_A0B1A57C6DC75B0F* _selectionData; // 0x380
		::MoleMole::UIRoleSelectPageContext* _context; // 0x388
		::MoleMole::UIRoleSelectPageContext_OnHandleRoleSelect* _customSelectHandle; // 0x390
		::Enum_3_32F297C5ACECCD12 _customSelectReturnType; // 0x398
		::System::Func_3<::Class_1_A0B1A57C6DC75B0F*, ::System::Action_1<::System::Boolean>*, ::System::Boolean>* _customSelectCheckHandle; // 0x3A0
		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* _allShowAvatarItems; // 0x3A8
		::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>* _allItems; // 0x3B0
		::Il2CppArray<::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>*>* _listItems; // 0x3B8
		::Foundation::Coroutine::CoroutineHandle imgFadeOutClose; // 0x3C0
		::Class_2_50F24C840F0D002C<::Class_2_1824EF69C8E376A3*>* _sorter; // 0x3C8
		::System::Boolean _isLoadingRTModel; // 0x3D0
		::UnityEngine::Animation* _rawImageAnim; // 0x3D8
		::System::Single _rawImgFadeOutTime; // 0x3E0
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType, ::MoleMole::UIGeneralPopUpHintWidgetController*>* _popUpHintCtrlDict; // 0x3E8
		::System::Collections::Generic::List_1<::System::Int32>* oldTabHandles; // 0x3F0
		::UnityEngine::UI::Extension::InteractionRangeProcessor_LocalPositionY_DragY* m_yMoveProcessor; // 0x3F8
		::UnityEngine::UI::Extension::InteractionRangeProcessor_RotateY_ByDeltaX* m_rotationProcessor; // 0x400
		::UnityEngine::UI::Extension::InteractionRangeProcessor_LocalPosZ_ByScrollY* m_depthProcessor; // 0x408
		::System::UInt32 _splitScreenHandler; // 0x410
		::System::Boolean m_hideSkillTabHint; // 0x414
		::System::Boolean isMainBtnShow; // 0x415
		::UnityEngine::GameObject* preloadAvatarObj; // 0x418
		::System::Boolean isPreloadAvatarFinished; // 0x420
		::MoleMole::UIRoleTrustButtonWidgetController* _roleTrustButtonWidget; // 0x428
		::MoleMole::UIBPPageTopBtnWidgetController* _strategyBtnWidget; // 0x430
		::System::Boolean _canShowFairyBtn; // 0x438
		::System::Boolean _canShowStrategyBtn; // 0x439

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnClickSkinBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONCLICKSKINBTN_OFFSET))(this);
		}

		::System::Void UpdateAvatarSkinBtn(::System::UInt32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATEAVATARSKINBTN_OFFSET))(this, avatarId);
		}

		::Class_2_1824EF69C8E376A3* get_FocusAvatarItem()
		{
			return ((::Class_2_1824EF69C8E376A3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_FOCUSAVATARITEM_OFFSET))(this);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_ISMULTISELECT_OFFSET))(this);
		}

		static ::System::Boolean get__multiSelectOn()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET__MULTISELECTON_OFFSET))();
		}

		static ::System::Void set__multiSelectOn(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SET__MULTISELECTON_OFFSET))(value);
		}

		static ::System::Boolean get__roleUpgradeOn()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET__ROLEUPGRADEON_OFFSET))();
		}

		static ::System::Void set__roleUpgradeOn(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SET__ROLEUPGRADEON_OFFSET))(value);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_TriggerNewbieOnShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_TRIGGERNEWBIEONSHOW_OFFSET))(this);
		}

		::Class_1_2CCC5D7984CDCED4* get__focusItem()
		{
			return ((::Class_1_2CCC5D7984CDCED4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET__FOCUSITEM_OFFSET))(this);
		}

		::MoleMole::UIRoleSelectPageContext* get_Context()
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_CONTEXT_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void EnjoyAgentMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ENJOYAGENTMODE_OFFSET))(this);
		}

		::System::Void OnOpenFilterPop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONOPENFILTERPOP_OFFSET))(this);
		}

		::System::Void OnCloseFilterPop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONCLOSEFILTERPOP_OFFSET))(this);
		}

		::System::Void CreateSorter(::System::Boolean addOwnFilterSorter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_CREATESORTER_OFFSET))(this, addOwnFilterSorter);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showContextBase)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSHOW_OFFSET))(this, showContextBase);
		}

		::System::Void DoNewbie(::System::Int32 initSelectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_DONEWBIE_OFFSET))(this, initSelectionID);
		}

		::System::Void AutoToRoleInfo(::System::Boolean isAuto, ::System::Int32 tabIndex, ::System::Boolean forceClickEquip, ::System::Boolean forceClickWeapon, ::System::Boolean withBlackFadeIn, ::System::Boolean forceOpenEquipRecommend, ::System::Boolean forceOpenWeaponRecommend)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_AUTOTOROLEINFO_OFFSET))(this, isAuto, tabIndex, forceClickEquip, forceClickWeapon, withBlackFadeIn, forceOpenEquipRecommend, forceOpenWeaponRecommend);
		}

		::System::Boolean IsItemListChanged(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* avatarItems)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISITEMLISTCHANGED_OFFSET))(this, avatarItems);
		}

		::System::Void BuildViewItems(::System::Int32 initSelectionID, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* avatarItems, ::System::Boolean fromSort)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_BUILDVIEWITEMS_OFFSET))(this, initSelectionID, avatarItems, fromSort);
		}

		::System::Void ScrollToTarget(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SCROLLTOTARGET_OFFSET))(this, index);
		}

		::System::Int32 ColRow2Index(::System::Int32 col, ::System::Int32 row)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_COLROW2INDEX_OFFSET))(this, col, row);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> Index2ColRow(::System::Int32 index)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_INDEX2COLROW_OFFSET))(this, index);
		}

		::System::Int32 GetInitSelectionIndex(::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>* sortedList, ::System::Int32 initSelectionID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETINITSELECTIONINDEX_OFFSET))(this, sortedList, initSelectionID);
		}

		::System::Void EnterSelect(::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>* sortedList, ::System::Int32 initSelectionID, ::System::Boolean selectLastItem, ::System::Int32 lastCenterChild, ::UnityEngine::Vector2 lastCenterChildCustomRange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>*, ::System::Int32, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ENTERSELECT_OFFSET))(this, sortedList, initSelectionID, selectLastItem, lastCenterChild, lastCenterChildCustomRange);
		}

		::System::Void RefreshAllShowAvatarItems(::System::Boolean showLockedAvatars, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* provideAvatarList, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* robots, ::System::Boolean allowSameName, ::Enum_3_298DC3CE224F6DF8 banSelfOwnedAvatarMode, ::System::Collections::Generic::HashSet_1<::System::Int32>* blacklist, ::System::Collections::Generic::HashSet_1<::System::Int32>* whitelist, ::System::Boolean checkReleaseTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*, ::System::Boolean, ::Enum_3_298DC3CE224F6DF8, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHALLSHOWAVATARITEMS_OFFSET))(this, showLockedAvatars, provideAvatarList, robots, allowSameName, banSelfOwnedAvatarMode, blacklist, whitelist, checkReleaseTime);
		}

		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* GetSortedAvatarItemList()
		{
			return ((::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETSORTEDAVATARITEMLIST_OFFSET))(this);
		}

		::System::Int32 GetTeamSortIndex(::Class_2_1824EF69C8E376A3* item)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETTEAMSORTINDEX_OFFSET))(this, item);
		}

		::System::Object* CollectResultSelectedAvatarItem()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_COLLECTRESULTSELECTEDAVATARITEM_OFFSET))(this);
		}

		::System::Void OnSelectClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCLICKED_OFFSET))(this);
		}

		::System::Void OnSelectCampIdle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCAMPIDLE_OFFSET))(this);
		}

		::System::Void OnSelectCampIdleActivity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCAMPIDLEACTIVITY_OFFSET))(this);
		}

		::System::Void AfterCloseScrollToCampIdleNode(::System::Int32 focusNodeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_AFTERCLOSESCROLLTOCAMPIDLENODE_OFFSET))(this, focusNodeID);
		}

		::System::Void OnSelectClickWhenDefaultUsage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSELECTCLICKWHENDEFAULTUSAGE_OFFSET))(this);
		}

		::System::Void FadeOutAndClose(::Class_2_1824EF69C8E376A3* fadeOutAvatarItemData, ::System::Action* afterFadeAction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_FADEOUTANDCLOSE_OFFSET))(this, fadeOutAvatarItemData, afterFadeAction);
		}

		::System::Void BindBtns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_BINDBTNS_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnPotentialBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONPOTENTIALBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnToggleUpgradeBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONTOGGLEUPGRADEBTN_OFFSET))(this);
		}

		::System::Void RefreshSelectRoleByUpgrade(::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>* _allSelectItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSELECTROLEBYUPGRADE_OFFSET))(this, _allSelectItems);
		}

		::System::Void RefreshScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSCROLLVIEW_OFFSET))(this);
		}

		::System::Boolean CanNotDragHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_CANNOTDRAGHANDLER_OFFSET))(this);
		}

		::System::Void FadeOutUIStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_FADEOUTUISTOP_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_CLOSE_OFFSET))(this);
		}

		::System::Void OnRoleClick1(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLECLICK1_OFFSET))(this, index);
		}

		::System::Void OnRoleClick2(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLECLICK2_OFFSET))(this, index);
		}

		::System::Void OnRoleClick3(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLECLICK3_OFFSET))(this, index);
		}

		::System::Void OnBackBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONBACKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnFavoriteBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONFAVORITEBTNCLICKED_OFFSET))(this);
		}

		::System::Void SendFavoriteCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SENDFAVORITECSREQ_OFFSET))(this);
		}

		::System::Void OnFairyBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONFAIRYBTNCLICKED_OFFSET))(this);
		}

		::System::Boolean IsSelectionChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISSELECTIONCHANGED_OFFSET))(this);
		}

		::System::Boolean CheckRoleBtnCanClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_CHECKROLEBTNCANCLICK_OFFSET))(this);
		}

		::System::Void RefreshSelectIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSELECTICON_OFFSET))(this);
		}

		::System::Void OnRoleItemSelect(::System::Int32 index, ::System::Boolean isInitSelect, ::System::Boolean toggleMultiSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONROLEITEMSELECT_OFFSET))(this, index, isInitSelect, toggleMultiSelect);
		}

		::System::Void SetSelectionAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSELECTIONAVATARID_OFFSET))(this, avatarID);
		}

		::System::Void RefreshScrollViewItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHSCROLLVIEWITEM_OFFSET))(this);
		}

		::System::Void SetShowFocusAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSHOWFOCUSAVATAR_OFFSET))(this);
		}

		::System::Void SetShowAvatar(::Class_2_1824EF69C8E376A3* avatarItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSHOWAVATAR_OFFSET))(this, avatarItem);
		}

		::System::Void SetSelectBtnColor(::Class_2_1824EF69C8E376A3* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETSELECTBTNCOLOR_OFFSET))(this, itemData);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void SetUnActiveMainBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETUNACTIVEMAINBTN_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ReleasePreloadAvatarObj()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_RELEASEPRELOADAVATAROBJ_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnNewbieNextStepHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONNEWBIENEXTSTEPHANDLE_OFFSET))(this, obj);
		}

		::Class_1_A11CB4C08EF906E4* GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* config)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, config);
		}

		::System::Void JumpRoleInfoPage(::System::Int32 targetSubType, ::System::Boolean invokeSelectEvent, ::System::Boolean withOutLoading, ::System::Boolean forceClickEquip, ::System::Boolean forceClickWeapon, ::System::Boolean withBlackFadeIn, ::System::Boolean forceOpenEquipRecommend, ::System::Boolean forceOpenWeaponRecommend)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_JUMPROLEINFOPAGE_OFFSET))(this, targetSubType, invokeSelectEvent, withOutLoading, forceClickEquip, forceClickWeapon, withBlackFadeIn, forceOpenEquipRecommend, forceOpenWeaponRecommend);
		}

		::System::Void ReadAvatarNewReadDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_READAVATARNEWREADDOT_OFFSET))(this);
		}

		::System::Void OnSortFilterChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSORTFILTERCHANGED_OFFSET))(this);
		}

		::System::Void SetMainBtnState(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_SETMAINBTNSTATE_OFFSET))(this, isShow);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Boolean NeverFilterted(::Class_2_1824EF69C8E376A3* avatar)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_NEVERFILTERTED_OFFSET))(this, avatar);
		}

		::System::Void OnMutiSelectToggleChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONMUTISELECTTOGGLECHANGED_OFFSET))(this);
		}

		::System::Void OnToggleMutiSelect(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONTOGGLEMUTISELECT_OFFSET))(this, isOn);
		}

		::System::Void ProcessUIAvatar(::Class_2_1824EF69C8E376A3* avatarData, ::System::Int32 showTypeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_PROCESSUIAVATAR_OFFSET))(this, avatarData, showTypeIndex);
		}

		::System::Void PreLoadRTModelFinished(::UnityEngine::GameObject* insObj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_PRELOADRTMODELFINISHED_OFFSET))(this, insObj);
		}

		::System::Void LoadRTModelFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_LOADRTMODELFINISHED_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* FadeOutClose(::System::Action* action)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_FADEOUTCLOSE_OFFSET))(this, action);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Boolean IsHollowGameRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISHOLLOWGAMEROOM_OFFSET))(this);
		}

		::System::Boolean IsTrainingRoomSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISTRAININGROOMSELECT_OFFSET))(this);
		}

		::System::Void UpdateTrailTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATETRAILTIME_OFFSET))(this);
		}

		::System::Void UpdateFavoriteBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATEFAVORITEBTNSTATE_OFFSET))(this);
		}

		::System::Void UpdateFairyBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATEFAIRYBTNSTATE_OFFSET))(this);
		}

		::System::Void RefreshFairyBtnIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHFAIRYBTNICON_OFFSET))(this);
		}

		::System::Void UpdateStrategyBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_UPDATESTRATEGYBTNSTATE_OFFSET))(this);
		}

		::System::Boolean IsStrategyBtnCanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ISSTRATEGYBTNCANSHOW_OFFSET))(this);
		}

		::System::Boolean GetStrategyGuidePreviewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_GETSTRATEGYGUIDEPREVIEWMODE_OFFSET))(this);
		}

		::System::Void OnStrategyBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_ONSTRATEGYBTNCLICKED_OFFSET))(this);
		}

		::System::Void RefreshBuildBtnView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER_REFRESHBUILDBTNVIEW_OFFSET))(this);
		}

		::System::Void _OnShow_b__66_1(::System::Boolean isOn, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSHOW_B__66_1_OFFSET))(this, isOn, isInit);
		}

		::System::Boolean _OnShow_b__66_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSHOW_B__66_2_OFFSET))(this);
		}

		::System::Boolean _IsItemListChanged_b__69_0(::Class_2_1824EF69C8E376A3* t, ::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_1824EF69C8E376A3*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ISITEMLISTCHANGED_B__69_0_OFFSET))(this, t, i);
		}

		::System::Void _RefreshAllShowAvatarItems_g__TryAddAvatar_76_0(::Class_2_1824EF69C8E376A3* avatar, ::MoleMole::UIRoleSelectPageController___c__DisplayClass76_0& a2, ::MoleMole::UIRoleSelectPageController___c__DisplayClass76_1& a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*, ::MoleMole::UIRoleSelectPageController___c__DisplayClass76_0&, ::MoleMole::UIRoleSelectPageController___c__DisplayClass76_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__REFRESHALLSHOWAVATARITEMS_G__TRYADDAVATAR_76_0_OFFSET))(this, avatar, a2, a3);
		}

		static ::System::Void _CollectResultSelectedAvatarItem_g__EnsureIndex_79_0(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* list, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__COLLECTRESULTSELECTEDAVATARITEM_G__ENSUREINDEX_79_0_OFFSET))(list, idx);
		}

		::System::Void _OnSelectClickWhenDefaultUsage_b__84_0(::System::Boolean dispatch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONSELECTCLICKWHENDEFAULTUSAGE_B__84_0_OFFSET))(this, dispatch);
		}

		::System::Void __n__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___N__0_OFFSET))(this);
		}

		::System::Void _BindBtns_b__86_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__86_0_OFFSET))(this);
		}

		::System::Void _BindBtns_b__86_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__86_1_OFFSET))(this);
		}

		::System::Void _BindBtns_b__86_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__86_2_OFFSET))(this);
		}

		::System::Void _BindBtns_b__86_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__86_3_OFFSET))(this);
		}

		::System::Void _BindBtns_b__86_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__BINDBTNS_B__86_4_OFFSET))(this);
		}

		::System::Void _OnBackBtnClick_b__100_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONBACKBTNCLICK_B__100_0_OFFSET))(this);
		}

		::System::Void _OnBackBtnClick_b__100_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONBACKBTNCLICK_B__100_1_OFFSET))(this);
		}

		::System::Void _SendFavoriteCsReq_b__103_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__SENDFAVORITECSREQ_B__103_0_OFFSET))(this);
		}

		::System::Void _OnFairyBtnClicked_b__104_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONFAIRYBTNCLICKED_B__104_0_OFFSET))(this);
		}

		::System::Void _OnFairyBtnClicked_b__104_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONFAIRYBTNCLICKED_B__104_1_OFFSET))(this);
		}

		::System::Void _OnToggleMutiSelect_b__131_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_B__131_1_OFFSET))(this);
		}

		::System::Void _OnToggleMutiSelect_b__131_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_B__131_2_OFFSET))(this);
		}

		::System::Void _OnToggleMutiSelect_g__DoMutiSelectRefresh_131_0(::System::Boolean nextOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__ONTOGGLEMUTISELECT_G__DOMUTISELECTREFRESH_131_0_OFFSET))(this, nextOn);
		}

		::System::Void __base_Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_CLOSE_OFFSET))(this);
		}

		::System::Boolean __base_get_TriggerNewbieOnShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_GET_TRIGGERNEWBIEONSHOW_OFFSET))(this);
		}

		::Class_1_A11CB4C08EF906E4* __base_GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* P0)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
