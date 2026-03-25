#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETABILITYTAGMAPPING_METHOD_3_476C7E6C2BE4AF44_OFFSET UNITYSDK_OFFSET(0x176A4090)
#define RPG_GAMECORE_SETABILITYTAGMAPPING_METHOD_3_A27F0B3DEF9A31A1_OFFSET UNITYSDK_OFFSET(0x176A4110)
#define RPG_GAMECORE_SETABILITYTAGMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x176A40E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAbilityTagMapping_TypeDefinitionIndex = 20900;

	class SetAbilityTagMapping : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::JsonEnum* AbilityTag; // 0x20
		::RPG::GameCore::DynamicString* AbilityName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETABILITYTAGMAPPING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_476C7E6C2BE4AF44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAbilityTagMapping*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAbilityTagMapping*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETABILITYTAGMAPPING_METHOD_3_476C7E6C2BE4AF44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A27F0B3DEF9A31A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAbilityTagMapping* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAbilityTagMapping*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETABILITYTAGMAPPING_METHOD_3_A27F0B3DEF9A31A1_OFFSET))(a1, a2);
		}
	};
}
