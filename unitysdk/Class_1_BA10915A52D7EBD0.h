#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }

#define CLASS_1_BA10915A52D7EBD0_METHOD_1_83D43A6414E20939_OFFSET UNITYSDK_OFFSET(0x16943900)
#define CLASS_1_BA10915A52D7EBD0_METHOD_1_BF8472729B6DCD56_OFFSET UNITYSDK_OFFSET(0x16943550)
#define CLASS_1_BA10915A52D7EBD0_METHOD_1_F361F0282DF147BD_OFFSET UNITYSDK_OFFSET(0x16943D90)
#define CLASS_1_BA10915A52D7EBD0__CTOR_OFFSET UNITYSDK_OFFSET(0x16943FE0)

inline static constexpr unsigned int Class_1_BA10915A52D7EBD0_TypeDefinitionIndex = 67897;

class Class_1_BA10915A52D7EBD0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA10915A52D7EBD0__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::ScheduleData* Method_1_BF8472729B6DCD56(::System::UInt32 a1)
	{
		return ((::RPG::Client::ScheduleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA10915A52D7EBD0_METHOD_1_BF8472729B6DCD56_OFFSET))(a1);
	}

	static ::RPG::Client::ScheduleData* Method_1_83D43A6414E20939(::System::UInt32 a1)
	{
		return ((::RPG::Client::ScheduleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA10915A52D7EBD0_METHOD_1_83D43A6414E20939_OFFSET))(a1);
	}

	static ::RPG::Client::ScheduleData* Method_1_F361F0282DF147BD(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::Client::ScheduleData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA10915A52D7EBD0_METHOD_1_F361F0282DF147BD_OFFSET))(a1, a2, a3, a4);
	}
};
