#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SpaceType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_NAPINPUT_ATTITUDE_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x144F9920)
#define MOLEMOLE_NAPINPUT_ATTITUDE_METHOD_2_05C3ACA9AE10876A_OFFSET UNITYSDK_OFFSET(0x144F9A30)
#define MOLEMOLE_NAPINPUT_ATTITUDE_METHOD_2_2E2C21D9BC20BA87_OFFSET UNITYSDK_OFFSET(0x144F9F40)
#define MOLEMOLE_NAPINPUT_ATTITUDE_METHOD_2_9A938B5464DE9795_1_OFFSET UNITYSDK_OFFSET(0x144F9EB0)
#define MOLEMOLE_NAPINPUT_ATTITUDE_METHOD_2_9A938B5464DE9795_OFFSET UNITYSDK_OFFSET(0x144F99A0)

namespace MoleMole::NAPInput
{
	inline static constexpr unsigned int Attitude_TypeDefinitionIndex = 53806;

	struct alignas(4) Attitude
	{
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Quaternion Rotation; // 0x1C

		static ::MoleMole::NAPInput::Attitude get_Empty()
		{
			return ((::MoleMole::NAPInput::Attitude(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_NAPINPUT_ATTITUDE_GET_EMPTY_OFFSET))();
		}

		static ::MoleMole::NAPInput::Attitude Method_2_9A938B5464DE9795(::MoleMole::NAPInput::Attitude& a1, ::MoleMole::NAPInput::Attitude& a2, ::Foundation::SpaceType a3)
		{
			return ((::MoleMole::NAPInput::Attitude(*)(::MoleMole::NAPInput::Attitude&, ::MoleMole::NAPInput::Attitude&, ::Foundation::SpaceType))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPINPUT_ATTITUDE_METHOD_2_9A938B5464DE9795_OFFSET))(a1, a2, a3);
		}

		static ::MoleMole::NAPInput::Attitude Method_2_9A938B5464DE9795_1(::MoleMole::NAPInput::Attitude& a1, ::MoleMole::NAPInput::Attitude& a2, ::Foundation::SpaceType a3)
		{
			return ((::MoleMole::NAPInput::Attitude(*)(::MoleMole::NAPInput::Attitude&, ::MoleMole::NAPInput::Attitude&, ::Foundation::SpaceType))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPINPUT_ATTITUDE_METHOD_2_9A938B5464DE9795_1_OFFSET))(a1, a2, a3);
		}

		static ::MoleMole::NAPInput::Attitude Method_2_05C3ACA9AE10876A(::MoleMole::NAPInput::Attitude& a1, ::MoleMole::NAPInput::Attitude& a2, ::Foundation::SpaceType a3)
		{
			return ((::MoleMole::NAPInput::Attitude(*)(::MoleMole::NAPInput::Attitude&, ::MoleMole::NAPInput::Attitude&, ::Foundation::SpaceType))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPINPUT_ATTITUDE_METHOD_2_05C3ACA9AE10876A_OFFSET))(a1, a2, a3);
		}

		static ::MoleMole::NAPInput::Attitude Method_2_2E2C21D9BC20BA87(::MoleMole::NAPInput::Attitude& a1, ::MoleMole::NAPInput::Attitude& a2, ::Foundation::SpaceType a3)
		{
			return ((::MoleMole::NAPInput::Attitude(*)(::MoleMole::NAPInput::Attitude&, ::MoleMole::NAPInput::Attitude&, ::Foundation::SpaceType))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPINPUT_ATTITUDE_METHOD_2_2E2C21D9BC20BA87_OFFSET))(a1, a2, a3);
		}
	};
}
