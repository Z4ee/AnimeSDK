#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEHALFGRAVITYCONFIG_METHOD_2_FBE18B5D84CABBC3_OFFSET UNITYSDK_OFFSET(0x1CF76790)
#define RPG_GAMECORE_CAKERACEHALFGRAVITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF76E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceHalfGravityConfig_TypeDefinitionIndex = 18190;

	class CakeRaceHalfGravityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PhysicsPercent; // 0x10
		::System::UInt32 DurationPercent; // 0x14
		::System::UInt32 OnEnterParaboleGravityPercent; // 0x18
		::System::UInt32 OnLeaveParaboleGravityPercent; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEHALFGRAVITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FBE18B5D84CABBC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceHalfGravityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceHalfGravityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEHALFGRAVITYCONFIG_METHOD_2_FBE18B5D84CABBC3_OFFSET))(a1, a2);
		}
	};
}
