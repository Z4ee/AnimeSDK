#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CC12BEA64A5FD961;

#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB32BFD0)
#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS3_0__FINDTRAINPASSENGER_B__0_OFFSET UNITYSDK_OFFSET(0xB330760)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainModule___c__DisplayClass3_0_TypeDefinitionIndex = 62839;

	class TrainModule___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 passengerID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindTrainPassenger_b__0(::Class_1_CC12BEA64A5FD961* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_CC12BEA64A5FD961*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS3_0__FINDTRAINPASSENGER_B__0_OFFSET))(this, x);
		}
	};
}
