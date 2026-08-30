#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/SchedulerType.h"
#include "unitysdk/System/Object.h"

class Class_1_B55A056072768C34;

#define CLASS_1_8E325EC9057215AB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F005750)
#define CLASS_1_8E325EC9057215AB_METHOD_1_442FB613E00F4457_OFFSET UNITYSDK_OFFSET(0x1F0059C0)
#define CLASS_1_8E325EC9057215AB_METHOD_1_71FD474DC1FF5BC7_OFFSET UNITYSDK_OFFSET(0x1F0058F0)
#define CLASS_1_8E325EC9057215AB_METHOD_1_E4A2B2F96A8B6FFF_OFFSET UNITYSDK_OFFSET(0x1F0058C0)
#define CLASS_1_8E325EC9057215AB__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0055F0)

inline static constexpr unsigned int Class_1_8E325EC9057215AB_TypeDefinitionIndex = 42188;

class Class_1_8E325EC9057215AB : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_B55A056072768C34*>* KGENILBEMJG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E325EC9057215AB__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E325EC9057215AB_DISPOSE_OFFSET))(this);
	}

	::Class_1_B55A056072768C34* Method_1_E4A2B2F96A8B6FFF(::RPG::Client::Multithread::SchedulerType a1)
	{
		return ((::Class_1_B55A056072768C34*(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType))((::PBYTE)hIl2Cpp + CLASS_1_8E325EC9057215AB_METHOD_1_E4A2B2F96A8B6FFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_71FD474DC1FF5BC7(::RPG::Client::Multithread::SchedulerType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType))((::PBYTE)hIl2Cpp + CLASS_1_8E325EC9057215AB_METHOD_1_71FD474DC1FF5BC7_OFFSET))(this, a1);
	}

	::System::Void Method_1_442FB613E00F4457(::RPG::Client::Multithread::SchedulerType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType))((::PBYTE)hIl2Cpp + CLASS_1_8E325EC9057215AB_METHOD_1_442FB613E00F4457_OFFSET))(this, a1);
	}
};
