#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGAISMOOTHCONFIG_METHOD_2_5397766EC142C9B4_OFFSET UNITYSDK_OFFSET(0x1E005220)
#define RPG_GAMECORE_CHENLINGAISMOOTHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E005490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingAISmoothConfig_TypeDefinitionIndex = 15524;

	class ChenLingAISmoothConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MinVelocityThreshold; // 0x10
		::System::Single VelocitySmoothness; // 0x14
		::System::Single RotationSmoothness; // 0x18
		::System::Single MaxAngularSpeed; // 0x1C
		::System::Single AlignmentRadius; // 0x20
		::System::Single SeparationRadius; // 0x24
		::System::Single ArriveSlowingDistance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGAISMOOTHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5397766EC142C9B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingAISmoothConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingAISmoothConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGAISMOOTHCONFIG_METHOD_2_5397766EC142C9B4_OFFSET))(a1, a2);
		}
	};
}
