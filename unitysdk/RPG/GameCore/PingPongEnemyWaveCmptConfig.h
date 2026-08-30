#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PINGPONGENEMYWAVECMPTCONFIG_METHOD_3_1A88852B04AF5D98_OFFSET UNITYSDK_OFFSET(0x1D78E270)
#define RPG_GAMECORE_PINGPONGENEMYWAVECMPTCONFIG_METHOD_3_FA274DC25D63A2E4_OFFSET UNITYSDK_OFFSET(0x1D78E1A0)
#define RPG_GAMECORE_PINGPONGENEMYWAVECMPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D78E260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyWaveCmptConfig_TypeDefinitionIndex = 18711;

	class PingPongEnemyWaveCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 WaveIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYWAVECMPTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FA274DC25D63A2E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyWaveCmptConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyWaveCmptConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYWAVECMPTCONFIG_METHOD_3_FA274DC25D63A2E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A88852B04AF5D98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyWaveCmptConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyWaveCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYWAVECMPTCONFIG_METHOD_3_1A88852B04AF5D98_OFFSET))(a1, a2);
		}
	};
}
