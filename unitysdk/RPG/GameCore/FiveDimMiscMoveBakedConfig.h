#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMISCMOVEBAKEDCONFIG_METHOD_2_F665E9D73B27B6FA_OFFSET UNITYSDK_OFFSET(0x171FB200)
#define RPG_GAMECORE_FIVEDIMMISCMOVEBAKEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171FB3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMiscMoveBakedConfig_TypeDefinitionIndex = 15264;

	class FiveDimMiscMoveBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single PipePortalSpeed; // 0x10
		::RPG::MVector3 BeatBackInitVelocity; // 0x14
		::RPG::MVector3 MascotBeatBackInitVelocity; // 0x20
		::System::Single MascotBeatBackSpeedLerpDuration; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISCMOVEBAKEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F665E9D73B27B6FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMiscMoveBakedConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMiscMoveBakedConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISCMOVEBAKEDCONFIG_METHOD_2_F665E9D73B27B6FA_OFFSET))(a1, a2);
		}
	};
}
