#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGEREFFECTLISTONCHARACTER_METHOD_3_9A571E746DC07165_OFFSET UNITYSDK_OFFSET(0x19E13DA0)
#define RPG_GAMECORE_TRIGGEREFFECTLISTONCHARACTER_METHOD_3_B3BDEF99C7D3ED29_OFFSET UNITYSDK_OFFSET(0x19E13D20)
#define RPG_GAMECORE_TRIGGEREFFECTLISTONCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E13D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffectListOnCharacter_TypeDefinitionIndex = 20691;

	class TriggerEffectListOnCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::Il2CppArray<::RPG::GameCore::EffectConfig*>* EffectList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTONCHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B3BDEF99C7D3ED29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectListOnCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectListOnCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTONCHARACTER_METHOD_3_B3BDEF99C7D3ED29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9A571E746DC07165(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectListOnCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectListOnCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTONCHARACTER_METHOD_3_9A571E746DC07165_OFFSET))(a1, a2);
		}
	};
}
