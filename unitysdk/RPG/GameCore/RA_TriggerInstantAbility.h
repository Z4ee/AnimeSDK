#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ReactionTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RA_TRIGGERINSTANTABILITY_METHOD_4_53B155005073F8F8_OFFSET UNITYSDK_OFFSET(0x1B9B05D0)
#define RPG_GAMECORE_RA_TRIGGERINSTANTABILITY_METHOD_4_CC0E6546AB35119B_OFFSET UNITYSDK_OFFSET(0x1B9B0590)
#define RPG_GAMECORE_RA_TRIGGERINSTANTABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B05C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_TriggerInstantAbility_TypeDefinitionIndex = 19270;

	class RA_TriggerInstantAbility : public ::RPG::GameCore::ReactionTaskConfig
	{
	public:
		::System::String* AbilityName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_TRIGGERINSTANTABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CC0E6546AB35119B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_TriggerInstantAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_TriggerInstantAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_TRIGGERINSTANTABILITY_METHOD_4_CC0E6546AB35119B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_53B155005073F8F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_TriggerInstantAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_TriggerInstantAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_TRIGGERINSTANTABILITY_METHOD_4_53B155005073F8F8_OFFSET))(a1, a2);
		}
	};
}
