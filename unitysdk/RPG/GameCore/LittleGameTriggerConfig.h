#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelTriggerInfo; }

#define RPG_GAMECORE_LITTLEGAMETRIGGERCONFIG_METHOD_3_225374DA18C20100_OFFSET UNITYSDK_OFFSET(0x1735B680)
#define RPG_GAMECORE_LITTLEGAMETRIGGERCONFIG_METHOD_3_DB6A9C56786B1891_OFFSET UNITYSDK_OFFSET(0x17361390)
#define RPG_GAMECORE_LITTLEGAMETRIGGERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1735B660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameTriggerConfig_TypeDefinitionIndex = 17299;

	class LittleGameTriggerConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::LevelTriggerInfo* TriggerInfo; // 0x10
		::System::Boolean TriggerOnce; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETRIGGERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DB6A9C56786B1891(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameTriggerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameTriggerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETRIGGERCONFIG_METHOD_3_DB6A9C56786B1891_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_225374DA18C20100(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameTriggerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameTriggerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETRIGGERCONFIG_METHOD_3_225374DA18C20100_OFFSET))(a1, a2);
		}
	};
}
