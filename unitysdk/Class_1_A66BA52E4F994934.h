#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/SchedulerType.h"
#include "unitysdk/System/Object.h"

class Class_1_B55A056072768C34;

#define CLASS_1_A66BA52E4F994934_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A554F0)
#define CLASS_1_A66BA52E4F994934_METHOD_1_2B0C2B8E1505D946_OFFSET UNITYSDK_OFFSET(0x16A55710)
#define CLASS_1_A66BA52E4F994934_METHOD_1_DCA8152954D7F3F1_OFFSET UNITYSDK_OFFSET(0x16A557E0)
#define CLASS_1_A66BA52E4F994934_METHOD_1_E4A2B2F96A8B6FFF_OFFSET UNITYSDK_OFFSET(0x16A556D0)
#define CLASS_1_A66BA52E4F994934__CTOR_OFFSET UNITYSDK_OFFSET(0x16A55370)

inline static constexpr unsigned int Class_1_A66BA52E4F994934_TypeDefinitionIndex = 33789;

class Class_1_A66BA52E4F994934 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_B55A056072768C34*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66BA52E4F994934__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66BA52E4F994934_DISPOSE_OFFSET))(this);
	}

	::Class_1_B55A056072768C34* Method_1_E4A2B2F96A8B6FFF(::RPG::Client::Multithread::SchedulerType a1)
	{
		return ((::Class_1_B55A056072768C34*(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType))((::PBYTE)hIl2Cpp + CLASS_1_A66BA52E4F994934_METHOD_1_E4A2B2F96A8B6FFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B0C2B8E1505D946(::RPG::Client::Multithread::SchedulerType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType))((::PBYTE)hIl2Cpp + CLASS_1_A66BA52E4F994934_METHOD_1_2B0C2B8E1505D946_OFFSET))(this, a1);
	}

	::System::Void Method_1_DCA8152954D7F3F1(::RPG::Client::Multithread::SchedulerType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType))((::PBYTE)hIl2Cpp + CLASS_1_A66BA52E4F994934_METHOD_1_DCA8152954D7F3F1_OFFSET))(this, a1);
	}
};
