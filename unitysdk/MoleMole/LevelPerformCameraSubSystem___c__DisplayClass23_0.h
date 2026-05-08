#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7A6F1A858DFA8957.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class LevelPerformCameraSubSystem; }

#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x142933F0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS23_0__REFRESHLEVELPERFORMCAMERA_B__0_OFFSET UNITYSDK_OFFSET(0x14293460)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS23_0__REFRESHLEVELPERFORMCAMERA_B__1_OFFSET UNITYSDK_OFFSET(0x14293470)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS23_0__REFRESHLEVELPERFORMCAMERA_B__2_OFFSET UNITYSDK_OFFSET(0x142934A0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS23_0__REFRESHLEVELPERFORMCAMERA_B__3_OFFSET UNITYSDK_OFFSET(0x14293400)

namespace MoleMole
{
	inline static constexpr unsigned int LevelPerformCameraSubSystem___c__DisplayClass23_0_TypeDefinitionIndex = 58046;

	class LevelPerformCameraSubSystem___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::LevelPerformCameraSubSystem* __4__this; // 0x10
		::Struct_2_7A6F1A858DFA8957 data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RefreshLevelPerformCamera_b__3()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS23_0__REFRESHLEVELPERFORMCAMERA_B__3_OFFSET))(this);
		}

		::System::Single _RefreshLevelPerformCamera_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS23_0__REFRESHLEVELPERFORMCAMERA_B__0_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RefreshLevelPerformCamera_b__1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS23_0__REFRESHLEVELPERFORMCAMERA_B__1_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RefreshLevelPerformCamera_b__2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS23_0__REFRESHLEVELPERFORMCAMERA_B__2_OFFSET))(this);
		}
	};
}
