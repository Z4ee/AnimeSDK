#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7CEC8DBE7729999B;

#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCA89330)
#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS21_0__FINDTRAINVISITORBYGROUP_B__0_OFFSET UNITYSDK_OFFSET(0xCA8AFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainModule___c__DisplayClass21_0_TypeDefinitionIndex = 63771;

	class TrainModule___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::UInt32 groupID; // 0x10
		::System::UInt32 groupNPCID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindTrainVisitorByGroup_b__0(::Class_1_7CEC8DBE7729999B* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7CEC8DBE7729999B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS21_0__FINDTRAINVISITORBYGROUP_B__0_OFFSET))(this, a1);
		}
	};
}
