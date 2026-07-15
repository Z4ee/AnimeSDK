#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PingPongGridIndex; }

#define RPG_GAMECORE_PINGPONGTRANSFORMCMPTCONFIG_METHOD_3_8D0B40C6CD967CC6_OFFSET UNITYSDK_OFFSET(0x1B4C9D60)
#define RPG_GAMECORE_PINGPONGTRANSFORMCMPTCONFIG_METHOD_3_D261B1130F33E1CC_OFFSET UNITYSDK_OFFSET(0x1B4C9DC0)
#define RPG_GAMECORE_PINGPONGTRANSFORMCMPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C9DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongTransformCmptConfig_TypeDefinitionIndex = 18184;

	class PingPongTransformCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::PingPongGridIndex* GridIndex; // 0x10
		::System::Single Angle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGTRANSFORMCMPTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8D0B40C6CD967CC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongTransformCmptConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongTransformCmptConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGTRANSFORMCMPTCONFIG_METHOD_3_8D0B40C6CD967CC6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D261B1130F33E1CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongTransformCmptConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongTransformCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGTRANSFORMCMPTCONFIG_METHOD_3_D261B1130F33E1CC_OFFSET))(a1, a2);
		}
	};
}
