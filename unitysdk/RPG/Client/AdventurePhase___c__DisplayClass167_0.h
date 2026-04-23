#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventurePhase; }

#define RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS167_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9CB4EE0)
#define RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS167_0___ONSERVERRESPONDSKILLCASTFAIL_B__0_OFFSET UNITYSDK_OFFSET(0x9CBDE20)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhase___c__DisplayClass167_0_TypeDefinitionIndex = 55450;

	class AdventurePhase___c__DisplayClass167_0 : public ::System::Object
	{
	public:
		::RPG::Client::AdventurePhase* __4__this; // 0x10
		::System::Boolean needReloadingResultWhenSkillCastFail; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS167_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnServerRespondSkillCastFail_b__0(::System::Boolean _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS167_0___ONSERVERRESPONDSKILLCASTFAIL_B__0_OFFSET))(this, _);
		}
	};
}
