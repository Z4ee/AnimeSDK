#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterEmoConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTEREMOCONTEXTCONFIG_METHOD_2_C05C7A5A72AE568F_OFFSET UNITYSDK_OFFSET(0x1CF94BC0)
#define RPG_GAMECORE_CHARACTEREMOCONTEXTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF95B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterEmoContextConfig_TypeDefinitionIndex = 16341;

	class CharacterEmoContextConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EmoDefaultName; // 0x10
		::System::String* EmoBlinkName; // 0x18
		::System::String* EmoStunName; // 0x20
		::System::String* EmoHitName; // 0x28
		::Il2CppArray<::RPG::GameCore::CharacterEmoConfig*>* Configs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREMOCONTEXTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C05C7A5A72AE568F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterEmoContextConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterEmoContextConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREMOCONTEXTCONFIG_METHOD_2_C05C7A5A72AE568F_OFFSET))(a1, a2);
		}
	};
}
