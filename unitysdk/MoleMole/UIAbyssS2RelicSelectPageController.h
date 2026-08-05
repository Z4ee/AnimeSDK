#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_15A8EF2824547B27.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIAbyssS2RelicSelectPageController_RelicSelectType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_0E5778BB52E10271;
class Class_1_4F9417780723166C;
class Class_1_E49B99468FA26AB2;
class Class_2_05FFD1541715324E;
class Class_2_208CC9941471731A_477;
class Class_2_4D5664F824CA4BC9;
class Class_2_79AE422BA06F6D26_117;
class Class_2_AA84BE880EB6657E;
class Class_2_AB2EF02AB0EB9012_1;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIAbyssS2InfoBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralToggleWidgetControllerWithModel; }
namespace MoleMole { class UIWidgetController; }
namespace MoleMole { class UserLocalDataItem; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_CREATEOPTIONDATALIST_OFFSET UNITYSDK_OFFSET(0x197B9860)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_FINDCURSELECTEDITEMID_OFFSET UNITYSDK_OFFSET(0x197B9800)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_GETCURRENTSKILLRELICITEM_OFFSET UNITYSDK_OFFSET(0x197BB3E0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_GETTRENDID_OFFSET UNITYSDK_OFFSET(0x197BC910)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_GET_ABYSSS2MODEL_OFFSET UNITYSDK_OFFSET(0x197BE8C0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_GET_CURFOCUSED_OFFSET UNITYSDK_OFFSET(0x197BB670)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x197B7F00)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_GET_INITIALRELICMODEL_OFFSET UNITYSDK_OFFSET(0x197BE790)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x197B7F10)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITGENERALTOKENWIDGET_OFFSET UNITYSDK_OFFSET(0x197BAEC0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITGENREGROUPLIST_OFFSET UNITYSDK_OFFSET(0x197B9CD0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITINITIALRELICVIEW_OFFSET UNITYSDK_OFFSET(0x197B91B0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITRELICACTIVEVIEW_OFFSET UNITYSDK_OFFSET(0x197B93C0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITRELICITEMLIST_OFFSET UNITYSDK_OFFSET(0x197B9460)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITRELICTYPE_OFFSET UNITYSDK_OFFSET(0x197B9760)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x197BA890)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITSELECTEDVIEW_1_OFFSET UNITYSDK_OFFSET(0x197BCC40)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITSELECTEDVIEW_OFFSET UNITYSDK_OFFSET(0x197BCBB0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITSTATEDATALIST_OFFSET UNITYSDK_OFFSET(0x197BA1F0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITTOGGLE_OFFSET UNITYSDK_OFFSET(0x197B85C0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONCLICKCANCELBTN_OFFSET UNITYSDK_OFFSET(0x197BDFF0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONCLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x197BD100)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONCLICKOKBTN_OFFSET UNITYSDK_OFFSET(0x197BD550)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONCLICKPAYBTN_OFFSET UNITYSDK_OFFSET(0x197BD1A0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONCLICKTRENDBTN_OFFSET UNITYSDK_OFFSET(0x197BE150)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x197BDDF0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197B7F20)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONINITIALRELICDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x197BE620)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x197B8C50)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x197BE480)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONTOGGLECHANGE_OFFSET UNITYSDK_OFFSET(0x197B8800)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197BB600)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197B7FB0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x197B8E10)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_PLAYSELECTTOPANIM_OFFSET UNITYSDK_OFFSET(0x197BDF60)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_PROCESSNORMALCONFIRM_OFFSET UNITYSDK_OFFSET(0x197BD9D0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_REFRESHSELECTVIEW_OFFSET UNITYSDK_OFFSET(0x197B88C0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_REFRESHTOPVIEW_OFFSET UNITYSDK_OFFSET(0x197BB890)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_REFRESHTRENDVIEW_OFFSET UNITYSDK_OFFSET(0x197BC1D0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_REFRESHVIEWONFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x197BB800)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x197BB380)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_SETCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x197BCCE0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x197BE9F0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER__ONCLICKCANCELBTN_B__59_0_OFFSET UNITYSDK_OFFSET(0x197BEAA0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER__ONCONFIRM_B__57_0_OFFSET UNITYSDK_OFFSET(0x197BEA90)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197BEB00)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x197BEB90)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197BEBC0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197BEBD0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x197BEBE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RelicSelectPageController_TypeDefinitionIndex = 51182;

	class UIAbyssS2RelicSelectPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* AvatarRelicSelectLocalKey; // 0x0
		// static const ::System::String* CommonRelicSelectLocalKey; // 0x0
		// static const ::System::String* BranchRelicSelectLocalKey; // 0x0
		// static const ::System::String* AvatarRelicSelectTextMap1; // 0x0
		// static const ::System::String* AvatarRelicSelectTextMap2; // 0x0
		// static const ::System::String* AvatarRelicSelectTextMap3; // 0x0
		// static const ::System::String* CommonRelicSelectTextMap1; // 0x0
		// static const ::System::String* CommonRelicSelectTextMap2; // 0x0
		// static const ::System::String* CommonRelicSelectTextMap3; // 0x0
		// static const ::System::String* BranchRelicSelectTextMap1; // 0x0
		// static const ::System::String* BranchRelicSelectTextMap2; // 0x0
		// static const ::System::String* BranchRelicSelectTextMap3; // 0x0
		::Class_2_79AE422BA06F6D26_117* _view; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _contentAddtiveWidgetList; // 0x320
		::System::UInt32 _lastMUid; // 0x328
		::System::Boolean playSelectAnim; // 0x32C
		::System::Int32 _lastIndex; // 0x330
		::MoleMole::UIGeneralToggleWidgetControllerWithModel* toggle; // 0x338
		::MoleMole::UIAbyssS2RelicSelectPageController_RelicSelectType _relicType; // 0x340
		::Enum_3_15A8EF2824547B27 _currentPageShowType; // 0x344
		::System::UInt32 initialRelicUID; // 0x348
		::Class_1_0E5778BB52E10271* _showData; // 0x350
		::Class_1_0E5778BB52E10271* _lastShowData; // 0x358
		::System::Boolean _everSelected; // 0x360
		::MoleMole::MonoGamepadCustomList* _naviList; // 0x368
		::System::Collections::Generic::List_1<::Class_1_0E5778BB52E10271*>* _list; // 0x370
		::System::Collections::Generic::List_1<::Class_1_E49B99468FA26AB2*>* _groupByGenreList; // 0x378
		::System::Collections::Generic::List_1<::System::Int32>* relicItemIDList; // 0x380
		::System::Int32 m_relicID; // 0x388
		::System::UInt32 m_objUID; // 0x38C
		::System::Boolean CanUnlock; // 0x390
		::System::Boolean isCurrentLocked; // 0x391
		::Class_2_4D5664F824CA4BC9* m_initialRelicModel; // 0x398
		::Class_2_AB2EF02AB0EB9012_1* _abyssS2Model; // 0x3A0
		::MoleMole::UIAbyssS2InfoBtnWidgetController* _abyssS2InfoBtn; // 0x3A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitToggle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITTOGGLE_OFFSET))(this);
		}

