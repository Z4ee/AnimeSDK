#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E4B65F41E2EB14EE;

#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE2B9110)
#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS21_0__FINDTRAINVISITOR_B__0_OFFSET UNITYSDK_OFFSET(0xE2BAB40)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainModule___c__DisplayClass21_0_TypeDefinitionIndex = 68156;

	class TrainModule___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::UInt32 behaviorID; // 0x10
		::System::UInt32 visitorID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindTrainVisitor_b__0(::Class_1_E4B65F41E2EB14EE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E4B65F41E2EB14EE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS21_0__FINDTRAINVISITOR_B__0_OFFSET))(this, a1);
		}
	};
}
