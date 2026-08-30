#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChenLingPrivilegeTreeNode; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__ADDCHILD_B__2_0_OFFSET UNITYSDK_OFFSET(0x1CB24160)
#define RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__ADDPARENT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1CB24110)
#define RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB240C0)
#define RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB24100)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingPrivilegeTreeNode___c_TypeDefinitionIndex = 61540;

	class ChenLingPrivilegeTreeNode___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingPrivilegeTreeNode___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingPrivilegeTreeNode___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingPrivilegeTreeNode___c_TypeDefinitionIndex)->GetStaticField(0x460E0);
		}
		static ::System::Comparison_1<::RPG::Client::ChenLingPrivilegeTreeNode*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChenLingPrivilegeTreeNode*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingPrivilegeTreeNode___c_TypeDefinitionIndex)->GetStaticField(0x460E8);
		}
		static ::System::Comparison_1<::RPG::Client::ChenLingPrivilegeTreeNode*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChenLingPrivilegeTreeNode*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingPrivilegeTreeNode___c_TypeDefinitionIndex)->GetStaticField(0x460F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _AddParent_b__1_0(::RPG::Client::ChenLingPrivilegeTreeNode* a1, ::RPG::Client::ChenLingPrivilegeTreeNode* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingPrivilegeTreeNode*, ::RPG::Client::ChenLingPrivilegeTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__ADDPARENT_B__1_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _AddChild_b__2_0(::RPG::Client::ChenLingPrivilegeTreeNode* a1, ::RPG::Client::ChenLingPrivilegeTreeNode* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingPrivilegeTreeNode*, ::RPG::Client::ChenLingPrivilegeTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__ADDCHILD_B__2_0_OFFSET))(this, a1, a2);
		}
	};
}
