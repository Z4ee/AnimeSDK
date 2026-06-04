#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMWATERREFLECTIONLEVELCONFIG_METHOD_2_E612BD7313D289EA_OFFSET UNITYSDK_OFFSET(0x1975E320)
#define RPG_GAMECORE_FIVEDIMWATERREFLECTIONLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1975E520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimWaterReflectionLevelConfig_TypeDefinitionIndex = 17622;

	class FiveDimWaterReflectionLevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* WaterUniqueName; // 0x10
		::System::String* MatPath; // 0x18
		::System::String* MatPath_LowQuality; // 0x20
		::System::Boolean UseNearCameraFade; // 0x28
		::System::Single NearCameraFadeOffset; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWATERREFLECTIONLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E612BD7313D289EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimWaterReflectionLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimWaterReflectionLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWATERREFLECTIONLEVELCONFIG_METHOD_2_E612BD7313D289EA_OFFSET))(a1, a2);
		}
	};
}
