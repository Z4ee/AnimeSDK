#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CCBBABD99E8F254F;

#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDCD710)
#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS3_0__FINDTRAINPASSENGER_B__0_OFFSET UNITYSDK_OFFSET(0x1BDCD720)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainModule___c__DisplayClass3_0_TypeDefinitionIndex = 68149;

	class TrainModule___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 passengerID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindTrainPassenger_b__0(::Class_1_CCBBABD99E8F254F* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_CCBBABD99E8F254F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS3_0__FINDTRAINPASSENGER_B__0_OFFSET))(this, a1);
		}
	};
}
