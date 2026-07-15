#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleModule; }

#define CLASS_1_1F5DAB3B1DA3CD34_METHOD_1_11CE31714C577590_OFFSET UNITYSDK_OFFSET(0x17D9BC10)
#define CLASS_1_1F5DAB3B1DA3CD34_METHOD_1_72B8A97304045027_OFFSET UNITYSDK_OFFSET(0x17D9BAB0)
#define CLASS_1_1F5DAB3B1DA3CD34__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9BCF0)

inline static constexpr unsigned int Class_1_1F5DAB3B1DA3CD34_TypeDefinitionIndex = 64891;

class Class_1_1F5DAB3B1DA3CD34 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5DAB3B1DA3CD34__CTOR_OFFSET))(this);
	}

	static ::Class_1_1F5DAB3B1DA3CD34* Method_1_72B8A97304045027(::RPG::Client::ScheduleModule* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_1F5DAB3B1DA3CD34*(*)(::RPG::Client::ScheduleModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F5DAB3B1DA3CD34_METHOD_1_72B8A97304045027_OFFSET))(a1, a2);
	}

	static ::Class_1_1F5DAB3B1DA3CD34* Method_1_11CE31714C577590(::RPG::Client::ScheduleModule* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_1F5DAB3B1DA3CD34*(*)(::RPG::Client::ScheduleModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F5DAB3B1DA3CD34_METHOD_1_11CE31714C577590_OFFSET))(a1, a2);
	}
};
