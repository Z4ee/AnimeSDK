#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChenLingPrivilege; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGPRIVILEGETREENODE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0xB63F400)
#define RPG_CLIENT_CHENLINGPRIVILEGETREENODE_ADDPARENT_OFFSET UNITYSDK_OFFSET(0xB63F6D0)
#define RPG_CLIENT_CHENLINGPRIVILEGETREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xB63F380)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingPrivilegeTreeNode_TypeDefinitionIndex = 57446;

	class ChenLingPrivilegeTreeNode : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilegeTreeNode*>* Children; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilegeTreeNode*>* Parents; // 0x18
		::RPG::Client::ChenLingPrivilege* Config; // 0x20
		::System::UInt32 Height; // 0x28

		::System::Void _ctor(::RPG::Client::ChenLingPrivilege* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingPrivilege*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGETREENODE__CTOR_OFFSET))(this, a1);
		}

		::System::Void AddParent(::RPG::Client::ChenLingPrivilegeTreeNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingPrivilegeTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGETREENODE_ADDPARENT_OFFSET))(this, a1);
		}

		::System::Void AddChild(::RPG::Client::ChenLingPrivilegeTreeNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingPrivilegeTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGETREENODE_ADDCHILD_OFFSET))(this, a1);
		}
	};
}
