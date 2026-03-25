#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseCameraConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelTriggerInfo; }

#define RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG_METHOD_4_2727BF0127F100A9_OFFSET UNITYSDK_OFFSET(0x171F87B0)
#define RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG_METHOD_4_6EF575EEFEE4E427_OFFSET UNITYSDK_OFFSET(0x171E0000)
#define RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171DFFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLevelCameraConfig_TypeDefinitionIndex = 17093;

	class FiveDimLevelCameraConfig : public ::RPG::GameCore::FiveDimBaseCameraConfig
	{
	public:
		::System::Boolean CreateTrigger; // 0x90
		::RPG::GameCore::LevelTriggerInfo* TriggerInfo; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2727BF0127F100A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLevelCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLevelCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG_METHOD_4_2727BF0127F100A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6EF575EEFEE4E427(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLevelCameraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLevelCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG_METHOD_4_6EF575EEFEE4E427_OFFSET))(a1, a2);
		}
	};
}
