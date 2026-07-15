#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1F5DAB3B1DA3CD34;
namespace RPG::Client { class ScheduleModule; }

#define CLASS_1_D4B4346A5EB96462_METHOD_1_324F8F128C154A45_OFFSET UNITYSDK_OFFSET(0x15EA9120)
#define CLASS_1_D4B4346A5EB96462_METHOD_1_633B14F19DB86E4A_OFFSET UNITYSDK_OFFSET(0x15EA90D0)
#define CLASS_1_D4B4346A5EB96462__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA9080)

inline static constexpr unsigned int Class_1_D4B4346A5EB96462_TypeDefinitionIndex = 64894;

class Class_1_D4B4346A5EB96462 : public ::System::Object
{
public:
	::RPG::Client::ScheduleModule* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::ScheduleModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleModule*))((::PBYTE)hIl2Cpp + CLASS_1_D4B4346A5EB96462__CTOR_OFFSET))(this, a1);
	}

	::Class_1_1F5DAB3B1DA3CD34* Method_1_633B14F19DB86E4A(::System::UInt32 a1)
	{
		return ((::Class_1_1F5DAB3B1DA3CD34*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D4B4346A5EB96462_METHOD_1_633B14F19DB86E4A_OFFSET))(this, a1);
	}

	::Class_1_1F5DAB3B1DA3CD34* Method_1_324F8F128C154A45(::System::UInt32 a1)
	{
		return ((::Class_1_1F5DAB3B1DA3CD34*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D4B4346A5EB96462_METHOD_1_324F8F128C154A45_OFFSET))(this, a1);
	}
};
