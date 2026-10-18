#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }

#define CLASS_1_9E7C80988E97DAC9_METHOD_1_338D0B9BA12DDD16_OFFSET UNITYSDK_OFFSET(0xB235730)
#define CLASS_1_9E7C80988E97DAC9_METHOD_1_93F8DD31F13CFB6B_OFFSET UNITYSDK_OFFSET(0xB236170)
#define CLASS_1_9E7C80988E97DAC9_METHOD_1_9CD8E4DD03A9492F_OFFSET UNITYSDK_OFFSET(0xB235C00)
#define CLASS_1_9E7C80988E97DAC9__CTOR_OFFSET UNITYSDK_OFFSET(0xB236430)

inline static constexpr unsigned int Class_1_9E7C80988E97DAC9_TypeDefinitionIndex = 67899;

class Class_1_9E7C80988E97DAC9 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E7C80988E97DAC9__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::ScheduleData* Method_1_338D0B9BA12DDD16(::System::UInt32 a1)
	{
		return ((::RPG::Client::ScheduleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E7C80988E97DAC9_METHOD_1_338D0B9BA12DDD16_OFFSET))(a1);
	}

	static ::RPG::Client::ScheduleData* Method_1_9CD8E4DD03A9492F(::System::UInt32 a1)
	{
		return ((::RPG::Client::ScheduleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E7C80988E97DAC9_METHOD_1_9CD8E4DD03A9492F_OFFSET))(a1);
	}

	static ::RPG::Client::ScheduleData* Method_1_93F8DD31F13CFB6B(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::Client::ScheduleData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E7C80988E97DAC9_METHOD_1_93F8DD31F13CFB6B_OFFSET))(a1, a2, a3, a4);
	}
};
