#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3073AF5C54DFD8C2.h"
#include "unitysdk/System/Object.h"

class Class_1_4F0C338489B060CF;

#define CLASS_1_CB7F54F7ED0A0250_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x150C0EB0)
#define CLASS_1_CB7F54F7ED0A0250__CTOR_OFFSET UNITYSDK_OFFSET(0x150C0EF0)

inline static constexpr unsigned int Class_1_CB7F54F7ED0A0250_TypeDefinitionIndex = 81338;

class Class_1_CB7F54F7ED0A0250 : public ::System::Object
{
public:
	::Class_1_4F0C338489B060CF* Field_1_0; // 0x10
	::Enum_3_3073AF5C54DFD8C2 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F54F7ED0A0250__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F54F7ED0A0250_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
