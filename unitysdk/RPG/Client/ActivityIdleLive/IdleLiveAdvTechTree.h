#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTechTree; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace RPG::GameCore { class IdleLiveAdvTechTreeTabRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_CREATE_OFFSET UNITYSDK_OFFSET(0xB110F50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GETACTIVATEDNODECOUNT_OFFSET UNITYSDK_OFFSET(0xB111B40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GETALLNODECOUNT_OFFSET UNITYSDK_OFFSET(0xB111FF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GET_BASETECHTREE_OFFSET UNITYSDK_OFFSET(0xB112A60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB112A80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB112A20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GET_RECOMMENDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xB112A40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_HASANYIDLELIVETECHTREECANACTIVATE_OFFSET UNITYSDK_OFFSET(0xB112710)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_HASUNACTIVATEDNODE_OFFSET UNITYSDK_OFFSET(0xB112290)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_SET_BASETECHTREE_OFFSET UNITYSDK_OFFSET(0xB112A70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB112A90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB112A30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_SET_RECOMMENDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xB112A50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE__CTOR_OFFSET UNITYSDK_OFFSET(0xB110FF0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveAdvTechTree_TypeDefinitionIndex = 70267;

	class IdleLiveAdvTechTree : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _RecommendAvatarIDs_k__BackingField; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree* _BaseTechTree_k__BackingField; // 0x20
		::RPG::Client::TextID _Name_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree* Create(::RPG::GameCore::IdleLiveAdvTechTreeTabRow* a1, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* a2)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*(*)(::RPG::GameCore::IdleLiveAdvTechTreeTabRow*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_CREATE_OFFSET))(a1, a2);
		}

		::System::Int32 GetActivatedNodeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GETACTIVATEDNODECOUNT_OFFSET))(this);
		}

		::System::Int32 GetAllNodeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GETALLNODECOUNT_OFFSET))(this);
		}

		::System::Boolean HasUnactivatedNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_HASUNACTIVATEDNODE_OFFSET))(this);
		}

		::System::Boolean HasAnyIdleLiveTechTreeCanActivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_HASANYIDLELIVETECHTREECANACTIVATE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_SET_NAME_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_RecommendAvatarIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GET_RECOMMENDAVATARIDS_OFFSET))(this);
		}

		::System::Void set_RecommendAvatarIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_SET_RECOMMENDAVATARIDS_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree* get_BaseTechTree()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GET_BASETECHTREE_OFFSET))(this);
		}

		::System::Void set_BaseTechTree(::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_SET_BASETECHTREE_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_SET_ICONPATH_OFFSET))(this, a1);
		}
	};
}
