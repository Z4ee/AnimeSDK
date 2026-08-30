#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTEREYEBLOOMCONFIG_METHOD_2_A3FD74AA8597E43E_OFFSET UNITYSDK_OFFSET(0x1CF95D40)
#define RPG_GAMECORE_CHARACTEREYEBLOOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF95F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterEyeBloomConfig_TypeDefinitionIndex = 17256;

	class CharacterEyeBloomConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single EyeBloomIntensity; // 0x10
		::System::Boolean ChangeEyeEffect; // 0x14
		::System::Single EyeEffectProcs; // 0x18
		::System::String* EyeEffectColor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREYEBLOOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A3FD74AA8597E43E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterEyeBloomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterEyeBloomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREYEBLOOMCONFIG_METHOD_2_A3FD74AA8597E43E_OFFSET))(a1, a2);
		}
	};
}
