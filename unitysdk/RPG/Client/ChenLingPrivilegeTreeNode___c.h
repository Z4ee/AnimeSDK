#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChenLingPrivilegeTreeNode; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__ADDCHILD_B__2_0_OFFSET UNITYSDK_OFFSET(0x9FCAF30)
#define RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__ADDPARENT_B__1_0_OFFSET UNITYSDK_OFFSET(0x9FCAEE0)
#define RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9FCAE90)
#define RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9FCAED0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingPrivilegeTreeNode___c_TypeDefinitionIndex = 56670;

	class ChenLingPrivilegeTreeNode___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ChenLingPrivilegeTreeNode*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChenLingPrivilegeTreeNode*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingPrivilegeTreeNode___c_TypeDefinitionIndex)->GetStaticField(0x516E0);
		}
		static ::RPG::Client::ChenLingPrivilegeTreeNode___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingPrivilegeTreeNode___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingPrivilegeTreeNode___c_TypeDefinitionIndex)->GetStaticField(0x516E8);
		}
		static ::System::Comparison_1<::RPG::Client::ChenLingPrivilegeTreeNode*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChenLingPrivilegeTreeNode*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingPrivilegeTreeNode___c_TypeDefinitionIndex)->GetStaticField(0x516F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _AddParent_b__1_0(::RPG::Client::ChenLingPrivilegeTreeNode* a, ::RPG::Client::ChenLingPrivilegeTreeNode* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingPrivilegeTreeNode*, ::RPG::Client::ChenLingPrivilegeTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__ADDPARENT_B__1_0_OFFSET))(this, a, b);
		}

		::System::Int32 _AddChild_b__2_0(::RPG::Client::ChenLingPrivilegeTreeNode* a, ::RPG::Client::ChenLingPrivilegeTreeNode* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingPrivilegeTreeNode*, ::RPG::Client::ChenLingPrivilegeTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__ADDCHILD_B__2_0_OFFSET))(this, a, b);
		}
	};
}
