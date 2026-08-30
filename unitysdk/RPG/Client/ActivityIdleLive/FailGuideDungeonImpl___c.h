#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B908900)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B908940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL___C__ONTRIGGER_B__5_0_OFFSET UNITYSDK_OFFSET(0x1B908950)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int FailGuideDungeonImpl___c_TypeDefinitionIndex = 75083;

	class FailGuideDungeonImpl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityIdleLive::FailGuideDungeonImpl___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::FailGuideDungeonImpl___c**)Il2CppClass::FromTypeDefinitionIndex(FailGuideDungeonImpl___c_TypeDefinitionIndex)->GetStaticField(0x56A50);
		}
		static ::System::Action** StaticGet___9__5_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FailGuideDungeonImpl___c_TypeDefinitionIndex)->GetStaticField(0x56A58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnTrigger_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL___C__ONTRIGGER_B__5_0_OFFSET))(this);
		}
	};
}
