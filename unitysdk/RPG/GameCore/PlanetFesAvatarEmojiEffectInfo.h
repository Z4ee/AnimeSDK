#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESAVATAREMOJIEFFECTINFO_METHOD_2_8D9CD05C4DAB0F81_OFFSET UNITYSDK_OFFSET(0x1B4D1B30)
#define RPG_GAMECORE_PLANETFESAVATAREMOJIEFFECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D1CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarEmojiEffectInfo_TypeDefinitionIndex = 15613;

	class PlanetFesAvatarEmojiEffectInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 EffectID; // 0x10
		::System::Single Duration; // 0x14
		::System::String* EmojiEffectPrefabPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATAREMOJIEFFECTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8D9CD05C4DAB0F81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesAvatarEmojiEffectInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesAvatarEmojiEffectInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATAREMOJIEFFECTINFO_METHOD_2_8D9CD05C4DAB0F81_OFFSET))(a1, a2);
		}
	};
}
