#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }

#define CLASS_1_3B15366F3527444B_METHOD_1_23DCA1A1AA652AEF_OFFSET UNITYSDK_OFFSET(0x11A81B40)
#define CLASS_1_3B15366F3527444B_METHOD_1_72F4BB0EFF106A81_OFFSET UNITYSDK_OFFSET(0x11A814E0)
#define CLASS_1_3B15366F3527444B_METHOD_1_A4DBC3EA2630A2B7_OFFSET UNITYSDK_OFFSET(0x11A817A0)
#define CLASS_1_3B15366F3527444B__CTOR_OFFSET UNITYSDK_OFFSET(0x11A81C30)

inline static constexpr unsigned int Class_1_3B15366F3527444B_TypeDefinitionIndex = 62590;

class Class_1_3B15366F3527444B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B15366F3527444B__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::ScheduleData* Method_1_72F4BB0EFF106A81(::System::UInt32 a1)
	{
		return ((::RPG::Client::ScheduleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3B15366F3527444B_METHOD_1_72F4BB0EFF106A81_OFFSET))(a1);
	}

	static ::RPG::Client::ScheduleData* Method_1_A4DBC3EA2630A2B7(::System::UInt32 a1)
	{
		return ((::RPG::Client::ScheduleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3B15366F3527444B_METHOD_1_A4DBC3EA2630A2B7_OFFSET))(a1);
	}

	static ::RPG::Client::ScheduleData* Method_1_23DCA1A1AA652AEF(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::Client::ScheduleData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3B15366F3527444B_METHOD_1_23DCA1A1AA652AEF_OFFSET))(a1, a2, a3, a4);
	}
};
