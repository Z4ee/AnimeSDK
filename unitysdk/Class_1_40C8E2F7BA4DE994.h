#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_163;

#define CLASS_1_40C8E2F7BA4DE994_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11914360)
#define CLASS_1_40C8E2F7BA4DE994_METHOD_1_92F85D4296A9ADDA_OFFSET UNITYSDK_OFFSET(0x11914260)
#define CLASS_1_40C8E2F7BA4DE994_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x119142F0)
#define CLASS_1_40C8E2F7BA4DE994_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x11914420)
#define CLASS_1_40C8E2F7BA4DE994__CTOR_OFFSET UNITYSDK_OFFSET(0x119144A0)

inline static constexpr unsigned int Class_1_40C8E2F7BA4DE994_TypeDefinitionIndex = 66530;

class Class_1_40C8E2F7BA4DE994 : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_163* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40C8E2F7BA4DE994__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_92F85D4296A9ADDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40C8E2F7BA4DE994_METHOD_1_92F85D4296A9ADDA_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40C8E2F7BA4DE994_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40C8E2F7BA4DE994_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_40C8E2F7BA4DE994_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}
};
