#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChenLingPrivilege; }
namespace RPG::Client { class ChenLingPrivilegeTreeNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHENLINGPRIVILEGEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB63FF20)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB63FF60)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO___C__GET_ACTIVATEDCOUNT_B__13_0_OFFSET UNITYSDK_OFFSET(0xB63FFC0)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO___C___BUILDPRIVILEGETREE_B__6_0_OFFSET UNITYSDK_OFFSET(0xB63FF70)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO___C___BUILDPRIVILEGETREE_B__6_1_OFFSET UNITYSDK_OFFSET(0xB63FFA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingPrivilegeInfo___c_TypeDefinitionIndex = 57449;

	class ChenLingPrivilegeInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChenLingPrivilegeTreeNode*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::ChenLingPrivilegeTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingPrivilegeInfo___c_TypeDefinitionIndex)->GetStaticField(0x626E0);
		}
		static ::RPG::Client::ChenLingPrivilegeInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingPrivilegeInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingPrivilegeInfo___c_TypeDefinitionIndex)->GetStaticField(0x626E8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChenLingPrivilege*>, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChenLingPrivilege*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingPrivilegeInfo___c_TypeDefinitionIndex)->GetStaticField(0x626F0);
		}
		static ::System::Func_2<::RPG::Client::ChenLingPrivilegeTreeNode*, ::System::UInt32>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::RPG::Client::ChenLingPrivilegeTreeNode*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingPrivilegeInfo___c_TypeDefinitionIndex)->GetStaticField(0x626F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __BuildPrivilegeTree_b__6_0(::RPG::Client::ChenLingPrivilegeTreeNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingPrivilegeTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO___C___BUILDPRIVILEGETREE_B__6_0_OFFSET))(this, a1);
		}

		::System::UInt32 __BuildPrivilegeTree_b__6_1(::RPG::Client::ChenLingPrivilegeTreeNode* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChenLingPrivilegeTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO___C___BUILDPRIVILEGETREE_B__6_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_ActivatedCount_b__13_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChenLingPrivilege*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChenLingPrivilege*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO___C__GET_ACTIVATEDCOUNT_B__13_0_OFFSET))(this, a1);
		}
	};
}
