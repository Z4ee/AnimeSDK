#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS30_1__CTOR_OFFSET UNITYSDK_OFFSET(0x118E11C0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS30_1__REFRESHLEVELPERFORMCAMERA_B__4_OFFSET UNITYSDK_OFFSET(0x118E11D0)

namespace MoleMole
{
	inline static constexpr unsigned int LevelPerformCameraSubSystem___c__DisplayClass30_1_TypeDefinitionIndex = 60912;

	class LevelPerformCameraSubSystem___c__DisplayClass30_1 : public ::System::Object
	{
	public:
		::System::Single finalYaw; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS30_1__CTOR_OFFSET))(this);
		}

		::System::Single _RefreshLevelPerformCamera_b__4()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS30_1__REFRESHLEVELPERFORMCAMERA_B__4_OFFSET))(this);
		}
	};
}
