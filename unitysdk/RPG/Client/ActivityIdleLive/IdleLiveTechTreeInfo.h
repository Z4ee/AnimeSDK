#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/RPG/GameCore/IdleLiveTechTreeEffectType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_075C34D03AFA1215_56;
class Class_1_668FE281FA72D3E8_12;
namespace RPG::Client::ActivityIdleLive { class IdleLiveAdvTechTree; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTechTree; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_ACTIVATENODE_OFFSET UNITYSDK_OFFSET(0x9BD4AF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETACTIVENODESBYTYPE_OFFSET UNITYSDK_OFFSET(0x9BD4C70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETADVTREEACTIVATEDNODECOUNT_OFFSET UNITYSDK_OFFSET(0x9BD5970)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETADVTREEALLNODECOUNT_OFFSET UNITYSDK_OFFSET(0x9BD5AC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETALLACTIVATENODES_OFFSET UNITYSDK_OFFSET(0x9BD4E30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETEXTRAPOWERADDEDBYTECHTREE_OFFSET UNITYSDK_OFFSET(0x9BD5070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETFIRSTREACHADVTREE_OFFSET UNITYSDK_OFFSET(0x9BD5790)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETNODE_OFFSET UNITYSDK_OFFSET(0x9BD3FE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETPOWERFACTOR_OFFSET UNITYSDK_OFFSET(0x9BD5C10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GET_ADVTECHTREES_OFFSET UNITYSDK_OFFSET(0x9BD6230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GET_BASETECHTREE_OFFSET UNITYSDK_OFFSET(0x9BD6210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_HASANYACTIVATEDNODE_OFFSET UNITYSDK_OFFSET(0x9BD55F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_HASANYIDLELIVETECHTREECANACTIVATE_OFFSET UNITYSDK_OFFSET(0x9BD52F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9BD2F20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_ISADVTREEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9BD5590)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_ISNODEACTIVATED_OFFSET UNITYSDK_OFFSET(0x9BD4C10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_RESETALLACTIVATENODE_OFFSET UNITYSDK_OFFSET(0x9BD4B80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_SET_ADVTECHTREES_OFFSET UNITYSDK_OFFSET(0x9BD6240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_SET_BASETECHTREE_OFFSET UNITYSDK_OFFSET(0x9BD6220)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x9BD48A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x9BD40C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9BD6250)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTechTreeInfo_TypeDefinitionIndex = 69462;

	class IdleLiveTechTreeInfo : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _activatedNodeIds; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* _nodeDict; // 0x20
		::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree* _BaseTechTree_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*>* _AdvTechTrees_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_INIT_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* GetNode(::System::UInt32 nodeId)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETNODE_OFFSET))(this, nodeId);
		}

		::System::Void Update(::Class_1_668FE281FA72D3E8_12* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_UPDATE_OFFSET))(this, rsp);
		}

		::System::Void Update_1(::Class_1_075C34D03AFA1215_56* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_56*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_UPDATE_1_OFFSET))(this, info);
		}

		::System::Void ActivateNode(::System::UInt32 nodeId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_ACTIVATENODE_OFFSET))(this, nodeId);
		}

		::System::Void ResetAllActivateNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_RESETALLACTIVATENODE_OFFSET))(this);
		}

		::System::Boolean IsNodeActivated(::System::UInt32 nodeId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_ISNODEACTIVATED_OFFSET))(this, nodeId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* GetActiveNodesByType(::RPG::GameCore::IdleLiveTechTreeEffectType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*(*)(::PVOID, ::RPG::GameCore::IdleLiveTechTreeEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETACTIVENODESBYTYPE_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* GetAllActivateNodes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETALLACTIVATENODES_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetExtraPowerAddedByTechTree()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETEXTRAPOWERADDEDBYTECHTREE_OFFSET))(this);
		}

		::System::Boolean HasAnyIdleLiveTechTreeCanActivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_HASANYIDLELIVETECHTREECANACTIVATE_OFFSET))(this);
		}

		::System::Boolean HasAnyActivatedNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_HASANYACTIVATEDNODE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree* GetFirstReachAdvTree()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETFIRSTREACHADVTREE_OFFSET))(this);
		}

		::System::Boolean IsAdvTreeUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_ISADVTREEUNLOCKED_OFFSET))(this);
		}

		::System::Int32 GetAdvTreeActivatedNodeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETADVTREEACTIVATEDNODECOUNT_OFFSET))(this);
		}

		::System::Int32 GetAdvTreeAllNodeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETADVTREEALLNODECOUNT_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetPowerFactor(::System::Collections::Generic::HashSet_1<::RPG::GameCore::ILBattleAvatarTag>* captainTags)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::ILBattleAvatarTag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETPOWERFACTOR_OFFSET))(this, captainTags);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree* get_BaseTechTree()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GET_BASETECHTREE_OFFSET))(this);
		}

		::System::Void set_BaseTechTree(::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_SET_BASETECHTREE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*>* get_AdvTechTrees()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GET_ADVTECHTREES_OFFSET))(this);
		}

		::System::Void set_AdvTechTrees(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_SET_ADVTECHTREES_OFFSET))(this, value);
		}
	};
}
