#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

class Class_0_16E4307DCC419505_344;

#define CLASS_2_0B13FD24364C968E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD366500)
#define CLASS_2_0B13FD24364C968E__CTOR_OFFSET UNITYSDK_OFFSET(0xD366570)

inline static constexpr unsigned int Class_2_0B13FD24364C968E_TypeDefinitionIndex = 56136;

class Class_2_0B13FD24364C968E : public ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_344*>
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
