#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETLOOPSCENECAMERASPEED_METHOD_3_0E897A5C1585F0D9_OFFSET UNITYSDK_OFFSET(0x1C5FF2A0)
#define RPG_GAMECORE_SETLOOPSCENECAMERASPEED_METHOD_3_C671CCD5A698A68E_OFFSET UNITYSDK_OFFSET(0x1C5FF2E0)
#define RPG_GAMECORE_SETLOOPSCENECAMERASPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FF2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLoopSceneCameraSpeed_TypeDefinitionIndex = 19648;

	class SetLoopSceneCameraSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single MoveSpeed; // 0x18
		::System::Single Duration; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPSCENECAMERASPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E897A5C1585F0D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLoopSceneCameraSpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLoopSceneCameraSpeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPSCENECAMERASPEED_METHOD_3_0E897A5C1585F0D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C671CCD5A698A68E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLoopSceneCameraSpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLoopSceneCameraSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPSCENECAMERASPEED_METHOD_3_C671CCD5A698A68E_OFFSET))(a1, a2);
		}
	};
}
