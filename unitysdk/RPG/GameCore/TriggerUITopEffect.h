#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/UITopEffectType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERUITOPEFFECT_METHOD_3_206557BA4B24B5C0_OFFSET UNITYSDK_OFFSET(0x190CE650)
#define RPG_GAMECORE_TRIGGERUITOPEFFECT_METHOD_3_64ECB840827D45EC_OFFSET UNITYSDK_OFFSET(0x190CE720)
#define RPG_GAMECORE_TRIGGERUITOPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x190CE6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerUITopEffect_TypeDefinitionIndex = 22103;

	class TriggerUITopEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ModifierName; // 0x20
		::RPG::GameCore::UITopEffectType Type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUITOPEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_206557BA4B24B5C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerUITopEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerUITopEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUITOPEFFECT_METHOD_3_206557BA4B24B5C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_64ECB840827D45EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerUITopEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerUITopEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUITOPEFFECT_METHOD_3_64ECB840827D45EC_OFFSET))(a1, a2);
		}
	};
}
