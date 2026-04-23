#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_NPCMONSTERHINTSOUNDCONFIG_METHOD_2_444D8C614016AC02_OFFSET UNITYSDK_OFFSET(0x18B79E60)
#define RPG_GAMECORE_NPCMONSTERHINTSOUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18B79F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCMonsterHintSoundConfig_TypeDefinitionIndex = 16581;

	class NPCMonsterHintSoundConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* HintSoundEvent; // 0x10
		::System::Single TriggerRange; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERHINTSOUNDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_444D8C614016AC02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NPCMonsterHintSoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCMonsterHintSoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERHINTSOUNDCONFIG_METHOD_2_444D8C614016AC02_OFFSET))(a1, a2);
		}
	};
}
