#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAAXISSTATE_GET_MCURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x3AB430)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAAXISSTATE_METHOD_2_7395EEBD9E4D21B1_OFFSET UNITYSDK_OFFSET(0x77D120)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAAXISSTATE_SET_MCURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x50C890)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAAXISSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x77D100)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int OverShoulderCameraAxisState_TypeDefinitionIndex = 55382;

	struct alignas(4) OverShoulderCameraAxisState
	{
		// static const ::System::Single Epsilon; // 0x0
		::System::Single m_AccelTime; // 0x10
		::System::Single m_DecelTime; // 0x14
		::System::Single _mCurrentSpeed_k__BackingField; // 0x18

		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAAXISSTATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_mCurrentSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAAXISSTATE_GET_MCURRENTSPEED_OFFSET))(this);
		}

		::System::Void set_mCurrentSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAAXISSTATE_SET_MCURRENTSPEED_OFFSET))(this, a1);
		}

		::System::Void Method_2_7395EEBD9E4D21B1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAAXISSTATE_METHOD_2_7395EEBD9E4D21B1_OFFSET))(this, a1, a2);
		}
	};
}
