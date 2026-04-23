#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_TRIGGERINSTANTABILITY_METHOD_4_58F32EB10C52B1FD_OFFSET UNITYSDK_OFFSET(0x18DFC7C0)
#define RPG_GAMECORE_ST_SIDE_TRIGGERINSTANTABILITY_METHOD_4_9DB9D614BA5D0FA9_OFFSET UNITYSDK_OFFSET(0x18DFC6F0)
#define RPG_GAMECORE_ST_SIDE_TRIGGERINSTANTABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18DFC770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_TriggerInstantAbility_TypeDefinitionIndex = 19074;

	class ST_Side_TriggerInstantAbility : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean TriggerOnEnter; // 0x18
		::System::String* EnterAbilityName; // 0x20
		::System::Boolean TriggerOnExit; // 0x28
		::System::String* ExitAbilityName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGERINSTANTABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9DB9D614BA5D0FA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_TriggerInstantAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_TriggerInstantAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGERINSTANTABILITY_METHOD_4_9DB9D614BA5D0FA9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_58F32EB10C52B1FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_TriggerInstantAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_TriggerInstantAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGERINSTANTABILITY_METHOD_4_58F32EB10C52B1FD_OFFSET))(a1, a2);
		}
	};
}
