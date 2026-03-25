#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

class Class_0_16E4307DCC419505_337;

#define CLASS_2_0B13FD24364C968E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C472A0)
#define CLASS_2_0B13FD24364C968E__CTOR_OFFSET UNITYSDK_OFFSET(0x8C47310)

inline static constexpr unsigned int Class_2_0B13FD24364C968E_TypeDefinitionIndex = 49339;

class Class_2_0B13FD24364C968E : public ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_337*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B13FD24364C968E__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B13FD24364C968E_DISPOSE_OFFSET))(this);
	}
};
