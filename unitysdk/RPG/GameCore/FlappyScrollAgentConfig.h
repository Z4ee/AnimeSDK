#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FLAPPYSCROLLAGENTCONFIG_METHOD_3_96A0D2D78056F99D_OFFSET UNITYSDK_OFFSET(0x17212AA0)
#define RPG_GAMECORE_FLAPPYSCROLLAGENTCONFIG_METHOD_3_BDEBECBA419ED608_OFFSET UNITYSDK_OFFSET(0x17212B10)
#define RPG_GAMECORE_FLAPPYSCROLLAGENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17212AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FlappyScrollAgentConfig_TypeDefinitionIndex = 17097;

	class FlappyScrollAgentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Single AutoScrollSpeedInit; // 0x10
		::System::Single MaxScrollSpeed; // 0x14
		::System::Single FallGravity; // 0x18
		::System::Single JumpSpeed; // 0x1C
		::System::Single SpeedUp; // 0x20
		::System::Single JumpTargetScrollValue; // 0x24
		::System::Single JumpTriggerScrollValue; // 0x28
		::Il2CppArray<::System::Single>* LevelUpTimes; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYSCROLLAGENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_96A0D2D78056F99D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FlappyScrollAgentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FlappyScrollAgentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYSCROLLAGENTCONFIG_METHOD_3_96A0D2D78056F99D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BDEBECBA419ED608(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FlappyScrollAgentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FlappyScrollAgentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYSCROLLAGENTCONFIG_METHOD_3_BDEBECBA419ED608_OFFSET))(a1, a2);
		}
	};
}
