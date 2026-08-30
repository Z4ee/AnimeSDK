#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GachaTimelineConfig; }
namespace System { class String; }

#define RPG_GAMECORE_GACHACUTSCENECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DCC2620)
#define RPG_GAMECORE_GACHACUTSCENECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC27C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaCutsceneConfig_TypeDefinitionIndex = 16902;

	class GachaCutsceneConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TicketTrackNameSuffix; // 0x10
		::System::String* RarityTrackNameSuffix; // 0x18
		::System::String* EnviroProfile; // 0x20
		::RPG::GameCore::GachaTimelineConfig* NormalTimelineConfig; // 0x28
		::RPG::GameCore::GachaTimelineConfig* SuperRareTimelineConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACUTSCENECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GachaCutsceneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GachaCutsceneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACUTSCENECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
