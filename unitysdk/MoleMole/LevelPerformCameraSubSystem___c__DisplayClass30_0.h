#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6B3AF550BFF57BDB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class LevelPerformCameraSubSystem; }

#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1914D090)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS30_0__REFRESHLEVELPERFORMCAMERA_B__0_OFFSET UNITYSDK_OFFSET(0x1914D100)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS30_0__REFRESHLEVELPERFORMCAMERA_B__1_OFFSET UNITYSDK_OFFSET(0x1914D110)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS30_0__REFRESHLEVELPERFORMCAMERA_B__2_OFFSET UNITYSDK_OFFSET(0x1914D140)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS30_0__REFRESHLEVELPERFORMCAMERA_B__3_OFFSET UNITYSDK_OFFSET(0x1914D0A0)

namespace MoleMole
{
	inline static constexpr unsigned int LevelPerformCameraSubSystem___c__DisplayClass30_0_TypeDefinitionIndex = 85054;

	class LevelPerformCameraSubSystem___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::Struct_2_6B3AF550BFF57BDB data; // 0x10
		::MoleMole::LevelPerformCameraSubSystem* __4__this; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RefreshLevelPerformCamera_b__3()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS30_0__REFRESHLEVELPERFORMCAMERA_B__3_OFFSET))(this);
		}

		::System::Single _RefreshLevelPerformCamera_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS30_0__REFRESHLEVELPERFORMCAMERA_B__0_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RefreshLevelPerformCamera_b__1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS30_0__REFRESHLEVELPERFORMCAMERA_B__1_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RefreshLevelPerformCamera_b__2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS30_0__REFRESHLEVELPERFORMCAMERA_B__2_OFFSET))(this);
		}
	};
}
