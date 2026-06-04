#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEntityPreset; }

#define RPG_GAMECORE_LITTLEGAMEPRESETCONFIGS_METHOD_2_D99EB94DD1EB7C29_OFFSET UNITYSDK_OFFSET(0x198A1650)
#define RPG_GAMECORE_LITTLEGAMEPRESETCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x198A1770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGamePresetConfigs_TypeDefinitionIndex = 17990;

	class LittleGamePresetConfigs : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameType Type; // 0x10
		::Il2CppArray<::RPG::GameCore::LittleGameEntityPreset*>* Presets; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPRESETCONFIGS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D99EB94DD1EB7C29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGamePresetConfigs*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGamePresetConfigs*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPRESETCONFIGS_METHOD_2_D99EB94DD1EB7C29_OFFSET))(a1, a2);
		}
	};
}
