#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5C96D0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB5C9710)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__REFRESHPOLICY_B__3_0_OFFSET UNITYSDK_OFFSET(0xB5C9720)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__REQUESTSELLHANDCARD_B__8_0_OFFSET UNITYSDK_OFFSET(0xB5C9740)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__SELECTPOLICY_B__6_1_OFFSET UNITYSDK_OFFSET(0xB5C9730)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectPolicyPhase___c_TypeDefinitionIndex = 70891;

	class SelectPolicyPhase___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__6_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(SelectPolicyPhase___c_TypeDefinitionIndex)->GetStaticField(0x60570);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(SelectPolicyPhase___c_TypeDefinitionIndex)->GetStaticField(0x60578);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(SelectPolicyPhase___c_TypeDefinitionIndex)->GetStaticField(0x60580);
		}
		static ::RPG::Client::ChenLingBattle::SelectPolicyPhase___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattle::SelectPolicyPhase___c**)Il2CppClass::FromTypeDefinitionIndex(SelectPolicyPhase___c_TypeDefinitionIndex)->GetStaticField(0x60588);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshPolicy_b__3_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__REFRESHPOLICY_B__3_0_OFFSET))(this, a1);
		}

		::System::Void _SelectPolicy_b__6_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__SELECTPOLICY_B__6_1_OFFSET))(this, a1);
		}

		::System::Void _RequestSellHandCard_b__8_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__REQUESTSELLHANDCARD_B__8_0_OFFSET))(this, a1);
		}
	};
}
