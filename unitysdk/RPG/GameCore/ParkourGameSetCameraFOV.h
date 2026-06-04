#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARKOURGAMESETCAMERAFOV_METHOD_3_70A51FEFE5CF01A2_OFFSET UNITYSDK_OFFSET(0x199E67E0)
#define RPG_GAMECORE_PARKOURGAMESETCAMERAFOV_METHOD_3_BCCA35A5CA792654_OFFSET UNITYSDK_OFFSET(0x199E6860)
#define RPG_GAMECORE_PARKOURGAMESETCAMERAFOV__CTOR_OFFSET UNITYSDK_OFFSET(0x199E6830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourGameSetCameraFOV_TypeDefinitionIndex = 19833;

	class ParkourGameSetCameraFOV : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single FOV; // 0x18
		::System::Single BlendTime; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURGAMESETCAMERAFOV__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_70A51FEFE5CF01A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParkourGameSetCameraFOV*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParkourGameSetCameraFOV*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURGAMESETCAMERAFOV_METHOD_3_70A51FEFE5CF01A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BCCA35A5CA792654(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParkourGameSetCameraFOV* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParkourGameSetCameraFOV*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURGAMESETCAMERAFOV_METHOD_3_BCCA35A5CA792654_OFFSET))(a1, a2);
		}
	};
}
