#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/SchedulerType.h"
#include "unitysdk/System/Object.h"

class Class_1_B55A056072768C34;

#define CLASS_1_8A42BF5C39EA2E4C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E93490)
#define CLASS_1_8A42BF5C39EA2E4C_METHOD_1_427ED23FF80CB8D2_OFFSET UNITYSDK_OFFSET(0x18E93770)
#define CLASS_1_8A42BF5C39EA2E4C_METHOD_1_8DDD6A2E9CD212B1_OFFSET UNITYSDK_OFFSET(0x18E936A0)
#define CLASS_1_8A42BF5C39EA2E4C_METHOD_1_E4A2B2F96A8B6FFF_OFFSET UNITYSDK_OFFSET(0x18E93670)
#define CLASS_1_8A42BF5C39EA2E4C__CTOR_OFFSET UNITYSDK_OFFSET(0x18E93330)

inline static constexpr unsigned int Class_1_8A42BF5C39EA2E4C_TypeDefinitionIndex = 40413;

class Class_1_8A42BF5C39EA2E4C : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_B55A056072768C34*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A42BF5C39EA2E4C__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A42BF5C39EA2E4C_DISPOSE_OFFSET))(this);
	}

	::Class_1_B55A056072768C34* Method_1_E4A2B2F96A8B6FFF(::RPG::Client::Multithread::SchedulerType a1)
	{
		return ((::Class_1_B55A056072768C34*(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType))((::PBYTE)hIl2Cpp + CLASS_1_8A42BF5C39EA2E4C_METHOD_1_E4A2B2F96A8B6FFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_8DDD6A2E9CD212B1(::RPG::Client::Multithread::SchedulerType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType))((::PBYTE)hIl2Cpp + CLASS_1_8A42BF5C39EA2E4C_METHOD_1_8DDD6A2E9CD212B1_OFFSET))(this, a1);
	}

	::System::Void Method_1_427ED23FF80CB8D2(::RPG::Client::Multithread::SchedulerType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType))((::PBYTE)hIl2Cpp + CLASS_1_8A42BF5C39EA2E4C_METHOD_1_427ED23FF80CB8D2_OFFSET))(this, a1);
	}
};
