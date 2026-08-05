#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/UIBossChallengePageController_RoomInfoData.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_5DA2E7556103D5A3_178;
class Class_1_5DA2E7556103D5A3_218;
class Class_1_5DA2E7556103D5A3_344;
class Class_1_5DA2E7556103D5A3_446;
class Class_1_90F86E90A663D1B4;
class Class_1_A0B1A57C6DC75B0F;
class Class_1_E081FCEC8F87505A;
class Class_2_1824EF69C8E376A3;
class Class_2_79AE422BA06F6D26_243;
class Class_2_79AE422BA06F6D26_243_Class_2_FA228B66D064C2D1;
class Class_2_F8EB4D9464ADCCA1;
class Class_3_3BE9E985CC6DA44B;
class Class_3_F118437738B4CCD5_2;
namespace MoleMole { class QuickEditContext; }
namespace MoleMole { class UIActivePropsWindowContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_APPLYBOSSCHALLENGETEAMINFOS_OFFSET UNITYSDK_OFFSET(0x18534A80)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_CALCLINEUPSELECTIONFROMRECORD_OFFSET UNITYSDK_OFFSET(0x185334B0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_CHECKBUDDYCUSTOMSELECTSTR_OFFSET UNITYSDK_OFFSET(0x185362F0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_CUSTOMGETMULTIINDEXSTR_OFFSET UNITYSDK_OFFSET(0x18535B20)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_CUSTOMGETOTHERTEAMSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18535920)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_GETRESISTLIST_OFFSET UNITYSDK_OFFSET(0x18531FA0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_GETSHOWINGLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x18533B60)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_GETWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0x18531C70)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_GET__LAYERRECORD_OFFSET UNITYSDK_OFFSET(0x1852F640)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_INITENDTIMER_OFFSET UNITYSDK_OFFSET(0x18532F40)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_INITROLE_OFFSET UNITYSDK_OFFSET(0x1852FF70)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ISLAYERLINEUPCHANGED_OFFSET UNITYSDK_OFFSET(0x18535650)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ISLAYERROLESLOCKED_OFFSET UNITYSDK_OFFSET(0x18537350)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ISLINEUPSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x18534920)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18531030)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONGETROLESELECTCONTEXT_OFFSET UNITYSDK_OFFSET(0x18535CB0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x185312E0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONPOSTGETBUDDYSELECTCONTEXT_OFFSET UNITYSDK_OFFSET(0x18536250)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONRESETSUCCESS_OFFSET UNITYSDK_OFFSET(0x18535120)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONSELECTCHECKHANDLE_OFFSET UNITYSDK_OFFSET(0x18534410)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x18536510)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18531140)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x185310C0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1852F740)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18530170)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_OPENBUFFDIALOG_OFFSET UNITYSDK_OFFSET(0x18535170)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_OPENSELECTROLEPAGE_OFFSET UNITYSDK_OFFSET(0x18533BB0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_REALONBEGINBATTLE_OFFSET UNITYSDK_OFFSET(0x18534630)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_RECONFIRMSELECTIONCHANGEDONLINEUPCLOSE_OFFSET UNITYSDK_OFFSET(0x185353B0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_RECORDCLICKMONSTERDETAIL_OFFSET UNITYSDK_OFFSET(0x18531470)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_REFRESHROLES_OFFSET UNITYSDK_OFFSET(0x185322F0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_REFRESHSCORES_OFFSET UNITYSDK_OFFSET(0x18531770)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_REFRESHSELECTEDBUFF_OFFSET UNITYSDK_OFFSET(0x18532800)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x185304E0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SENDSELECTBUFFFORLAYER_OFFSET UNITYSDK_OFFSET(0x18537060)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SETQUICKEDITORCONTEXTHANDLE_OFFSET UNITYSDK_OFFSET(0x18534560)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SHOWELEMENT_OFFSET UNITYSDK_OFFSET(0x18533080)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SHOWRESIST_OFFSET UNITYSDK_OFFSET(0x185321C0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SHOWTARGETITEM_OFFSET UNITYSDK_OFFSET(0x18532A90)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SHOWWEEKNESS_OFFSET UNITYSDK_OFFSET(0x18531E70)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x185374A0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__INITROLE_B__30_0_OFFSET UNITYSDK_OFFSET(0x18537950)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONSELECTIONCHANGED_G__GETAVATAROCCUPINDEX_48_0_OFFSET UNITYSDK_OFFSET(0x18536D80)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONSELECTIONCHANGED_G__GETBUDDYLAYERINDEX_48_1_OFFSET UNITYSDK_OFFSET(0x18536F10)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONUIINIT_B__14_0_OFFSET UNITYSDK_OFFSET(0x18537600)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONUIINIT_B__14_1_OFFSET UNITYSDK_OFFSET(0x18537610)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONUIINIT_B__14_2_OFFSET UNITYSDK_OFFSET(0x18537800)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18537960)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x185379F0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18537A80)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18537B20)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18537BB0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18537C40)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeInfoWidgetController_TypeDefinitionIndex = 80231;

	class UIBossChallengeInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 MAX_ROLE_COUNT = 0x3; // 0x0
		::Class_2_79AE422BA06F6D26_243* _view; // 0x2C0
		::MoleMole::UIBossChallengePageController_RoomInfoData _roomData; // 0x2C8
		::Class_1_5DA2E7556103D5A3_218* _entranceInfoTemplate; // 0x2D8
		::Class_1_5DA2E7556103D5A3_446* _zoneTemplate; // 0x2E0
		::Class_1_5DA2E7556103D5A3_344* _layerTemplate; // 0x2E8
		::Class_1_5DA2E7556103D5A3_178* _roomTemplate; // 0x2F0
		::Class_2_F8EB4D9464ADCCA1* _bossTemplate; // 0x2F8
		::System::Int32 _selectedBuffID; // 0x300
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>* _generalHeadCtrlers; // 0x308
		::System::Action_1<::System::Boolean>* _ctrlerVisibleChangedCb; // 0x310
		::System::Boolean _isSelectBuff; // 0x318
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_F118437738B4CCD5_2*>* _lineupCacheDataForLayers; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_3_3BE9E985CC6DA44B* get__layerRecord()
		{
			return ((::Class_3_3BE9E985CC6DA44B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_GET__LAYERRECORD_OFFSET))(this);
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

		::System::Void RecordClickMonsterDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_RECORDCLICKMONSTERDETAIL_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* GetWeaknessList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_GETWEAKNESSLIST_OFFSET))(this);
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

		::System::Void ShowTargetItem(::System::Int32 starNum, ::Class_2_79AE422BA06F6D26_243_Class_2_FA228B66D064C2D1* tgtItemView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_79AE422BA06F6D26_243_Class_2_FA228B66D064C2D1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SHOWTARGETITEM_OFFSET))(this, starNum, tgtItemView);
		}

		::System::Void InitEndTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_INITENDTIMER_OFFSET))(this);
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

		::System::Void RealOnBeginBattle(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_REALONBEGINBATTLE_OFFSET))(this, data);
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

		::System::Void SendSelectBuffForLayer(::System::Int32 zoneId, ::System::Int32 layerIndex, ::System::Int32 buffId, ::System::Action* onSuccess, ::System::Action* onFail)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_SENDSELECTBUFFFORLAYER_OFFSET))(this, zoneId, layerIndex, buffId, onSuccess, onFail);
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

		::System::Void _OnUIInit_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONUIINIT_B__14_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__14_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONUIINIT_B__14_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__14_2(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONUIINIT_B__14_2_OFFSET))(this, args);
		}

		::System::Void _InitRole_b__30_0(::System::Int32 widgetIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__INITROLE_B__30_0_OFFSET))(this, widgetIndex);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> _OnSelectionChanged_g__GetAvatarOccupIndex_48_0(::System::Int32 id)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONSELECTIONCHANGED_G__GETAVATAROCCUPINDEX_48_0_OFFSET))(this, id);
		}

		::System::Int32 _OnSelectionChanged_g__GetBuddyLayerIndex_48_1(::System::Int32 id)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER__ONSELECTIONCHANGED_G__GETBUDDYLAYERINDEX_48_1_OFFSET))(this, id);
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
