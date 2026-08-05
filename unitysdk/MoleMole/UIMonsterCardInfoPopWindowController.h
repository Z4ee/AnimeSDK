#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_5DA2E7556103D5A3_94;
class Class_2_053D0CC92E4E0F28;
class Class_2_79F6D62CE30E3F8E_19;
class Class_2_F8EB4D9464ADCCA1;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalZone_Common_HadalRoomContext; }
namespace MoleMole { class UIHadalZone_MonsterCardInfo_Row_V2_WidgetController; }
namespace MoleMole { class UIMonsterCardInfoPopWindowController_MonsterInfoExt; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_FILLQUESTIDTOEXTINFO_OFFSET UNITYSDK_OFFSET(0x17E03FD0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GETBOSSLEVEL_OFFSET UNITYSDK_OFFSET(0x17E04B30)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GETDESCLABELTEXT_OFFSET UNITYSDK_OFFSET(0x17E054C0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GETMONSTERRESISTANCE_OFFSET UNITYSDK_OFFSET(0x17E04BD0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GETMONSTERWEAKNESS_OFFSET UNITYSDK_OFFSET(0x17E04B70)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x17E03480)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x17E027E0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_NEEDSHOWCAMP_OFFSET UNITYSDK_OFFSET(0x17E036B0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_NEEDSHOWMONSTERTYPE_OFFSET UNITYSDK_OFFSET(0x17E036C0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_NEEDSHOWTARGET_OFFSET UNITYSDK_OFFSET(0x17E034E0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_WAVECOUNT_OFFSET UNITYSDK_OFFSET(0x17E03E70)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17E027F0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ISMONSTERLOCKED_OFFSET UNITYSDK_OFFSET(0x17E03720)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ISMONSTERSHOWDESC_OFFSET UNITYSDK_OFFSET(0x17E03500)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x17E05140)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E03380)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONSCROLLVIEWSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0x17E04130)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E03410)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E02800)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E02A10)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_OUTPUTDEBUGSTRING_OFFSET UNITYSDK_OFFSET(0x17E036D0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_REFRESHEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0x17E03E80)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_REFRESHROOTSSTATE_OFFSET UNITYSDK_OFFSET(0x17E031D0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_REFRESHWAVECOUNT_OFFSET UNITYSDK_OFFSET(0x17E03D30)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_SETMONSTERDESC_OFFSET UNITYSDK_OFFSET(0x17E03AF0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_SETMONSTERLOCKED_OFFSET UNITYSDK_OFFSET(0x17E038D0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_SETMONSTERPLAYDESCLABEL_OFFSET UNITYSDK_OFFSET(0x17E04C30)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_UPDATEBOSSCFGLIST_OFFSET UNITYSDK_OFFSET(0x17E03CF0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_UPDATECAMP_OFFSET UNITYSDK_OFFSET(0x17E05BD0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_UPDATETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x17E05D20)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_UPDATETYPE_OFFSET UNITYSDK_OFFSET(0x17E05C80)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__BINDBTNS_OFFSET UNITYSDK_OFFSET(0x17E02B10)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__CLEARPATCH_OFFSET UNITYSDK_OFFSET(0x17E05530)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E064A0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__GETONEWEAK_OFFSET UNITYSDK_OFFSET(0x17E05DA0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__ONUIINIT_B__7_0_OFFSET UNITYSDK_OFFSET(0x17E06580)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__UPDATEBOSSCARDS_OFFSET UNITYSDK_OFFSET(0x17E02C30)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__UPDATEELEMENTPROP_OFFSET UNITYSDK_OFFSET(0x17E05690)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__UPDATEELEPROPTEXT_OFFSET UNITYSDK_OFFSET(0x17E05F90)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__UPDATESELECTCARDINFO_OFFSET UNITYSDK_OFFSET(0x17E045A0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E06610)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E066A0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E066B0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E066C0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BINDBTNS_B__11_0_OFFSET UNITYSDK_OFFSET(0x17E06600)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardInfoPopWindowController_TypeDefinitionIndex = 66170;

	class UIMonsterCardInfoPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* CARD_WEAK_ICON_PATTERN; // 0x0
		// static const ::System::String* CARD_WEAK_TEXT_PATTERN; // 0x0
		// static const ::System::String* CARD_KEY_TEXT_PATTERN; // 0x0
		::Class_2_79F6D62CE30E3F8E_19* _view; // 0x318
		::MoleMole::UIHadalZone_Common_HadalRoomContext* _roomCtx; // 0x320
		::System::Collections::Generic::List_1<::Class_2_F8EB4D9464ADCCA1*>* _monsterConfigList; // 0x328
		::System::Collections::Generic::List_1<::System::String*>* m_targetPositionList; // 0x330
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIMonsterCardInfoPopWindowController_MonsterInfoExt*>* m_monsterExtInfoDict; // 0x338
		::System::Int32 m_questID; // 0x340
		::MoleMole::MonoGamepadNavigatableList* m_naviList; // 0x348
		::System::Int32 m_curMonsterID; // 0x350
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _cacheEleList; // 0x358
		::System::Int32 _curEleIndex; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _BindBtns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__BINDBTNS_OFFSET))(this);
		}

		::System::Void RefreshRootsState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_REFRESHROOTSSTATE_OFFSET))(this);
		}

		::System::Boolean get_NeedShowTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_NEEDSHOWTARGET_OFFSET))(this);
		}

		::System::Boolean get_NeedShowCamp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_NEEDSHOWCAMP_OFFSET))(this);
		}

		::System::Boolean get_NeedShowMonsterType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_NEEDSHOWMONSTERTYPE_OFFSET))(this);
		}

		::System::Void OutputDebugString(::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_OUTPUTDEBUGSTRING_OFFSET))(this, prefix);
		}

		::System::Boolean IsMonsterLocked(::System::Int32 monsterCardID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ISMONSTERLOCKED_OFFSET))(this, monsterCardID);
		}

		::System::Boolean IsMonsterShowDesc(::System::Int32 monsterID, ::System::String*& desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ISMONSTERSHOWDESC_OFFSET))(this, monsterID, desc);
		}

		::System::Void SetMonsterLocked(::System::Int32 monsterID, ::System::Boolean isLocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_SETMONSTERLOCKED_OFFSET))(this, monsterID, isLocked);
		}

		::System::Void SetMonsterDesc(::System::Int32 monsterID, ::System::String* desc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_SETMONSTERDESC_OFFSET))(this, monsterID, desc);
		}

		::System::Void UpdateBossCfgList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_UPDATEBOSSCFGLIST_OFFSET))(this);
		}

		::System::Void RefreshWaveCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_REFRESHWAVECOUNT_OFFSET))(this);
		}

		::System::Int32 get_WaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_WAVECOUNT_OFFSET))(this);
		}

		::System::Void _UpdateBossCards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__UPDATEBOSSCARDS_OFFSET))(this);
		}

		::System::Void OnScrollViewSelectHandle(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONSCROLLVIEWSELECTHANDLE_OFFSET))(this, index);
		}

		::System::Void FillQuestIDToExtInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_FILLQUESTIDTOEXTINFO_OFFSET))(this);
		}

		::System::Boolean get_Empty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GET_EMPTY_OFFSET))(this);
		}

		::System::Void RefreshEmptyState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_REFRESHEMPTYSTATE_OFFSET))(this);
		}

		::System::Int32 GetBossLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GETBOSSLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* GetMonsterWeakness(::Class_2_F8EB4D9464ADCCA1* monsterConfig)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID, ::Class_2_F8EB4D9464ADCCA1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GETMONSTERWEAKNESS_OFFSET))(this, monsterConfig);
		}

		::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* GetMonsterResistance(::Class_2_F8EB4D9464ADCCA1* monsterConfig)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID, ::Class_2_F8EB4D9464ADCCA1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GETMONSTERRESISTANCE_OFFSET))(this, monsterConfig);
		}

		::System::Void SetMonsterPlayDescLabel(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_SETMONSTERPLAYDESCLABEL_OFFSET))(this, key);
		}

		::System::String* GetDescLabelText(::Class_2_053D0CC92E4E0F28* cardCfg, ::System::Boolean isLocked)
		{
			return ((::System::String*(*)(::PVOID, ::Class_2_053D0CC92E4E0F28*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_GETDESCLABELTEXT_OFFSET))(this, cardCfg, isLocked);
		}

		::System::Void _UpdateSelectCardInfo(::MoleMole::UIHadalZone_MonsterCardInfo_Row_V2_WidgetController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHadalZone_MonsterCardInfo_Row_V2_WidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__UPDATESELECTCARDINFO_OFFSET))(this, item);
		}

		::System::Void UpdateCamp(::Class_1_5DA2E7556103D5A3_94* cfg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_94*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_UPDATECAMP_OFFSET))(this, cfg);
		}

		::System::Void UpdateType(::Class_1_5DA2E7556103D5A3_94* cfg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_94*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_UPDATETYPE_OFFSET))(this, cfg);
		}

		::System::Void UpdateTargetPosition(::System::String* descKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_UPDATETARGETPOSITION_OFFSET))(this, descKey);
		}

		::System::Void _ClearPatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__CLEARPATCH_OFFSET))(this);
		}

		::System::Void _UpdateElementProp(::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* eleIds, ::System::Boolean isWeak, ::System::Boolean needEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__UPDATEELEMENTPROP_OFFSET))(this, eleIds, isWeak, needEmpty);
		}

		::System::Void _UpdateElePropText(::MoleMole::Config::DamageElementType eleID, ::System::Boolean isWeak)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__UPDATEELEPROPTEXT_OFFSET))(this, eleID, isWeak);
		}

		::UnityEngine::GameObject* _GetOneWeak()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__GETONEWEAK_OFFSET))(this);
		}

		::System::Void OnClickTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_ONCLICKTAB_OFFSET))(this, index);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__7_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER__ONUIINIT_B__7_0_OFFSET))(this, reference);
		}

		::System::Void __BindBtns_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BINDBTNS_B__11_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
