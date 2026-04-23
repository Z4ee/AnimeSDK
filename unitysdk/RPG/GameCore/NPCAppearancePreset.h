#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectConfig; }
namespace System { class String; }

#define RPG_GAMECORE_NPCAPPEARANCEPRESET_METHOD_2_399D005045C6C2FC_OFFSET UNITYSDK_OFFSET(0x18B77990)
#define RPG_GAMECORE_NPCAPPEARANCEPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x18B77B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCAppearancePreset_TypeDefinitionIndex = 16569;

	class NPCAppearancePreset : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::Il2CppArray<::System::String*>* OverrideReplaceMaterialKeyList; // 0x18
		::System::String* SFXOnLoad; // 0x20
		::Il2CppArray<::RPG::GameCore::EffectConfig*>* AdditiveResidentEffect; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCAPPEARANCEPRESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_399D005045C6C2FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NPCAppearancePreset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCAppearancePreset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCAPPEARANCEPRESET_METHOD_2_399D005045C6C2FC_OFFSET))(a1, a2);
		}
	};
}
