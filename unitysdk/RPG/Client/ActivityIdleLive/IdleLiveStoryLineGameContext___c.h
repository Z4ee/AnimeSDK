#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTORYLINEGAMECONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA4AEF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTORYLINEGAMECONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA4AF30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTORYLINEGAMECONTEXT___C___ONLEAVEBATTLE_B__32_0_OFFSET UNITYSDK_OFFSET(0x1BA4AF40)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveStoryLineGameContext___c_TypeDefinitionIndex = 75023;

	class IdleLiveStoryLineGameContext___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__32_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveStoryLineGameContext___c_TypeDefinitionIndex)->GetStaticField(0x5DA90);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveStoryLineGameContext___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveStoryLineGameContext___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveStoryLineGameContext___c_TypeDefinitionIndex)->GetStaticField(0x5DA98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTORYLINEGAMECONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTORYLINEGAMECONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnLeaveBattle_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTORYLINEGAMECONTEXT___C___ONLEAVEBATTLE_B__32_0_OFFSET))(this);
		}
	};
}
