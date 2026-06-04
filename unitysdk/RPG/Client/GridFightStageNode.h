#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
#include "unitysdk/System/Object.h"

class Class_1_28D410CCE235575F_3;
class Class_1_31B87651CEDF5B41;
class Class_1_A5ECC5BBA0109924;
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightStage; }
namespace RPG::GameCore { class GridFightNodeTemplateConfigRow; }
namespace RPG::GameCore { class GridFightPenaltyRuleConfigRow; }
namespace RPG::GameCore { class GridFightStageNodeDisplayConfigRow; }
namespace RPG::GameCore { class GridFightStageRouteConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_BASICREWARD_OFFSET UNITYSDK_OFFSET(0xBC04DB0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_CANSKIP_OFFSET UNITYSDK_OFFSET(0xBC04B40)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0xBC03CC0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_DEADLINEPENALTY_OFFSET UNITYSDK_OFFSET(0xBC05710)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_DEADLINERATIO_OFFSET UNITYSDK_OFFSET(0xBC05690)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_EXPERTCONFIG_OFFSET UNITYSDK_OFFSET(0xBC05B10)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASDEADLINE_OFFSET UNITYSDK_OFFSET(0xBC05470)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASEXPERT_OFFSET UNITYSDK_OFFSET(0xBC059B0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASHPDETAILRULE_OFFSET UNITYSDK_OFFSET(0xBC05540)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASNOTFINISHRULE_OFFSET UNITYSDK_OFFSET(0xBC054E0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASPERFECTRULE_OFFSET UNITYSDK_OFFSET(0xBC05450)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HPCOSTMAX_OFFSET UNITYSDK_OFFSET(0xBC055A0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HPCOSTMIN_OFFSET UNITYSDK_OFFSET(0xBC05620)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBC04DD0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISAUGMENTNODE_OFFSET UNITYSDK_OFFSET(0xBC04CC0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISBATTLENODE_OFFSET UNITYSDK_OFFSET(0xBC04470)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISCURRENT_OFFSET UNITYSDK_OFFSET(0xBC04C20)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISEASY_OFFSET UNITYSDK_OFFSET(0xBC05780)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISELITENODE_OFFSET UNITYSDK_OFFSET(0xBC04AE0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISFRENZY_OFFSET UNITYSDK_OFFSET(0xBC04B00)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISPASSED_OFFSET UNITYSDK_OFFSET(0xBC043A0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISPERFECT_OFFSET UNITYSDK_OFFSET(0xBC04CE0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISSUPPLYNODE_OFFSET UNITYSDK_OFFSET(0xBC04AC0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_LEFTSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0xBC04B60)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEDESC_OFFSET UNITYSDK_OFFSET(0xBC05140)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEDETAILNAME_OFFSET UNITYSDK_OFFSET(0xBC04FE0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEINFO_OFFSET UNITYSDK_OFFSET(0xBC04B70)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0xBC04E80)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0xBC02CE0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_PERFECTRATIO_OFFSET UNITYSDK_OFFSET(0xBC059A0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_RAWNODETYPE_OFFSET UNITYSDK_OFFSET(0xBC04B20)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ROW_OFFSET UNITYSDK_OFFSET(0xBC04AB0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xBC03CE0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_SHOWAUGMENT_OFFSET UNITYSDK_OFFSET(0xBC04B80)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_TOTALSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0xBC04B50)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__DISPLAYROW_OFFSET UNITYSDK_OFFSET(0xBC04A00)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__PENALTYRULECONFIGROW_OFFSET UNITYSDK_OFFSET(0xBC05320)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__STAGE_OFFSET UNITYSDK_OFFSET(0xBC047F0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SETFRENZY_OFFSET UNITYSDK_OFFSET(0xBC04A70)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISFRENZY_OFFSET UNITYSDK_OFFSET(0xBC04B10)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATENODEINFO_OFFSET UNITYSDK_OFFSET(0xBC04960)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATESTTINFO_OFFSET UNITYSDK_OFFSET(0xBC04910)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE__CANSKIP_OFFSET UNITYSDK_OFFSET(0xBC05C70)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE__CHECKISEASY_OFFSET UNITYSDK_OFFSET(0xBC05790)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xBC048C0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE__GETLEFTSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0xBC05F00)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE__GETTOTALSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0xBC05DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStageNode_TypeDefinitionIndex = 61012;

	class GridFightStageNode : public ::System::Object
	{
	public:
		::Class_1_A5ECC5BBA0109924* _NodeInfo; // 0x10
		::Class_1_28D410CCE235575F_3* _BattleNodeInfo; // 0x18
		::RPG::GameCore::GridFightStageRouteConfigRow* _ConfigRow; // 0x20
		::Class_1_31B87651CEDF5B41* _SttInfo; // 0x28
		::RPG::GameCore::GridFightNodeTemplateConfigRow* _NodeTemplateConfigRow; // 0x30
		::System::Boolean _IsFrenzy_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::GameCore::GridFightStageRouteConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightStageRouteConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightStage* get__Stage()
		{
			return ((::RPG::Client::GridFightStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__STAGE_OFFSET))(this);
		}

		::System::Void UpdateSttInfo(::Class_1_31B87651CEDF5B41* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_31B87651CEDF5B41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATESTTINFO_OFFSET))(this, a1);
		}

		::System::Void UpdateNodeInfo(::Class_1_A5ECC5BBA0109924* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A5ECC5BBA0109924*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATENODEINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightStageNodeDisplayConfigRow* get__DisplayRow()
		{
			return ((::RPG::GameCore::GridFightStageNodeDisplayConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__DISPLAYROW_OFFSET))(this);
		}

		::System::Void SetFrenzy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SETFRENZY_OFFSET))(this);
		}

		::RPG::GameCore::GridFightStageRouteConfigRow* get_Row()
		{
			return ((::RPG::GameCore::GridFightStageRouteConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ROW_OFFSET))(this);
		}

		::System::Boolean get_IsSupplyNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISSUPPLYNODE_OFFSET))(this);
		}

		::System::Boolean get_IsEliteNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISELITENODE_OFFSET))(this);
		}

