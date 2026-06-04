#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class TriggerEffectListOnCharacter; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_TRIGGEREFFECTLISTONCHARACTERDATA_METHOD_1_95AFCE0225BD2881_OFFSET UNITYSDK_OFFSET(0xD0660B0)
#define RPGTOOLS_TIMELINE_TRIGGEREFFECTLISTONCHARACTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD066190)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TriggerEffectListOnCharacterData_TypeDefinitionIndex = 45616;

	class TriggerEffectListOnCharacterData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::Il2CppArray<::RPG::GameCore::EffectConfig*>* EffectList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGEREFFECTLISTONCHARACTERDATA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::TriggerEffectListOnCharacter* Method_1_95AFCE0225BD2881()
		{
			return ((::RPG::GameCore::TriggerEffectListOnCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGEREFFECTLISTONCHARACTERDATA_METHOD_1_95AFCE0225BD2881_OFFSET))(this);
		}
	};
}