		::System::Void OnToggleChange(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONTOGGLECHANGE_OFFSET))(this, isOn);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitRelicActiveView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITRELICACTIVEVIEW_OFFSET))(this);
		}

		::System::Void InitInitialRelicView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITINITIALRELICVIEW_OFFSET))(this);
		}

		::System::Void InitScrollView(::System::Int32 initSelectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITSCROLLVIEW_OFFSET))(this, initSelectIndex);
		}

		::System::Void InitGeneralTokenWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITGENERALTOKENWIDGET_OFFSET))(this);
		}

		::System::Void InitStateDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITSTATEDATALIST_OFFSET))(this);
		}

		::System::Void InitGenreGroupList(::System::Collections::Generic::List_1<::Class_1_4F9417780723166C*>* relicDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_4F9417780723166C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITGENREGROUPLIST_OFFSET))(this, relicDatas);
		}

		::System::Collections::Generic::List_1<::Class_1_4F9417780723166C*>* CreateOptionDataList(::System::Int32 currentItemId, ::System::Int32& initSelectIndex)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_4F9417780723166C*>*(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_CREATEOPTIONDATALIST_OFFSET))(this, currentItemId, initSelectIndex);
		}

		::System::Void InitRelicType(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITRELICTYPE_OFFSET))(this, uid);
		}

		::System::Int32 FindCurSelectedItemId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_FINDCURSELECTEDITEMID_OFFSET))(this);
		}

		::System::Void InitRelicItemList(::Class_2_4D5664F824CA4BC9* relicModel, ::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_4D5664F824CA4BC9*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITRELICITEMLIST_OFFSET))(this, relicModel, uid);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean get_CurFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_GET_CURFOCUSED_OFFSET))(this);
		}

		::System::Void RefreshViewOnFocusChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_REFRESHVIEWONFOCUSCHANGE_OFFSET))(this, args);
		}

		::Class_1_0D6706375CDAAE8C* GetCurrentSkillRelicItem()
		{
			return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_GETCURRENTSKILLRELICITEM_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, isInit);
		}

		::System::Void RefreshTopView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_REFRESHTOPVIEW_OFFSET))(this);
		}

		::System::Void RefreshTrendView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_REFRESHTRENDVIEW_OFFSET))(this);
		}

		::System::Void RefreshSelectView(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_REFRESHSELECTVIEW_OFFSET))(this, isInit);
		}

		::System::Void InitSelectedView(::System::Boolean isInit, ::Class_2_AA84BE880EB6657E* uiHollowOptionRelicBranchData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_AA84BE880EB6657E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITSELECTEDVIEW_OFFSET))(this, isInit, uiHollowOptionRelicBranchData);
		}

		::System::Void InitSelectedView_1(::System::Boolean isInit, ::Class_2_05FFD1541715324E* relicData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_05FFD1541715324E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_INITSELECTEDVIEW_1_OFFSET))(this, isInit, relicData);
		}

		::System::Void SetClickCallBack(::Class_1_0E5778BB52E10271* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0E5778BB52E10271*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_SETCLICKCALLBACK_OFFSET))(this, data);
		}

		::System::Void OnClickCloseBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONCLICKCLOSEBTN_OFFSET))(this);
		}

		::System::Void OnClickPayBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONCLICKPAYBTN_OFFSET))(this);
		}

		::System::Void OnClickOkBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONCLICKOKBTN_OFFSET))(this);
		}

		::System::Void ProcessNormalConfirm(::System::Boolean isShow, ::System::String* localKey, ::MoleMole::UserLocalDataItem* localData, ::Class_2_208CC9941471731A_477* itemTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::MoleMole::UserLocalDataItem*, ::Class_2_208CC9941471731A_477*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_PROCESSNORMALCONFIRM_OFFSET))(this, isShow, localKey, localData, itemTemplate);
		}

		::System::Void OnConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONCONFIRM_OFFSET))(this);
		}

		::System::Void PlaySelectTopAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_PLAYSELECTTOPANIM_OFFSET))(this);
		}

		::System::Void OnClickCancelBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONCLICKCANCELBTN_OFFSET))(this);
		}

		::System::Void OnClickTrendBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONCLICKTRENDBTN_OFFSET))(this);
		}

		::System::Int32 GetTrendID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_GETTRENDID_OFFSET))(this);
		}

		::System::Void OnItemChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONITEMCHANGED_OFFSET))(this, args);
		}

		::System::Void OnInitialRelicDataUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_ONINITIALRELICDATAUPDATE_OFFSET))(this, args);
		}

		::Class_2_4D5664F824CA4BC9* get_InitialRelicModel()
		{
			return ((::Class_2_4D5664F824CA4BC9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_GET_INITIALRELICMODEL_OFFSET))(this);
		}

		::Class_2_AB2EF02AB0EB9012_1* get_AbyssS2Model()
		{
			return ((::Class_2_AB2EF02AB0EB9012_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER_GET_ABYSSS2MODEL_OFFSET))(this);
		}

		::System::Void _OnConfirm_b__57_0(::System::Int32 rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER__ONCONFIRM_B__57_0_OFFSET))(this, rsp);
		}

		::System::Void _OnClickCancelBtn_b__59_0(::System::Int32 rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER__ONCLICKCANCELBTN_B__59_0_OFFSET))(this, rsp);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
