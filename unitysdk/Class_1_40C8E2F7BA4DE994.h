#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_151;

#define CLASS_1_40C8E2F7BA4DE994_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0D5310)
#define CLASS_1_40C8E2F7BA4DE994_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0xC0D5220)
#define CLASS_1_40C8E2F7BA4DE994_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC0D52A0)
#define CLASS_1_40C8E2F7BA4DE994_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xC0D53D0)
#define CLASS_1_40C8E2F7BA4DE994__CTOR_OFFSET UNITYSDK_OFFSET(0xC0D5450)

inline static constexpr unsigned int Class_1_40C8E2F7BA4DE994_TypeDefinitionIndex = 65596;

class Class_1_40C8E2F7BA4DE994 : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_151* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40C8E2F7BA4DE994__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40C8E2F7BA4DE994_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
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
