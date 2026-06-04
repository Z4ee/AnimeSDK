#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4B50BA75BDDE7D5;

#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCA86280)
#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS3_0__FINDTRAINPASSENGER_B__0_OFFSET UNITYSDK_OFFSET(0xCA8B040)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainModule___c__DisplayClass3_0_TypeDefinitionIndex = 63773;

	class TrainModule___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 passengerID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindTrainPassenger_b__0(::Class_1_B4B50BA75BDDE7D5* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B4B50BA75BDDE7D5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS3_0__FINDTRAINPASSENGER_B__0_OFFSET))(this, a1);
		}
	};
}
