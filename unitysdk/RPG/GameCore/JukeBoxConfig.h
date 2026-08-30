#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_JUKEBOXCONFIG_METHOD_2_507B219912A33C48_OFFSET UNITYSDK_OFFSET(0x1C10A5B0)
#define RPG_GAMECORE_JUKEBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C10A700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JukeBoxConfig_TypeDefinitionIndex = 16224;

	class JukeBoxConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PlayEvent; // 0x10
		::System::String* SwitchGroup; // 0x18
		::System::String* LoudnessRTPC; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JUKEBOXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_507B219912A33C48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::JukeBoxConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::JukeBoxConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JUKEBOXCONFIG_METHOD_2_507B219912A33C48_OFFSET))(a1, a2);
		}
	};
}
