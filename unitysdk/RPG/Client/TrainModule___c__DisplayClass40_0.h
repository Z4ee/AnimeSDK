#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7CEC8DBE7729999B;

#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E9BE0)
#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS40_0___ADDTRAINVISITOR_B__0_OFFSET UNITYSDK_OFFSET(0xA5EA800)
#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS40_0___ADDTRAINVISITOR_B__1_OFFSET UNITYSDK_OFFSET(0xA5EA830)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainModule___c__DisplayClass40_0_TypeDefinitionIndex = 55643;

	class TrainModule___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::UInt32 behaviorID; // 0x10
		::System::UInt32 visitorID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __AddTrainVisitor_b__0(::Class_1_7CEC8DBE7729999B* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7CEC8DBE7729999B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS40_0___ADDTRAINVISITOR_B__0_OFFSET))(this, x);
		}

		::System::Boolean __AddTrainVisitor_b__1(::Class_1_7CEC8DBE7729999B* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7CEC8DBE7729999B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS40_0___ADDTRAINVISITOR_B__1_OFFSET))(this, x);
		}
	};
}
