#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_704132FA2B264CA8.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_GET_CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x79AF70)
#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_METHOD_2_34EFA4157E7AE41F_OFFSET UNITYSDK_OFFSET(0x79AFE0)
#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_METHOD_2_3735E71D7B6AFF5B_OFFSET UNITYSDK_OFFSET(0x79B0C0)
#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_METHOD_2_4F602D3B9C6B3EFC_OFFSET UNITYSDK_OFFSET(0x79B160)
#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_METHOD_2_705AF43C01ED360A_OFFSET UNITYSDK_OFFSET(0x79B040)
#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_METHOD_2_76F7CA8BB59F9F60_1_OFFSET UNITYSDK_OFFSET(0x79B170)
#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_METHOD_2_76F7CA8BB59F9F60_OFFSET UNITYSDK_OFFSET(0x79B150)
#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x79AFF0)
#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x79AF80)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VCameraAxisState_TypeDefinitionIndex = 76065;

	struct alignas(4) VCameraAxisState
	{
		::System::Single Value; // 0x10
		::System::Single m_MaxSpeed; // 0x14
		::System::Single m_AccelTime; // 0x18
		::System::Single m_DecelTime; // 0x1C
		::System::Boolean m_InvertInput; // 0x20
		::System::Single m_MinValue; // 0x24
		::System::Single m_MaxValue; // 0x28
		::System::Boolean m_Wrap; // 0x2C
		::System::Single mCurrentSpeed; // 0x30
		::Enum_3_704132FA2B264CA8 _vCameraAxisType; // 0x34

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::String* a7, ::System::Boolean a8, ::Enum_3_704132FA2B264CA8 a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::Boolean, ::Enum_3_704132FA2B264CA8))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Single get_CurrentSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_GET_CURRENTSPEED_OFFSET))(this);
		}

		::System::Boolean Method_2_34EFA4157E7AE41F(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_METHOD_2_34EFA4157E7AE41F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Single Method_2_705AF43C01ED360A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_METHOD_2_705AF43C01ED360A_OFFSET))(this);
		}

		::System::Boolean Method_2_3735E71D7B6AFF5B(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_METHOD_2_3735E71D7B6AFF5B_OFFSET))(this, a1, a2);
		}

		::System::Single Method_2_76F7CA8BB59F9F60()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_METHOD_2_76F7CA8BB59F9F60_OFFSET))(this);
		}

		::System::Single Method_2_4F602D3B9C6B3EFC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_METHOD_2_4F602D3B9C6B3EFC_OFFSET))(this);
		}

		::System::Single Method_2_76F7CA8BB59F9F60_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_METHOD_2_76F7CA8BB59F9F60_1_OFFSET))(this);
		}
	};
}
