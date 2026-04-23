#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7CEC8DBE7729999B;

#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB32ED30)
#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS22_0__FINDTRAINVISITOR_B__0_OFFSET UNITYSDK_OFFSET(0xB330730)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainModule___c__DisplayClass22_0_TypeDefinitionIndex = 62838;

	class TrainModule___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::UInt32 visitorID; // 0x10
		::System::UInt32 behaviorID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindTrainVisitor_b__0(::Class_1_7CEC8DBE7729999B* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7CEC8DBE7729999B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS22_0__FINDTRAINVISITOR_B__0_OFFSET))(this, x);
		}
	};
}
