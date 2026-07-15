#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/RPG/GameCore/IdleLiveTechTreeEffectType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_075C34D03AFA1215_55;
class Class_1_1CBA230307F9C289_47;
namespace RPG::Client::ActivityIdleLive { class IdleLiveAdvTechTree; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTechTree; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_ACTIVATENODE_OFFSET UNITYSDK_OFFSET(0x1A180E60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETACTIVENODESBYTYPE_OFFSET UNITYSDK_OFFSET(0x1A180FE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETADVTREEACTIVATEDNODECOUNT_OFFSET UNITYSDK_OFFSET(0x1A182000)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETADVTREEALLNODECOUNT_OFFSET UNITYSDK_OFFSET(0x1A182140)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETALLACTIVATENODES_OFFSET UNITYSDK_OFFSET(0x1A181290)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETEXTRAPOWERADDEDBYTECHTREE_OFFSET UNITYSDK_OFFSET(0x1A1815D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETFIRSTREACHADVTREE_OFFSET UNITYSDK_OFFSET(0x1A181E30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETNODE_OFFSET UNITYSDK_OFFSET(0x1A1802A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETPOWERFACTOR_OFFSET UNITYSDK_OFFSET(0x1A182280)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GET_ADVTECHTREES_OFFSET UNITYSDK_OFFSET(0x1A182860)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GET_BASETECHTREE_OFFSET UNITYSDK_OFFSET(0x1A182840)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_HASANYACTIVATEDNODE_OFFSET UNITYSDK_OFFSET(0x1A181B40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_HASANYIDLELIVETECHTREECANACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A181860)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1A17F1E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_ISADVTREEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1A181AE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_ISNODEACTIVATED_OFFSET UNITYSDK_OFFSET(0x1A180F80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_RESETALLACTIVATENODE_OFFSET UNITYSDK_OFFSET(0x1A180EF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_SET_ADVTECHTREES_OFFSET UNITYSDK_OFFSET(0x1A182870)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_SET_BASETECHTREE_OFFSET UNITYSDK_OFFSET(0x1A182850)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1A180BA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A180350)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A182880)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTechTreeInfo_TypeDefinitionIndex = 71797;

	class IdleLiveTechTreeInfo : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* _nodeDict; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _activatedNodeIds; // 0x20
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

		::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* GetNode(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETNODE_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_1CBA230307F9C289_47* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_47*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Update_1(::Class_1_075C34D03AFA1215_55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_55*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_UPDATE_1_OFFSET))(this, a1);
		}

		::System::Void ActivateNode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_ACTIVATENODE_OFFSET))(this, a1);
		}

		::System::Void ResetAllActivateNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_RESETALLACTIVATENODE_OFFSET))(this);
		}

		::System::Boolean IsNodeActivated(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_ISNODEACTIVATED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* GetActiveNodesByType(::RPG::GameCore::IdleLiveTechTreeEffectType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*(*)(::PVOID, ::RPG::GameCore::IdleLiveTechTreeEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETACTIVENODESBYTYPE_OFFSET))(this, a1);
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

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetPowerFactor(::System::Collections::Generic::HashSet_1<::RPG::GameCore::ILBattleAvatarTag>* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::ILBattleAvatarTag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GETPOWERFACTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree* get_BaseTechTree()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GET_BASETECHTREE_OFFSET))(this);
		}

		::System::Void set_BaseTechTree(::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_SET_BASETECHTREE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*>* get_AdvTechTrees()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_GET_ADVTECHTREES_OFFSET))(this);
		}

		::System::Void set_AdvTechTrees(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO_SET_ADVTECHTREES_OFFSET))(this, a1);
		}
	};
}
