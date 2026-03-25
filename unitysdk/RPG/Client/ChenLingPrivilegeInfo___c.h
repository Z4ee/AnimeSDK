#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChenLingPrivilege; }
namespace RPG::Client { class ChenLingPrivilegeTreeNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHENLINGPRIVILEGEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x935D030)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x935D070)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO___C__GET_ACTIVATEDCOUNT_B__13_0_OFFSET UNITYSDK_OFFSET(0x935D0D0)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO___C___BUILDPRIVILEGETREE_B__6_0_OFFSET UNITYSDK_OFFSET(0x935D080)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO___C___BUILDPRIVILEGETREE_B__6_1_OFFSET UNITYSDK_OFFSET(0x935D0B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingPrivilegeInfo___c_TypeDefinitionIndex = 49850;

	class ChenLingPrivilegeInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChenLingPrivilege*>, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChenLingPrivilege*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingPrivilegeInfo___c_TypeDefinitionIndex)->GetStaticField(0x465D0);
		}
		static ::System::Func_2<::RPG::Client::ChenLingPrivilegeTreeNode*, ::System::UInt32>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::RPG::Client::ChenLingPrivilegeTreeNode*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingPrivilegeInfo___c_TypeDefinitionIndex)->GetStaticField(0x465D8);
		}
		static ::System::Func_2<::RPG::Client::ChenLingPrivilegeTreeNode*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::ChenLingPrivilegeTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingPrivilegeInfo___c_TypeDefinitionIndex)->GetStaticField(0x465E0);
		}
		static ::RPG::Client::ChenLingPrivilegeInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingPrivilegeInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingPrivilegeInfo___c_TypeDefinitionIndex)->GetStaticField(0x465E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __BuildPrivilegeTree_b__6_0(::RPG::Client::ChenLingPrivilegeTreeNode* v)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingPrivilegeTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO___C___BUILDPRIVILEGETREE_B__6_0_OFFSET))(this, v);
		}

		::System::UInt32 __BuildPrivilegeTree_b__6_1(::RPG::Client::ChenLingPrivilegeTreeNode* p)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChenLingPrivilegeTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO___C___BUILDPRIVILEGETREE_B__6_1_OFFSET))(this, p);
		}

		::System::Boolean _get_ActivatedCount_b__13_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChenLingPrivilege*> p)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChenLingPrivilege*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO___C__GET_ACTIVATEDCOUNT_B__13_0_OFFSET))(this, p);
		}
	};
}
