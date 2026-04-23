#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9FAF430)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9FAF470)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__REFRESHPOLICY_B__3_0_OFFSET UNITYSDK_OFFSET(0x9FAF480)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__REQUESTSELLHANDCARD_B__8_0_OFFSET UNITYSDK_OFFSET(0x9FAF4A0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__SELECTPOLICY_B__6_1_OFFSET UNITYSDK_OFFSET(0x9FAF490)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectPolicyPhase___c_TypeDefinitionIndex = 70079;

	class SelectPolicyPhase___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingBattle::SelectPolicyPhase___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattle::SelectPolicyPhase___c**)Il2CppClass::FromTypeDefinitionIndex(SelectPolicyPhase___c_TypeDefinitionIndex)->GetStaticField(0x4F5B0);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__6_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(SelectPolicyPhase___c_TypeDefinitionIndex)->GetStaticField(0x4F5B8);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(SelectPolicyPhase___c_TypeDefinitionIndex)->GetStaticField(0x4F5C0);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(SelectPolicyPhase___c_TypeDefinitionIndex)->GetStaticField(0x4F5C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshPolicy_b__3_0(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__REFRESHPOLICY_B__3_0_OFFSET))(this, e);
		}

		::System::Void _SelectPolicy_b__6_1(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__SELECTPOLICY_B__6_1_OFFSET))(this, e);
		}

		::System::Void _RequestSellHandCard_b__8_0(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__REQUESTSELLHANDCARD_B__8_0_OFFSET))(this, e);
		}
	};
}
