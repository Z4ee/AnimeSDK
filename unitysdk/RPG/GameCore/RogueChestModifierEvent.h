#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/RPG/GameCore/ModifierTriggerType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECHESTMODIFIEREVENT_METHOD_2_345CA33702013629_OFFSET UNITYSDK_OFFSET(0x18CF4B80)
#define RPG_GAMECORE_ROGUECHESTMODIFIEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF4E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueChestModifierEvent_TypeDefinitionIndex = 17006;

	class RogueChestModifierEvent : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ModifierTriggerType TriggerType; // 0x10
		::Il2CppArray<::System::Int32>* TriggerParamList; // 0x18
		::RPG::GameCore::ModifierEffectType EffectType; // 0x20
		::Il2CppArray<::System::Int32>* EffectParamList; // 0x28
		::Il2CppArray<::System::Int32>* EffectParam2List; // 0x30
		::System::Single Weight; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTMODIFIEREVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_345CA33702013629(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueChestModifierEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueChestModifierEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTMODIFIEREVENT_METHOD_2_345CA33702013629_OFFSET))(a1, a2);
		}
	};
}
