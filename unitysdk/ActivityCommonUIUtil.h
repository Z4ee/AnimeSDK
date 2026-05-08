#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ActivityCommonUIUtil_HeadRowType.h"
#include "unitysdk/ActivityCommonUIUtil_LevelChallengeStyle.h"
#include "unitysdk/Enum_3_A40824779333D5B2.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
class Class_2_5E653D9F744DDC7F;
class Class_2_904DC4291C492A08;
class Class_2_F8EB4D9464ADCCA1;
namespace MoleMole { class UIActivitySelectLevelDoubleIconWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace MoleMole { class UIWidgetController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ACTIVITYCOMMONUIUTIL_CREATEACTIVITYFIGHTUILEVELGROUP_OFFSET UNITYSDK_OFFSET(0x1462F650)
#define ACTIVITYCOMMONUIUTIL_CREATEHEADROW_OFFSET UNITYSDK_OFFSET(0x1462DAB0)
#define ACTIVITYCOMMONUIUTIL_CREATELEVELCHALLENGE2_OFFSET UNITYSDK_OFFSET(0x1462D700)
#define ACTIVITYCOMMONUIUTIL_CREATELEVELCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1462D520)
#define ACTIVITYCOMMONUIUTIL_CREATEQUESTREWARD_OFFSET UNITYSDK_OFFSET(0x1462D210)
#define ACTIVITYCOMMONUIUTIL_GETBIGSCENETEAMDATABINDDATAS_OFFSET UNITYSDK_OFFSET(0x14630320)
#define ACTIVITYCOMMONUIUTIL_GETCHALLENGEFINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1462E940)
#define ACTIVITYCOMMONUIUTIL_GETCHALLENGERESULTLEVELICON_OFFSET UNITYSDK_OFFSET(0x1462E800)
#define ACTIVITYCOMMONUIUTIL_GETGROUPCHALLENGEPREVIEWREWARD_OFFSET UNITYSDK_OFFSET(0x1462FA50)
#define ACTIVITYCOMMONUIUTIL_GETGROUPMONSTERCONFIGS_OFFSET UNITYSDK_OFFSET(0x1462F770)
#define ACTIVITYCOMMONUIUTIL_GETQUESTFIRSTREWARD_OFFSET UNITYSDK_OFFSET(0x1462CF60)
#define ACTIVITYCOMMONUIUTIL_GETSELECTICONTYPE_OFFSET UNITYSDK_OFFSET(0x1462E340)
#define ACTIVITYCOMMONUIUTIL_OPENGOAVATARACTIVITYSTORYINFOPOP_OFFSET UNITYSDK_OFFSET(0x1462EFB0)
#define ACTIVITYCOMMONUIUTIL_OPENMAINBATTLEPARTNERINFOPOP_OFFSET UNITYSDK_OFFSET(0x1462EB50)
#define ACTIVITYCOMMONUIUTIL_OPENSELECTICONWIDGET_DOUBLEICON_OFFSET UNITYSDK_OFFSET(0x1462D9D0)
#define ACTIVITYCOMMONUIUTIL_SHOWPERIODTIMETIPS_OFFSET UNITYSDK_OFFSET(0x1462E5B0)
#define ACTIVITYCOMMONUIUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x14630770)
#define ACTIVITYCOMMONUIUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x14630760)

inline static constexpr unsigned int ActivityCommonUIUtil_TypeDefinitionIndex = 73000;

class ActivityCommonUIUtil : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_MaxAvatarTeamCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ActivityCommonUIUtil_TypeDefinitionIndex)->GetStaticField(0x10B10);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* GetQuestFirstReward(::System::Int32 quest)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_GETQUESTFIRSTREWARD_OFFSET))(quest);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* CreateQuestReward(::System::Int32 quest, ::UnityEngine::Transform* parent, ::MoleMole::UIBaseController* parentWidget, ::System::Boolean isShowNum)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>*(*)(::System::Int32, ::UnityEngine::Transform*, ::MoleMole::UIBaseController*, ::System::Boolean))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_CREATEQUESTREWARD_OFFSET))(quest, parent, parentWidget, isShowNum);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* CreateLevelChallenge(::UnityEngine::Transform* parent, ::MoleMole::UIBaseController* parentWidget, ::System::Int32 QuestID, ::ActivityCommonUIUtil_LevelChallengeStyle style)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*(*)(::UnityEngine::Transform*, ::MoleMole::UIBaseController*, ::System::Int32, ::ActivityCommonUIUtil_LevelChallengeStyle))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_CREATELEVELCHALLENGE_OFFSET))(parent, parentWidget, QuestID, style);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* CreateLevelChallenge2(::UnityEngine::Transform* parent, ::MoleMole::UIBaseController* parentWidget, ::System::Int32 QuestID, ::ActivityCommonUIUtil_LevelChallengeStyle style)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*(*)(::UnityEngine::Transform*, ::MoleMole::UIBaseController*, ::System::Int32, ::ActivityCommonUIUtil_LevelChallengeStyle))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_CREATELEVELCHALLENGE2_OFFSET))(parent, parentWidget, QuestID, style);
	}

	static ::MoleMole::UIActivitySelectLevelDoubleIconWidgetController* OpenSelectIconWidget_DoubleIcon(::UnityEngine::Transform* parent, ::MoleMole::UIBaseController* parentWidget, ::System::Collections::Generic::List_1<::System::Int32>* ids)
	{
		return ((::MoleMole::UIActivitySelectLevelDoubleIconWidgetController*(*)(::UnityEngine::Transform*, ::MoleMole::UIBaseController*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_OPENSELECTICONWIDGET_DOUBLEICON_OFFSET))(parent, parentWidget, ids);
	}

	static ::MoleMole::UIGeneralHeadRowWidgetController* CreateHeadRow(::Enum_3_A40824779333D5B2 state, ::UnityEngine::Transform* parent, ::MoleMole::UIBaseController* parentWidget, ::System::Int32 id)
	{
		return ((::MoleMole::UIGeneralHeadRowWidgetController*(*)(::Enum_3_A40824779333D5B2, ::UnityEngine::Transform*, ::MoleMole::UIBaseController*, ::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_CREATEHEADROW_OFFSET))(state, parent, parentWidget, id);
	}

	static ::MoleMole::UIGeneralTipsPopWindowController* ShowPeriodTimeTips(::System::Int32 activityID, ::System::Int32 periodID)
	{
		return ((::MoleMole::UIGeneralTipsPopWindowController*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_SHOWPERIODTIMETIPS_OFFSET))(activityID, periodID);
	}

	static ::ActivityCommonUIUtil_HeadRowType GetSelectIconType(::System::Int32 id)
	{
		return ((::ActivityCommonUIUtil_HeadRowType(*)(::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_GETSELECTICONTYPE_OFFSET))(id);
	}

	static ::Foundation::AssetPath GetChallengeResultLevelIcon(::System::Int32 questID)
	{
		return ((::Foundation::AssetPath(*)(::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_GETCHALLENGERESULTLEVELICON_OFFSET))(questID);
	}

	static ::System::Int32 GetChallengeFinishCount(::System::Int32 questID)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_GETCHALLENGEFINISHCOUNT_OFFSET))(questID);
	}

	static ::System::Void OpenMainBattlePartnerInfoPop(::System::Int32 questID)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_OPENMAINBATTLEPARTNERINFOPOP_OFFSET))(questID);
	}

	static ::System::Void OpenGoAvatarActivityStoryInfoPop(::System::Int32 entryQuestID)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_OPENGOAVATARACTIVITYSTORYINFOPOP_OFFSET))(entryQuestID);
	}

	static ::Class_2_904DC4291C492A08* CreateActivityFightUILevelGroup(::System::Int32 groupID, ::System::Boolean isBigSceneLevel)
	{
		return ((::Class_2_904DC4291C492A08*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_CREATEACTIVITYFIGHTUILEVELGROUP_OFFSET))(groupID, isBigSceneLevel);
	}

	static ::System::Collections::Generic::List_1<::Class_2_F8EB4D9464ADCCA1*>* GetGroupMonsterConfigs(::System::Int32 groupID)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_F8EB4D9464ADCCA1*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_GETGROUPMONSTERCONFIGS_OFFSET))(groupID);
	}

	static ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* GetGroupChallengePreviewReward(::System::Int32 groupChallengeID, ::System::Boolean isGet)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_GETGROUPCHALLENGEPREVIEWREWARD_OFFSET))(groupChallengeID, isGet);
	}

	static ::System::Collections::Generic::List_1<::Class_2_5E653D9F744DDC7F*>* GetBigSceneTeamDataBindDatas(::System::Action* onClick)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_5E653D9F744DDC7F*>*(*)(::System::Action*))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_GETBIGSCENETEAMDATABINDDATAS_OFFSET))(onClick);
	}
};
