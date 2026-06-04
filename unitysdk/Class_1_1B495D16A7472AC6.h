#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class ManualResetEvent; }

#define CLASS_1_1B495D16A7472AC6_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA616320)
#define CLASS_1_1B495D16A7472AC6_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA616270)
#define CLASS_1_1B495D16A7472AC6__CTOR_OFFSET UNITYSDK_OFFSET(0xA616230)

inline static constexpr unsigned int Class_1_1B495D16A7472AC6_TypeDefinitionIndex = 55561;

class Class_1_1B495D16A7472AC6 : public ::System::Object
{
public:
	::System::Threading::ManualResetEvent* Field_1_0; // 0x10

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B495D16A7472AC6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B495D16A7472AC6_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B495D16A7472AC6_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
