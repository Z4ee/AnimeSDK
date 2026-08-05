#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_EFA6AA5AA832852E;
class Class_2_08E43914789BE5F3;
class Class_2_48FC6C91D47A4882;
class Class_2_79AE422BA06F6D26_212;
class Class_3_36FF8167703D4259_1;
class Class_3_4666E61F66433B1E_1;
namespace MoleMole { class UIBabeltowerRecordRowWidgetController; }
namespace MoleMole { class UIBabeltowerTrickAvatarRowWidgetController; }
namespace MoleMole { class UIBabeltowerTrickLevelRowWidgetController; }
namespace MoleMole { class UIBabeltowerTrickScoreRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIDailyChallengeCardRowWidgetController; }
namespace MoleMole { class UIYorozuyaAbyssBangbooRowV3WidgetController; }
namespace MoleMole { class UIYorozuyaAbyssHeadRowV2WidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_CREATESCORE_OFFSET UNITYSDK_OFFSET(0x19A74080)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_GETTRICKSCORECONTROLLER_OFFSET UNITYSDK_OFFSET(0x19A75250)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_GETTRICKSCOREROWCONTROLLER_OFFSET UNITYSDK_OFFSET(0x19A749A0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19A72240)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_INITSIZE_OFFSET UNITYSDK_OFFSET(0x19A72840)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A72250)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A73130)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A722E0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_OPENMONSTER_OFFSET UNITYSDK_OFFSET(0x19A76EB0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHAVATARFIGHTSCORE_OFFSET UNITYSDK_OFFSET(0x19A75400)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHAVATAR_OFFSET UNITYSDK_OFFSET(0x19A778E0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHBUDDY_OFFSET UNITYSDK_OFFSET(0x19A77D50)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHBUFF_OFFSET UNITYSDK_OFFSET(0x19A73700)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHDURATION_OFFSET UNITYSDK_OFFSET(0x19A73970)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHMONSTER_OFFSET UNITYSDK_OFFSET(0x19A76910)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHRECORD_1_OFFSET UNITYSDK_OFFSET(0x19A77500)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHRECORD_OFFSET UNITYSDK_OFFSET(0x19A77160)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHSTATISTIC_OFFSET UNITYSDK_OFFSET(0x19A75AB0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHTRICKLEVELSCORE_OFFSET UNITYSDK_OFFSET(0x19A74B50)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHTRICKSCORE_OFFSET UNITYSDK_OFFSET(0x19A742F0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19A731A0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_SETFOLDSTATE_OFFSET UNITYSDK_OFFSET(0x19A72800)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_SHOWBESTRECORD_OFFSET UNITYSDK_OFFSET(0x19A774A0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_SHOWFASTRECORD_OFFSET UNITYSDK_OFFSET(0x19A77820)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_SHOWLATESTRECORD_OFFSET UNITYSDK_OFFSET(0x19A77880)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A77DC0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER__ONUIINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0x19A78140)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER__ONUIINIT_B__6_1_OFFSET UNITYSDK_OFFSET(0x19A78240)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER__ONUIINIT_B__6_2_OFFSET UNITYSDK_OFFSET(0x19A782A0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER__ONUIINIT_B__6_3_OFFSET UNITYSDK_OFFSET(0x19A78300)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER__ONUIINIT_B__6_4_OFFSET UNITYSDK_OFFSET(0x19A78360)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER__REFRESHMONSTER_B__18_0_OFFSET UNITYSDK_OFFSET(0x19A783B0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A783C0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A78450)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A78460)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerRecordPageController_TypeDefinitionIndex = 64743;

	class UIBabeltowerRecordPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_212* _view; // 0x318
		::System::Boolean isFold; // 0x320
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* scrollViewObjects; // 0x328
		::System::Int32 towerid; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>* cachedtrickScoreList; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>* trickScoreList; // 0x340
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>* scoreList; // 0x348
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>* cachedscoreList; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickLevelRowWidgetController*>* trickList; // 0x358
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickAvatarRowWidgetController*>* avatarList; // 0x360
		::MoleMole::UIYorozuyaAbyssBangbooRowV3WidgetController* bangbooCtrl; // 0x368
		::System::Collections::Generic::List_1<::MoleMole::UIDailyChallengeCardRowWidgetController*>* monsterList; // 0x370
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerRecordRowWidgetController*>* recordStastis; // 0x378
		::System::Collections::Generic::List_1<::MoleMole::UIYorozuyaAbyssHeadRowV2WidgetController*>* recordRoles; // 0x380
		::Class_3_36FF8167703D4259_1* curRecord; // 0x388
		::System::Collections::Generic::List_1<::Class_3_36FF8167703D4259_1*>* records; // 0x390
		::Class_2_08E43914789BE5F3* babelTowerModel; // 0x398
		::Class_1_EFA6AA5AA832852E* DataLogic; // 0x3A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetFoldState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_SETFOLDSTATE_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 towerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, towerID);
		}

		::System::Void RefreshBuff(::Class_3_4666E61F66433B1E_1* battleRecord)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4666E61F66433B1E_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHBUFF_OFFSET))(this, battleRecord);
		}

		::System::Void RefreshDuration(::Class_3_4666E61F66433B1E_1* battleRecord)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4666E61F66433B1E_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHDURATION_OFFSET))(this, battleRecord);
		}

		::Class_2_48FC6C91D47A4882* CreateScore(::Class_3_4666E61F66433B1E_1* battleRecord)
		{
			return ((::Class_2_48FC6C91D47A4882*(*)(::PVOID, ::Class_3_4666E61F66433B1E_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_CREATESCORE_OFFSET))(this, battleRecord);
		}

		::System::Void RefreshTrickScore(::Class_3_4666E61F66433B1E_1* battleRecord)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4666E61F66433B1E_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHTRICKSCORE_OFFSET))(this, battleRecord);
		}

		::System::Void InitSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_INITSIZE_OFFSET))(this);
		}

		::System::Void RefreshTrickLevelScore(::Class_3_4666E61F66433B1E_1* battleRecord)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4666E61F66433B1E_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHTRICKLEVELSCORE_OFFSET))(this, battleRecord);
		}

		::System::Void RefreshAvatarFightScore(::Class_3_4666E61F66433B1E_1* battleRecord)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4666E61F66433B1E_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHAVATARFIGHTSCORE_OFFSET))(this, battleRecord);
		}

		::System::Void RefreshStatistic(::Class_3_4666E61F66433B1E_1* battleRecord)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4666E61F66433B1E_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHSTATISTIC_OFFSET))(this, battleRecord);
		}

		::System::Void RefreshMonster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHMONSTER_OFFSET))(this);
		}

		::System::Void OpenMonster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_OPENMONSTER_OFFSET))(this);
		}

		::System::Void RefreshRecord(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHRECORD_OFFSET))(this, index);
		}

		::System::Void ShowBestRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_SHOWBESTRECORD_OFFSET))(this);
		}

		::System::Void ShowFastRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_SHOWFASTRECORD_OFFSET))(this);
		}

		::System::Void ShowLatestRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_SHOWLATESTRECORD_OFFSET))(this);
		}

		::System::Void RefreshAvatar(::Class_3_4666E61F66433B1E_1* battleRecord)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4666E61F66433B1E_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHAVATAR_OFFSET))(this, battleRecord);
		}

		::System::Void RefreshBuddy(::Class_3_4666E61F66433B1E_1* battleRecord)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4666E61F66433B1E_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHBUDDY_OFFSET))(this, battleRecord);
		}

		::System::Void RefreshRecord_1(::Class_3_4666E61F66433B1E_1* battleRecord)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4666E61F66433B1E_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_REFRESHRECORD_1_OFFSET))(this, battleRecord);
		}

		::MoleMole::UIBabeltowerTrickScoreRowWidgetController* GetTrickScoreController()
		{
			return ((::MoleMole::UIBabeltowerTrickScoreRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_GETTRICKSCORECONTROLLER_OFFSET))(this);
		}

		::MoleMole::UIBabeltowerTrickScoreRowWidgetController* GetTrickScoreRowController()
		{
			return ((::MoleMole::UIBabeltowerTrickScoreRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER_GETTRICKSCOREROWCONTROLLER_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER__ONUIINIT_B__6_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER__ONUIINIT_B__6_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER__ONUIINIT_B__6_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER__ONUIINIT_B__6_3_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER__ONUIINIT_B__6_4_OFFSET))(this);
		}

		::System::Void _RefreshMonster_b__18_0(::System::Int32 cardid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER__REFRESHMONSTER_B__18_0_OFFSET))(this, cardid);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
