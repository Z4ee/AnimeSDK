#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTEREMOCONFIG_METHOD_2_6C3A980863AF0727_OFFSET UNITYSDK_OFFSET(0x1960CB60)
#define RPG_GAMECORE_CHARACTEREMOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1960CD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterEmoConfig_TypeDefinitionIndex = 15690;

	class CharacterEmoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::String* EmoDefaultPath; // 0x18
		::System::String* EmoBlinkPath; // 0x20
		::System::String* EmoStunPath; // 0x28
		::System::String* EmoHitPath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREMOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6C3A980863AF0727(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterEmoConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterEmoConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREMOCONFIG_METHOD_2_6C3A980863AF0727_OFFSET))(a1, a2);
		}
	};
}
