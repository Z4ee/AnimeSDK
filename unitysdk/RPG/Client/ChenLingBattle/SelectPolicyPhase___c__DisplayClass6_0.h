#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9FAF420)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__DISPLAYCLASS6_0__SELECTPOLICY_B__2_OFFSET UNITYSDK_OFFSET(0x9FAF4B0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectPolicyPhase___c__DisplayClass6_0_TypeDefinitionIndex = 70080;

	class SelectPolicyPhase___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _SelectPolicy_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__DISPLAYCLASS6_0__SELECTPOLICY_B__2_OFFSET))(this);
		}
	};
}
