#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NPCAppearancePreset; }

#define RPG_GAMECORE_NPCAPPEARANCEPRESETLIST_METHOD_2_831F2C4E4A4C3DEB_OFFSET UNITYSDK_OFFSET(0x1CE86D00)
#define RPG_GAMECORE_NPCAPPEARANCEPRESETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE86DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCAppearancePresetList_TypeDefinitionIndex = 17264;

	class NPCAppearancePresetList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::NPCAppearancePreset*>* Presets; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCAPPEARANCEPRESETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_831F2C4E4A4C3DEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NPCAppearancePresetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCAppearancePresetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCAPPEARANCEPRESETLIST_METHOD_2_831F2C4E4A4C3DEB_OFFSET))(a1, a2);
		}
	};
}
