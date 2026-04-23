#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSICRHYTHMNOTETEMPLATECONFIG_METHOD_2_96A905891A2253AF_OFFSET UNITYSDK_OFFSET(0x18B758C0)
#define RPG_GAMECORE_MUSICRHYTHMNOTETEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18B75900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmNoteTemplateConfig_TypeDefinitionIndex = 16058;

	class MusicRhythmNoteTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMNOTETEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_96A905891A2253AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MusicRhythmNoteTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MusicRhythmNoteTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMNOTETEMPLATECONFIG_METHOD_2_96A905891A2253AF_OFFSET))(a1, a2);
		}
	};
}
