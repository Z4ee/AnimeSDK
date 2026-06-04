#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }

#define CLASS_1_3B15366F3527444B_METHOD_1_1D01B96958F69741_OFFSET UNITYSDK_OFFSET(0x143D4BF0)
#define CLASS_1_3B15366F3527444B_METHOD_1_23DCA1A1AA652AEF_OFFSET UNITYSDK_OFFSET(0x143D5210)
#define CLASS_1_3B15366F3527444B_METHOD_1_A490423A3A6E47AE_OFFSET UNITYSDK_OFFSET(0x143D4EB0)
#define CLASS_1_3B15366F3527444B__CTOR_OFFSET UNITYSDK_OFFSET(0x143D5300)

inline static constexpr unsigned int Class_1_3B15366F3527444B_TypeDefinitionIndex = 63523;

class Class_1_3B15366F3527444B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B15366F3527444B__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::ScheduleData* Method_1_1D01B96958F69741(::System::UInt32 a1)
	{
		return ((::RPG::Client::ScheduleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3B15366F3527444B_METHOD_1_1D01B96958F69741_OFFSET))(a1);
	}

	static ::RPG::Client::ScheduleData* Method_1_A490423A3A6E47AE(::System::UInt32 a1)
	{
		return ((::RPG::Client::ScheduleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3B15366F3527444B_METHOD_1_A490423A3A6E47AE_OFFSET))(a1);
	}

	static ::RPG::Client::ScheduleData* Method_1_23DCA1A1AA652AEF(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::Client::ScheduleData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3B15366F3527444B_METHOD_1_23DCA1A1AA652AEF_OFFSET))(a1, a2, a3, a4);
	}
};
