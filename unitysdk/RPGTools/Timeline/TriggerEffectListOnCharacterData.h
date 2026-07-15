#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class TriggerEffectListOnCharacter; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_TRIGGEREFFECTLISTONCHARACTERDATA_METHOD_1_13A1DC5E9070BB8D_OFFSET UNITYSDK_OFFSET(0x19F56930)
#define RPGTOOLS_TIMELINE_TRIGGEREFFECTLISTONCHARACTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F569F0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TriggerEffectListOnCharacterData_TypeDefinitionIndex = 46550;

	class TriggerEffectListOnCharacterData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::Il2CppArray<::RPG::GameCore::EffectConfig*>* EffectList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGEREFFECTLISTONCHARACTERDATA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::TriggerEffectListOnCharacter* Method_1_13A1DC5E9070BB8D()
		{
			return ((::RPG::GameCore::TriggerEffectListOnCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGEREFFECTLISTONCHARACTERDATA_METHOD_1_13A1DC5E9070BB8D_OFFSET))(this);
		}
	};
}
