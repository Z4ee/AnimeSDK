#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACECELLCOMMONCONFIG_METHOD_2_B9113636119A6DB2_OFFSET UNITYSDK_OFFSET(0x1704A3D0)
#define RPG_GAMECORE_CAKERACECELLCOMMONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1704A4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCellCommonConfig_TypeDefinitionIndex = 16904;

	class CakeRaceCellCommonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PushPlateMoverCDMs; // 0x10
		::System::UInt32 PushPlateMoverDurationMs; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECELLCOMMONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B9113636119A6DB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCellCommonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCellCommonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECELLCOMMONCONFIG_METHOD_2_B9113636119A6DB2_OFFSET))(a1, a2);
		}
	};
}
