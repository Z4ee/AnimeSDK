#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTechTree; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace RPG::GameCore { class IdleLiveAdvTechTreeTabRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_CREATE_OFFSET UNITYSDK_OFFSET(0x9B2B0B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GETACTIVATEDNODECOUNT_OFFSET UNITYSDK_OFFSET(0x9B2BBE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GETALLNODECOUNT_OFFSET UNITYSDK_OFFSET(0x9B2C210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GET_BASETECHTREE_OFFSET UNITYSDK_OFFSET(0x9B2CEC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9B2CEE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B2CE80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GET_RECOMMENDAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9B2CEA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_HASANYIDLELIVETECHTREECANACTIVATE_OFFSET UNITYSDK_OFFSET(0x9B2CB50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_HASUNACTIVATEDNODE_OFFSET UNITYSDK_OFFSET(0x9B2C5D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_SET_BASETECHTREE_OFFSET UNITYSDK_OFFSET(0x9B2CED0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9B2CEF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9B2CE90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_SET_RECOMMENDAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9B2CEB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x9B2B140)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveAdvTechTree_TypeDefinitionIndex = 69455;

	class IdleLiveAdvTechTree : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree* _BaseTechTree_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _RecommendAvatarIDs_k__BackingField; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::RPG::Client::TextID _Name_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree* Create(::RPG::GameCore::IdleLiveAdvTechTreeTabRow* row, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* nodes)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*(*)(::RPG::GameCore::IdleLiveAdvTechTreeTabRow*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_CREATE_OFFSET))(row, nodes);
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

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_SET_NAME_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_RecommendAvatarIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GET_RECOMMENDAVATARIDS_OFFSET))(this);
		}

		::System::Void set_RecommendAvatarIDs(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_SET_RECOMMENDAVATARIDS_OFFSET))(this, value);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree* get_BaseTechTree()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GET_BASETECHTREE_OFFSET))(this);
		}

		::System::Void set_BaseTechTree(::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_SET_BASETECHTREE_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEADVTECHTREE_SET_ICONPATH_OFFSET))(this, value);
		}
	};
}