		::System::Boolean get_IsFrenzy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISFRENZY_OFFSET))(this);
		}

		::System::Void set_IsFrenzy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISFRENZY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightNodeType get_RawNodeType()
		{
			return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_RAWNODETYPE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightNodeType get_NodeType()
		{
			return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODETYPE_OFFSET))(this);
		}

		::System::Boolean get_CanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_CANSKIP_OFFSET))(this);
		}

		::System::UInt32 get_TotalSkipCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_TOTALSKIPCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_LeftSkipCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_LEFTSKIPCOUNT_OFFSET))(this);
		}

		::Class_1_A5ECC5BBA0109924* get_NodeInfo()
		{
			return ((::Class_1_A5ECC5BBA0109924*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEINFO_OFFSET))(this);
		}

		::System::Boolean get_ShowAugment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_SHOWAUGMENT_OFFSET))(this);
		}

		::System::Boolean get_IsAugmentNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISAUGMENTNODE_OFFSET))(this);
		}

		::System::Boolean get_IsPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISPASSED_OFFSET))(this);
		}

		::System::Boolean get_IsPerfect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISPERFECT_OFFSET))(this);
		}

		::System::Boolean get_IsCurrent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISCURRENT_OFFSET))(this);
		}

		::System::Boolean get_IsBattleNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISBATTLENODE_OFFSET))(this);
		}

		::System::UInt32 get_SectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_SECTIONID_OFFSET))(this);
		}

		::System::UInt32 get_ChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_CHAPTERID_OFFSET))(this);
		}

		::System::UInt32 get_BasicReward()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_BASICREWARD_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_NodeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_NodeDetailName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEDETAILNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_NodeDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEDESC_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPenaltyRuleConfigRow* get__PenaltyRuleConfigRow()
		{
			return ((::RPG::GameCore::GridFightPenaltyRuleConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__PENALTYRULECONFIGROW_OFFSET))(this);
		}

		::System::Boolean get_HasPerfectRule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASPERFECTRULE_OFFSET))(this);
		}

		::System::Boolean get_HasDeadLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASDEADLINE_OFFSET))(this);
		}

		::System::Boolean get_HasNotFinishRule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASNOTFINISHRULE_OFFSET))(this);
		}

		::System::Boolean get_HasHPDetailRule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASHPDETAILRULE_OFFSET))(this);
		}

		::System::UInt32 get_HPCostMax()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HPCOSTMAX_OFFSET))(this);
		}

		::System::UInt32 get_HPCostMin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HPCOSTMIN_OFFSET))(this);
		}

		::System::Single get_DeadLineRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_DEADLINERATIO_OFFSET))(this);
		}

		::System::UInt32 get_DeadLinePenalty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_DEADLINEPENALTY_OFFSET))(this);
		}

		::System::Boolean get_IsEasy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISEASY_OFFSET))(this);
		}

		::System::Single get_PerfectRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_PERFECTRATIO_OFFSET))(this);
		}

		::System::Boolean get_HasExpert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASEXPERT_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleConfig* get_ExpertConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_EXPERTCONFIG_OFFSET))(this);
		}

		::System::Boolean _CanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE__CANSKIP_OFFSET))(this);
		}

		::System::UInt32 _GetTotalSkipCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE__GETTOTALSKIPCOUNT_OFFSET))(this);
		}

		::System::UInt32 _GetLeftSkipCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE__GETLEFTSKIPCOUNT_OFFSET))(this);
		}

		::System::Boolean _CheckIsEasy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE__CHECKISEASY_OFFSET))(this);
		}
	};
}
