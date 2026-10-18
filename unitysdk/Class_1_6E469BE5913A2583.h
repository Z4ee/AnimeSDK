#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1360;
namespace RPG::Client { class FeatureSwitchModule; }
namespace RPG::Client { class ScheduleData; }

#define CLASS_1_6E469BE5913A2583_METHOD_1_469E2980E1F15099_OFFSET UNITYSDK_OFFSET(0xDA22500)
#define CLASS_1_6E469BE5913A2583_METHOD_1_9905C77CD94F9678_OFFSET UNITYSDK_OFFSET(0xDA225E0)
#define CLASS_1_6E469BE5913A2583_METHOD_1_BB05FDE80219FE51_OFFSET UNITYSDK_OFFSET(0xDA22340)
#define CLASS_1_6E469BE5913A2583__CTOR_OFFSET UNITYSDK_OFFSET(0xDA222F0)

inline static constexpr unsigned int Class_1_6E469BE5913A2583_TypeDefinitionIndex = 74924;

class Class_1_6E469BE5913A2583 : public ::System::Object
{
public:
	::RPG::Client::FeatureSwitchModule* OOBAFGIEEPM; // 0x10

	::System::Void _ctor(::RPG::Client::FeatureSwitchModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FeatureSwitchModule*))((::PBYTE)hIl2Cpp + CLASS_1_6E469BE5913A2583__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1360* Method_1_BB05FDE80219FE51(::System::UInt32 a1, ::RPG::Client::ScheduleData* a2)
	{
		return ((::Class_0_16E4307DCC419505_1360*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + CLASS_1_6E469BE5913A2583_METHOD_1_BB05FDE80219FE51_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_1360* Method_1_469E2980E1F15099(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_1360*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6E469BE5913A2583_METHOD_1_469E2980E1F15099_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1360* Method_1_9905C77CD94F9678(::RPG::Client::ScheduleData* a1)
	{
		return ((::Class_0_16E4307DCC419505_1360*(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + CLASS_1_6E469BE5913A2583_METHOD_1_9905C77CD94F9678_OFFSET))(this, a1);
	}
};
