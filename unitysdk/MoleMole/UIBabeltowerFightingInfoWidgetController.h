#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/Enum_3_1B538C1D42F00F85.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/MissionResult.h"
#include "unitysdk/MoleMole/UIBabeltowerFightingInfoWidgetController_BabeltowerSelectType.h"
#include "unitysdk/MoleMole/UIBabeltowerFightingInfoWidgetController___c__DisplayClass47_0.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_3437E8F8CEFA7AE1;
class Class_1_382E023B7281C548;
class Class_1_5DA2E7556103D5A3_94;
class Class_1_98DE5B0AA67D49FB;
class Class_1_C6A4DECEE09618C7;
class Class_1_EFA6AA5AA832852E;
class Class_2_08E43914789BE5F3;
class Class_2_1A39E1B51756BF41;
class Class_2_60638234271CCDB8_6;
class Class_3_025FF4981524A424_617;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace MoleMole { class UIGeneralBuffPanelWidgetController; }
namespace MoleMole { class UIGeneralRoleCardRowWidgetController_Context; }
namespace MoleMole { class UIHollowResultBossInfoRow02WidgetController; }
namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_AFTERREFRESHBUFF_OFFSET UNITYSDK_OFFSET(0x1A634610)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_CALCULATESELECTTYPE_OFFSET UNITYSDK_OFFSET(0x1A636BD0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_CANCELSCROLLVIEWSELECT_OFFSET UNITYSDK_OFFSET(0x1A638340)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_CHECKSAFEDELAY_OFFSET UNITYSDK_OFFSET(0x1A635750)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_CLICKBUDDY_OFFSET UNITYSDK_OFFSET(0x1A62FE90)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_CLICKROLE_OFFSET UNITYSDK_OFFSET(0x1A62FA40)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_EXCHANGEBTNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1A638020)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_GENERALROLECARDCLICK_OFFSET UNITYSDK_OFFSET(0x1A62ED80)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_GETAVATARSELECTTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1A639170)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_GETCURRENTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1A632000)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_GETREWARDINFODATALIST_OFFSET UNITYSDK_OFFSET(0x1A638080)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_GET_DATALOGIC_OFFSET UNITYSDK_OFFSET(0x1A62EA10)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_INITBUDDY_OFFSET UNITYSDK_OFFSET(0x1A635BC0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_INITPOOLDATA_OFFSET UNITYSDK_OFFSET(0x1A634650)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_INITREWARD_OFFSET UNITYSDK_OFFSET(0x1A634290)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONCARDSET_OFFSET UNITYSDK_OFFSET(0x1A630E50)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONCLEARINTERACT_OFFSET UNITYSDK_OFFSET(0x1A636ED0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A632390)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1A62EA30)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONGO_OFFSET UNITYSDK_OFFSET(0x1A635DA0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONMULTISELECTBUDDY_OFFSET UNITYSDK_OFFSET(0x1A637180)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONPOSTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1A6345D0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONPOSTSETROLECARDDATA_OFFSET UNITYSDK_OFFSET(0x1A637EF0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONREWARDINFOCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x1A638620)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONSELECTAVATAR_OFFSET UNITYSDK_OFFSET(0x1A637530)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A632420)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A62EC50)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A630030)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_OPENBANGBOO_OFFSET UNITYSDK_OFFSET(0x1A62F600)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_OPENBUFF_OFFSET UNITYSDK_OFFSET(0x1A630DB0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_OPENDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0x1A632140)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_OPENMONSTER_OFFSET UNITYSDK_OFFSET(0x1A631DD0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_OPENPOOLROLESELECT_OFFSET UNITYSDK_OFFSET(0x1A62EE40)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_OPENROLEDETAIL_OFFSET UNITYSDK_OFFSET(0x1A631440)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REALFLOORINDEXTOINDEX_OFFSET UNITYSDK_OFFSET(0x1A6320D0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REFRESHBOSS_OFFSET UNITYSDK_OFFSET(0x1A6329B0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REFRESHBUFFSTATE_OFFSET UNITYSDK_OFFSET(0x1A631040)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REFRESHBUFF_OFFSET UNITYSDK_OFFSET(0x1A633AA0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x1A633440)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REFRESHRANKING_OFFSET UNITYSDK_OFFSET(0x1A6357A0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REFRESHRESETBTNSTATE_OFFSET UNITYSDK_OFFSET(0x1A6325A0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1A6327F0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REQBABELTOWERBEGINFIGHT_OFFSET UNITYSDK_OFFSET(0x1A637090)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_RESETAVATAR_OFFSET UNITYSDK_OFFSET(0x1A6324A0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_RESETPOOL_OFFSET UNITYSDK_OFFSET(0x1A6324F0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_SETBEFOREENTERACTION_OFFSET UNITYSDK_OFFSET(0x1A6327A0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_SETBUFFSELECTBTNSTATE_OFFSET UNITYSDK_OFFSET(0x1A630C20)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_SETCARDSETBUFF_OFFSET UNITYSDK_OFFSET(0x1A630F00)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_SET_DATALOGIC_OFFSET UNITYSDK_OFFSET(0x1A62EA20)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_TRIGGERNEWBIE_OFFSET UNITYSDK_OFFSET(0x1A631170)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_UPDATEAVATARSELECTVIEW_OFFSET UNITYSDK_OFFSET(0x1A637E80)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_UPDATEFLOORINDEX_OFFSET UNITYSDK_OFFSET(0x1A631960)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_UPDATEPOOLAVARTAR_OFFSET UNITYSDK_OFFSET(0x1A634A40)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_UPDATEROOMRECOMMANDBYINDEX_OFFSET UNITYSDK_OFFSET(0x1A638DD0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_UPDATEROOMRECOMMAND_OFFSET UNITYSDK_OFFSET(0x1A633230)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_UPDATEROOMRESISTBYINDEX_OFFSET UNITYSDK_OFFSET(0x1A638A20)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_UPDATEROOMRESIST_OFFSET UNITYSDK_OFFSET(0x1A633020)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A630BB0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6391E0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER__ONGO_OFFSET UNITYSDK_OFFSET(0x1A6365D0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER__ONUIINIT_B__19_0_OFFSET UNITYSDK_OFFSET(0x1A6393E0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER__ONUIOPEN_B__21_0_OFFSET UNITYSDK_OFFSET(0x1A639460)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER__REFRESHRANKING_G__REFRESHRANKIMAGE_47_0_OFFSET UNITYSDK_OFFSET(0x1A635AE0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER__UPDATEBOSSIMAGE_OFFSET UNITYSDK_OFFSET(0x1A6389A0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A639880)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1A6399A0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A639A90)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A639910)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A639B20)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER___ONGO_B__51_0_OFFSET UNITYSDK_OFFSET(0x1A639610)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerFightingInfoWidgetController_TypeDefinitionIndex = 40680;

	class UIBabeltowerFightingInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 BUDDY_COUNT = 0x3; // 0x0
		::System::Boolean DirectOpen; // 0x2C0
		::Class_2_60638234271CCDB8_6* _view; // 0x2C8
		::Class_2_08E43914789BE5F3* _babelTowerModel; // 0x2D0
		::Enum_3_1B538C1D42F00F85 state; // 0x2D8
		::Class_1_C6A4DECEE09618C7* towerData; // 0x2E0
		::System::Int32 selectBuddy; // 0x2E8
		::System::Collections::Generic::HashSet_1<::System::Int32>* emptyIndex; // 0x2F0
		::System::Collections::Generic::List_1<::System::Int32>* avatarIndex; // 0x2F8
		::System::Collections::Generic::List_1<::System::Int32>* buddyIndex; // 0x300
		::Class_1_382E023B7281C548* SelectData; // 0x308
		::MoleMole::UIGeneralBtn03WidgetController* ResetBtn; // 0x310
		::System::Int32 curSelectBuff; // 0x318
		::System::Single animTimer; // 0x31C
		::Class_1_EFA6AA5AA832852E* _DataLogic_k__BackingField; // 0x320
		::System::Boolean _isListeningClear; // 0x328
		::System::Boolean isSending; // 0x329
		::System::Action* beforeAction; // 0x330
		::System::UInt32 currentFloor; // 0x338
		::System::Int32 towerid; // 0x33C
		::MoleMole::UIBabeltowerFightingInfoWidgetController_BabeltowerSelectType curType; // 0x340
		::MoleMole::Project::Config::BabelFloorInfoTemplateExt* floorTemplate; // 0x348
		::Il2CppArray<::System::Int32>* curAvatarList; // 0x350
		::System::Collections::Generic::List_1<::System::UInt32>* curPoolAvatarID; // 0x358
		::System::Collections::Generic::List_1<::System::UInt32>* originalPoolAvatarID; // 0x360
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralRoleCardRowWidgetController_Context*>* curPoolAvatarDatas; // 0x368
		::Il2CppArray<::System::UInt32>* buddyLists; // 0x370
		::System::Collections::Generic::List_1<::System::UInt32>* curSelectAvatarID; // 0x378
		::Class_1_98DE5B0AA67D49FB* _buffShowConfig; // 0x380
		::MoleMole::UIGeneralBuffPanelWidgetController* _buffController; // 0x388
		::MoleMole::UIHollowResultBossInfoRow02WidgetController* monster1; // 0x390
		::MoleMole::UIHollowResultBossInfoRow02WidgetController* monster2; // 0x398

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_1_EFA6AA5AA832852E* get_DataLogic()
		{
			return ((::Class_1_EFA6AA5AA832852E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_GET_DATALOGIC_OFFSET))(this);
		}

		::System::Void set_DataLogic(::Class_1_EFA6AA5AA832852E* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EFA6AA5AA832852E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_SET_DATALOGIC_OFFSET))(this, value);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void GeneralRoleCardClick(::MoleMole::UIGeneralRoleCardRowWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralRoleCardRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_GENERALROLECARDCLICK_OFFSET))(this, context);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void SetBuffSelectBtnState(::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_SETBUFFSELECTBTNSTATE_OFFSET))(this, v);
		}

		::System::Void OpenBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_OPENBUFF_OFFSET))(this);
		}

		::System::Void OnCardSet(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONCARDSET_OFFSET))(this, args);
		}

		::System::Void RefreshBuffState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REFRESHBUFFSTATE_OFFSET))(this);
		}

		::System::Void SetCardSetBuff(::System::Int32 cardid, ::System::Int32 cardset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_SETCARDSETBUFF_OFFSET))(this, cardid, cardset);
		}

		::System::Void TriggerNewbie(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_TRIGGERNEWBIE_OFFSET))(this, id);
		}

		::System::Void OpenRoleDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_OPENROLEDETAIL_OFFSET))(this);
		}

		::System::Void UpdateFloorIndex(::System::UInt32 realFloor)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_UPDATEFLOORINDEX_OFFSET))(this, realFloor);
		}

		::System::Void OpenMonster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_OPENMONSTER_OFFSET))(this);
		}

		::MoleMole::Project::Config::BabelFloorInfoTemplateExt* GetCurrentTemplate()
		{
			return ((::MoleMole::Project::Config::BabelFloorInfoTemplateExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_GETCURRENTTEMPLATE_OFFSET))(this);
		}

		::System::Void OpenDetailDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_OPENDETAILDIALOG_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ResetAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_RESETAVATAR_OFFSET))(this);
		}

		::System::Void RefreshResetBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REFRESHRESETBTNSTATE_OFFSET))(this);
		}

		::System::Void SetBeforeEnterAction(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_SETBEFOREENTERACTION_OFFSET))(this, callback);
		}

		::System::UInt32 RealFloorIndexToIndex(::System::UInt32 realIndex)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REALFLOORINDEXTOINDEX_OFFSET))(this, realIndex);
		}

		::System::Void RefreshView(::System::Int32 towerid, ::System::UInt32 currentFloor, ::Class_1_C6A4DECEE09618C7* data, ::Enum_3_1B538C1D42F00F85 state, ::System::Int32 selectBuf)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::Class_1_C6A4DECEE09618C7*, ::Enum_3_1B538C1D42F00F85, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, towerid, currentFloor, data, state, selectBuf);
		}

		::System::Void OnPostRefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONPOSTREFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REFRESHBUFF_OFFSET))(this);
		}

		::System::Void AfterRefreshBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_AFTERREFRESHBUFF_OFFSET))(this);
		}

		::System::Void InitPoolData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_INITPOOLDATA_OFFSET))(this);
		}

		::System::Void ResetPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_RESETPOOL_OFFSET))(this);
		}

		::System::Boolean CheckSafeDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_CHECKSAFEDELAY_OFFSET))(this);
		}

		::System::Void RefreshRanking(::MoleMole::Project::Config::BabelFloorInfoTemplateExt* template_)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Project::Config::BabelFloorInfoTemplateExt*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REFRESHRANKING_OFFSET))(this, template_);
		}

		::System::Void InitBuddy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_INITBUDDY_OFFSET))(this);
		}

		::System::Void OnGo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONGO_OFFSET))(this);
		}

		::MoleMole::UIBabeltowerFightingInfoWidgetController_BabeltowerSelectType CalculateSelectType()
		{
			return ((::MoleMole::UIBabeltowerFightingInfoWidgetController_BabeltowerSelectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_CALCULATESELECTTYPE_OFFSET))(this);
		}

		::System::Void _OnGo(::System::Collections::Generic::List_1<::System::Int32>* selectAvatars)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER__ONGO_OFFSET))(this, selectAvatars);
		}

		::System::Void OnClearInteract(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONCLEARINTERACT_OFFSET))(this, args);
		}

		::System::Void ReqBabelTowerBeginFight(::System::Int32 towerid, ::System::UInt32 floorIndex, ::System::Int32 buddy, ::System::Collections::Generic::List_1<::System::Int32>* selectAvatars, ::System::Collections::Generic::List_1<::System::Int32>* poolAvatars, ::System::Collections::Generic::List_1<::System::Int32>* buddyList, ::System::Boolean isContinue, ::System::Int32 selectBuf, ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_617*>* overrideCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean, ::System::Int32, ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_617*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REQBABELTOWERBEGINFIGHT_OFFSET))(this, towerid, floorIndex, buddy, selectAvatars, poolAvatars, buddyList, isContinue, selectBuf, overrideCallback);
		}

		::System::Void OnMultiSelectBuddy(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONMULTISELECTBUDDY_OFFSET))(this, args);
		}

		::System::Void OnSelectAvatar(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONSELECTAVATAR_OFFSET))(this, args);
		}

		::System::Void UpdateAvatarSelectView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_UPDATEAVATARSELECTVIEW_OFFSET))(this);
		}

		::System::Void OnPostSetRoleCardData(::MoleMole::UIGeneralRoleCardRowWidgetController_Context* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralRoleCardRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONPOSTSETROLECARDDATA_OFFSET))(this, data);
		}

		::System::Void UpdatePoolAvartar(::System::Collections::Generic::IList_1<::System::UInt32>* avatarids)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_UPDATEPOOLAVARTAR_OFFSET))(this, avatarids);
		}

		::System::Boolean ExchangeBtnInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_EXCHANGEBTNINTERACTABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_3437E8F8CEFA7AE1*>* GetRewardInfoDataList(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* tempList)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_3437E8F8CEFA7AE1*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_GETREWARDINFODATALIST_OFFSET))(this, tempList);
		}

		::System::Void CancelScrollViewSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_CANCELSCROLLVIEWSELECT_OFFSET))(this);
		}

		::System::Void OnRewardInfoClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_ONREWARDINFOCLICKHANDLE_OFFSET))(this);
		}

		::System::Void InitReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_INITREWARD_OFFSET))(this);
		}

		::System::Void OpenBangboo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_OPENBANGBOO_OFFSET))(this);
		}

		::System::Void ClickBuddy(::MoleMole::UIGeneralRoleCardRowWidgetController_Context* context, ::System::Int32 buddyid)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralRoleCardRowWidgetController_Context*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_CLICKBUDDY_OFFSET))(this, context, buddyid);
		}

		::System::Void ClickRole(::MoleMole::UIGeneralRoleCardRowWidgetController_Context* context, ::System::Int32 avatarid)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralRoleCardRowWidgetController_Context*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_CLICKROLE_OFFSET))(this, context, avatarid);
		}

		::System::Void OpenPoolRoleSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_OPENPOOLROLESELECT_OFFSET))(this);
		}

		::System::Void RefreshBoss(::MoleMole::Project::Config::BabelFloorInfoTemplateExt* template_)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Project::Config::BabelFloorInfoTemplateExt*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REFRESHBOSS_OFFSET))(this, template_);
		}

		::System::Void _UpdateBossImage(::Class_1_5DA2E7556103D5A3_94* cardConfigTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_94*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER__UPDATEBOSSIMAGE_OFFSET))(this, cardConfigTemplate);
		}

		::System::Void UpdateRoomResist(::MoleMole::Project::Config::BabelFloorInfoTemplateExt* template_)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Project::Config::BabelFloorInfoTemplateExt*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_UPDATEROOMRESIST_OFFSET))(this, template_);
		}

		::System::Void UpdateRoomResistByIndex(::System::Int32 index, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* resists)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_UPDATEROOMRESISTBYINDEX_OFFSET))(this, index, resists);
		}

		::System::Void RefreshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this);
		}

		::System::Void UpdateRoomRecommand(::MoleMole::Project::Config::BabelFloorInfoTemplateExt* template_)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Project::Config::BabelFloorInfoTemplateExt*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_UPDATEROOMRECOMMAND_OFFSET))(this, template_);
		}

		::System::Void UpdateRoomRecommandByIndex(::System::Int32 index, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* resists)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_UPDATEROOMRECOMMANDBYINDEX_OFFSET))(this, index, resists);
		}

		::System::Int32 GetAvatarSelectTotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER_GETAVATARSELECTTOTALCOUNT_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__19_0(::Struct_2_575273D27F02957E binder)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER__ONUIINIT_B__19_0_OFFSET))(this, binder);
		}

		::System::Void _OnUIOpen_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER__ONUIOPEN_B__21_0_OFFSET))(this);
		}

		static ::System::Void _RefreshRanking_g__RefreshRankImage_47_0(::Class_2_1A39E1B51756BF41* image, ::MoleMole::MissionResult result, ::MoleMole::UIBabeltowerFightingInfoWidgetController___c__DisplayClass47_0& a3)
		{
			return ((::System::Void(*)(::Class_2_1A39E1B51756BF41*, ::MoleMole::MissionResult, ::MoleMole::UIBabeltowerFightingInfoWidgetController___c__DisplayClass47_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER__REFRESHRANKING_G__REFRESHRANKIMAGE_47_0_OFFSET))(image, result, a3);
		}

		::System::Void __OnGo_b__51_0(::System::Boolean s, ::Class_3_025FF4981524A424_617* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_617*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER___ONGO_B__51_0_OFFSET))(this, s, rsp);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
