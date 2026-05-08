#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS23_1__CTOR_OFFSET UNITYSDK_OFFSET(0x142934C0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS23_1__REFRESHLEVELPERFORMCAMERA_B__4_OFFSET UNITYSDK_OFFSET(0x142934D0)

namespace MoleMole
{
	inline static constexpr unsigned int LevelPerformCameraSubSystem___c__DisplayClass23_1_TypeDefinitionIndex = 58047;

	class LevelPerformCameraSubSystem___c__DisplayClass23_1 : public ::System::Object
	{
	public:
		::System::Single finalYaw; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS23_1__CTOR_OFFSET))(this);
		}

		::System::Single _RefreshLevelPerformCamera_b__4()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS23_1__REFRESHLEVELPERFORMCAMERA_B__4_OFFSET))(this);
		}
	};
}
