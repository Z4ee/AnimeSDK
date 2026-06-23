#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/UIBossChallengePageController_RoomInfoData.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_5DA2E7556103D5A3_386;
class Class_1_5DA2E7556103D5A3_399;
class Class_1_5DA2E7556103D5A3_401;
class Class_1_5DA2E7556103D5A3_414;
class Class_1_90F86E90A663D1B4;
class Class_1_A0B1A57C6DC75B0F;
class Class_2_1824EF69C8E376A3;
class Class_2_7B15B3118FE590CD_7;
class Class_2_7B15B3118FE590CD_7_Class_2_FA228B66D064C2D1;
class Class_2_F8EB4D9464ADCCA1;
class Class_3_E9FF194CA9EF9D04;
class Class_3_F118437738B4CCD5_3;
namespace MoleMole { class QuickEditContext; }
namespace MoleMole { class UIActivePropsWindowContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace MoleMole { class UILinkTermCollector; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_APPLYBOSSCHALLENGETEAMINFOS_OFFSET UNITYSDK_OFFSET(0x15243EB0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_CALCLINEUPSELECTIONFROMRECORD_OFFSET UNITYSDK_OFFSET(0x15240B00)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_CHECKBUDDYCUSTOMSELECTSTR_OFFSET UNITYSDK_OFFSET(0x15243130)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_CUSTOMGETMULTIINDEXSTR_OFFSET UNITYSDK_OFFSET(0x15242920)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_CUSTOMGETOTHERTEAMSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x15242730)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_GETRESISTLIST_OFFSET UNITYSDK_OFFSET(0x1523F5F0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_GETSHOWINGLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x15241300)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_GET__LAYERRECORD_OFFSET UNITYSDK_OFFSET(0x1523D350)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_INITENDTIMER_OFFSET UNITYSDK_OFFSET(0x15240590)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_INITROLE_OFFSET UNITYSDK_OFFSET(0x1523DC20)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ISLAYERLINEUPCHANGED_OFFSET UNITYSDK_OFFSET(0x15242460)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ISLAYERROLESLOCKED_OFFSET UNITYSDK_OFFSET(0x15244570)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ISLINEUPSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x15242300)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1523EB80)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONGETROLESELECTCONTEXT_OFFSET UNITYSDK_OFFSET(0x15242AB0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1523EE30)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONNOUNBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x15241230)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONPOSTGETBUDDYSELECTCONTEXT_OFFSET UNITYSDK_OFFSET(0x15243090)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONRESETSUCCESS_OFFSET UNITYSDK_OFFSET(0x15241DD0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONSELECTCHECKHANDLE_OFFSET UNITYSDK_OFFSET(0x15241BB0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x15243350)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1523EC90)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONTERMLINKSCHANGED_OFFSET UNITYSDK_OFFSET(0x15241290)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1523EC10)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1523D450)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1523DE20)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_OPENBUFFDIALOG_OFFSET UNITYSDK_OFFSET(0x15241E20)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_OPENSELECTROLEPAGE_OFFSET UNITYSDK_OFFSET(0x15241350)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_RECONFIRMSELECTIONCHANGEDONLINEUPCLOSE_OFFSET UNITYSDK_OFFSET(0x15242060)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_REFRESHROLES_OFFSET UNITYSDK_OFFSET(0x1523F940)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_REFRESHSCORES_OFFSET UNITYSDK_OFFSET(0x1523EFC0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_REFRESHSELECTEDBUFF_OFFSET UNITYSDK_OFFSET(0x1523FE60)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1523E190)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SETQUICKEDITORCONTEXTHANDLE_OFFSET UNITYSDK_OFFSET(0x15241D00)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SHOWELEMENT_OFFSET UNITYSDK_OFFSET(0x152406D0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SHOWRESIST_OFFSET UNITYSDK_OFFSET(0x1523F810)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SHOWTARGETITEM_OFFSET UNITYSDK_OFFSET(0x152400F0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SHOWWEEKNESS_OFFSET UNITYSDK_OFFSET(0x1523F4C0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x152446C0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__INITROLE_B__31_0_OFFSET UNITYSDK_OFFSET(0x15244B40)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONSELECTIONCHANGED_G__GETAVATAROCCUPINDEX_50_0_OFFSET UNITYSDK_OFFSET(0x15243BD0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONSELECTIONCHANGED_G__GETBUDDYLAYERINDEX_50_1_OFFSET UNITYSDK_OFFSET(0x15243D60)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONUIINIT_B__17_0_OFFSET UNITYSDK_OFFSET(0x15244820)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONUIINIT_B__17_1_OFFSET UNITYSDK_OFFSET(0x15244830)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONUIINIT_B__17_2_OFFSET UNITYSDK_OFFSET(0x152449F0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15244B50)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x15244BE0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15244C70)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15244D10)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15244DA0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15244E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeInfoWidgetController_TypeDefinitionIndex = 45346;

	class UIBossChallengeInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 MAX_ROLE_COUNT = 0x3; // 0x0
		::MoleMole::UILinkTermCollector* _termCollector; // 0x2C0
		::Class_2_7B15B3118FE590CD_7* _view; // 0x2C8
		::MoleMole::UIBossChallengePageController_RoomInfoData _roomData; // 0x2D0
		::Class_1_5DA2E7556103D5A3_401* _entranceInfoTemplate; // 0x2E0
		::Class_1_5DA2E7556103D5A3_399* _zoneTemplate; // 0x2E8
		::Class_1_5DA2E7556103D5A3_414* _layerTemplate; // 0x2F0
		::Class_1_5DA2E7556103D5A3_386* _roomTemplate; // 0x2F8
		::Class_2_F8EB4D9464ADCCA1* _bossTemplate; // 0x300
		::System::Int32 _selectedBuffID; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>* _generalHeadCtrlers; // 0x310
		::System::Action_1<::System::Boolean>* _ctrlerVisibleChangedCb; // 0x318
		::System::Boolean _isSelectBuff; // 0x320
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_F118437738B4CCD5_3*>* _lineupCacheDataForLayers; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_3_E9FF194CA9EF9D04* get__layerRecord()
		{
			return ((::Class_3_E9FF194CA9EF9D04*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_GET__LAYERRECORD_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* GetResistList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_GETRESISTLIST_OFFSET))(this);
		}

		::System::Void RefreshScores()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_REFRESHSCORES_OFFSET))(this);
		}

		::System::Void RefreshSelectedBuff(::System::Boolean callByOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_REFRESHSELECTEDBUFF_OFFSET))(this, callByOpen);
		}

		::System::Void ShowWeekness(::UnityEngine::Transform* weeknessTransform, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SHOWWEEKNESS_OFFSET))(this, weeknessTransform, index);
		}

		::System::Void ShowElement(::UnityEngine::Transform* root, ::System::Int32 eleId)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SHOWELEMENT_OFFSET))(this, root, eleId);
		}

		::System::Void ShowResist(::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* resistList, ::UnityEngine::Transform* resistTransform, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SHOWRESIST_OFFSET))(this, resistList, resistTransform, index);
		}

		::System::Void RefreshRoles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_REFRESHROLES_OFFSET))(this);
		}

		::System::Void InitRole(::UnityEngine::Transform* parent, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_INITROLE_OFFSET))(this, parent, index);
		}

		::System::Void ShowTargetItem(::System::Int32 starNum, ::Class_2_7B15B3118FE590CD_7_Class_2_FA228B66D064C2D1* tgtItemView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_7B15B3118FE590CD_7_Class_2_FA228B66D064C2D1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SHOWTARGETITEM_OFFSET))(this, starNum, tgtItemView);
		}

		::System::Void InitEndTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_INITENDTIMER_OFFSET))(this);
		}

		::System::Void OnNounBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONNOUNBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnTermLinksChanged(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONTERMLINKSCHANGED_OFFSET))(this, active);
		}

		::System::Int32 GetShowingLayerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_GETSHOWINGLAYERINDEX_OFFSET))(this);
		}

		::System::Void OpenSelectRolePage(::System::Boolean openSelectBuddy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_OPENSELECTROLEPAGE_OFFSET))(this, openSelectBuddy);
		}

		::System::Boolean OnSelectCheckHandle(::Class_1_A0B1A57C6DC75B0F* selectitonData, ::System::Action_1<::System::Boolean>* onCloseAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_A0B1A57C6DC75B0F*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONSELECTCHECKHANDLE_OFFSET))(this, selectitonData, onCloseAction);
		}

		static ::System::Void SetQuickEditorContextHandle(::MoleMole::QuickEditContext* context)
		{
			return ((::System::Void(*)(::MoleMole::QuickEditContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SETQUICKEDITORCONTEXTHANDLE_OFFSET))(context);
		}

		::System::Void OnResetSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONRESETSUCCESS_OFFSET))(this);
		}

		::System::Void OpenBuffDialog(::System::Action* buffSelectCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_OPENBUFFDIALOG_OFFSET))(this, buffSelectCallback);
		}

		::System::Void ReConfirmSelectionChangedOnLineupClose(::System::Action* onFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_RECONFIRMSELECTIONCHANGEDONLINEUPCLOSE_OFFSET))(this, onFinished);
		}

		::System::Boolean IsLineUpSelectionChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ISLINEUPSELECTIONCHANGED_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> CustomGetOtherTeamSelectIndex(::Class_2_1824EF69C8E376A3* avatarItemData)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_CUSTOMGETOTHERTEAMSELECTINDEX_OFFSET))(this, avatarItemData);
		}

		::System::String* CustomGetMultiIndexStr(::System::Int32 multiIndex, ::System::Int32 multiTeamIndex, ::Class_2_1824EF69C8E376A3* avatarItemData)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_CUSTOMGETMULTIINDEXSTR_OFFSET))(this, multiIndex, multiTeamIndex, avatarItemData);
		}

		::MoleMole::UIRoleSelectPageContext* OnGetRoleSelectContext(::System::Int32 selectIndex, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>* currentSelected)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONGETROLESELECTCONTEXT_OFFSET))(this, selectIndex, currentSelected);
		}

		::MoleMole::UIActivePropsWindowContext* OnPostGetBuddySelectContext(::MoleMole::UIActivePropsWindowContext* context)
		{
			return ((::MoleMole::UIActivePropsWindowContext*(*)(::PVOID, ::MoleMole::UIActivePropsWindowContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONPOSTGETBUDDYSELECTCONTEXT_OFFSET))(this, context);
		}

		::System::ValueTuple_2<::System::Boolean, ::System::String*> CheckBuddyCustomSelectStr(::System::Int32 buddyId)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::String*>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_CHECKBUDDYCUSTOMSELECTSTR_OFFSET))(this, buddyId);
		}

		::System::Void OnSelectionChanged(::Class_1_90F86E90A663D1B4* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90F86E90A663D1B4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONSELECTIONCHANGED_OFFSET))(this, data);
		}

		::System::Boolean IsLayerLineUpChanged(::System::Int32 layerIdx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ISLAYERLINEUPCHANGED_OFFSET))(this, layerIdx);
		}

		::System::Void ApplyBossChallengeTeamInfos(::System::Int32 zoneId, ::System::Action* onSuccess, ::System::Action* onFail)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_APPLYBOSSCHALLENGETEAMINFOS_OFFSET))(this, zoneId, onSuccess, onFail);
		}

		::System::Boolean IsLayerRolesLocked(::System::Int32 layerIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ISLAYERROLESLOCKED_OFFSET))(this, layerIndex);
		}

		::System::Void CalcLineupSelectionFromRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_CALCLINEUPSELECTIONFROMRECORD_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONUIINIT_B__17_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__17_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONUIINIT_B__17_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__17_2(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONUIINIT_B__17_2_OFFSET))(this, args);
		}

		::System::Void _InitRole_b__31_0(::System::Int32 widgetIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__INITROLE_B__31_0_OFFSET))(this, widgetIndex);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> _OnSelectionChanged_g__GetAvatarOccupIndex_50_0(::System::Int32 id)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONSELECTIONCHANGED_G__GETAVATAROCCUPINDEX_50_0_OFFSET))(this, id);
		}

		::System::Int32 _OnSelectionChanged_g__GetBuddyLayerIndex_50_1(::System::Int32 id)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONSELECTIONCHANGED_G__GETBUDDYLAYERINDEX_50_1_OFFSET))(this, id);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
