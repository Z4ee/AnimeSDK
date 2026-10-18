#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameCustomLoadConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG_METHOD_4_256ADB8441473AEC_OFFSET UNITYSDK_OFFSET(0x1D6B7180)
#define RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG_METHOD_4_25FCCAA61D26629C_OFFSET UNITYSDK_OFFSET(0x1D6B7220)
#define RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B71E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCustomLoadConfig_TypeDefinitionIndex = 18608;

	class FiveDimCustomLoadConfig : public ::RPG::GameCore::LittleGameCustomLoadConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_256ADB8441473AEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCustomLoadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCustomLoadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG_METHOD_4_256ADB8441473AEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_25FCCAA61D26629C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCustomLoadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCustomLoadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG_METHOD_4_25FCCAA61D26629C_OFFSET))(a1, a2);
		}
	};
}
