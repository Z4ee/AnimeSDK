#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesAvatarEmojiEffectInfo; }

#define RPG_GAMECORE_PLANETFESAVATAREMOJIEFFECTCONFIG_METHOD_2_2ADCE1C154A73D76_OFFSET UNITYSDK_OFFSET(0x1B4D1A30)
#define RPG_GAMECORE_PLANETFESAVATAREMOJIEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D1B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarEmojiEffectConfig_TypeDefinitionIndex = 15614;

	class PlanetFesAvatarEmojiEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PlanetFesAvatarEmojiEffectInfo*>* EmojiEffectList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATAREMOJIEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2ADCE1C154A73D76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesAvatarEmojiEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesAvatarEmojiEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATAREMOJIEFFECTCONFIG_METHOD_2_2ADCE1C154A73D76_OFFSET))(a1, a2);
		}
	};
}
