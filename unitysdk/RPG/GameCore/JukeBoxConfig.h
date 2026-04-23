#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_JUKEBOXCONFIG_METHOD_2_EE65A48A9C8E658C_OFFSET UNITYSDK_OFFSET(0x18A39730)
#define RPG_GAMECORE_JUKEBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A39950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JukeBoxConfig_TypeDefinitionIndex = 15515;

	class JukeBoxConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 FloorID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 PropID; // 0x18
		::System::String* PlayEvent; // 0x20
		::System::String* SwitchGroup; // 0x28
		::System::String* LoudnessRTPC; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JUKEBOXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EE65A48A9C8E658C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::JukeBoxConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::JukeBoxConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JUKEBOXCONFIG_METHOD_2_EE65A48A9C8E658C_OFFSET))(a1, a2);
		}
	};
}
