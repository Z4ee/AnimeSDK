#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7CEC8DBE7729999B;

#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCA89510)
#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS22_0__FINDTRAINVISITOR_B__0_OFFSET UNITYSDK_OFFSET(0xCA8B010)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainModule___c__DisplayClass22_0_TypeDefinitionIndex = 63772;

	class TrainModule___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::UInt32 behaviorID; // 0x10
		::System::UInt32 visitorID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindTrainVisitor_b__0(::Class_1_7CEC8DBE7729999B* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7CEC8DBE7729999B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS22_0__FINDTRAINVISITOR_B__0_OFFSET))(this, a1);
		}
	};
}
