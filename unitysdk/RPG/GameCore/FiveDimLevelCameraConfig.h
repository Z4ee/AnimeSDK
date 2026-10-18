#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseCameraConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelTriggerInfo; }

#define RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG_METHOD_4_E261179D79E6A2FD_OFFSET UNITYSDK_OFFSET(0x1D683EE0)
#define RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG_METHOD_4_FF5EA908A8ECAFAD_OFFSET UNITYSDK_OFFSET(0x1D698480)
#define RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D683EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLevelCameraConfig_TypeDefinitionIndex = 18625;

	class FiveDimLevelCameraConfig : public ::RPG::GameCore::FiveDimBaseCameraConfig
	{
	public:
		::System::Boolean CreateTrigger; // 0x90
		::RPG::GameCore::LevelTriggerInfo* TriggerInfo; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FF5EA908A8ECAFAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLevelCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLevelCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG_METHOD_4_FF5EA908A8ECAFAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E261179D79E6A2FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLevelCameraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLevelCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG_METHOD_4_E261179D79E6A2FD_OFFSET))(a1, a2);
		}
	};
}
