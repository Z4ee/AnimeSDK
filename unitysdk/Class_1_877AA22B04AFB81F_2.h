#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D3EBF9B5060CE4F4.h"
#include "unitysdk/System/Object.h"

class Class_1_ACD9131A238D8088;
class Class_2_208CC9941471731A_407;

#define CLASS_1_877AA22B04AFB81F_2_METHOD_1_E439B307295AE9DB_OFFSET UNITYSDK_OFFSET(0x1508AD60)
#define CLASS_1_877AA22B04AFB81F_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1508AD50)

inline static constexpr unsigned int Class_1_877AA22B04AFB81F_2_TypeDefinitionIndex = 87474;

class Class_1_877AA22B04AFB81F_2 : public ::System::Object
{
public:
	::Class_1_ACD9131A238D8088* Field_1_7; // 0x10
	::Class_2_208CC9941471731A_407* Field_1_0; // 0x18
	::System::Boolean Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_877AA22B04AFB81F_2__CTOR_OFFSET))(this);
	}

	::Enum_3_D3EBF9B5060CE4F4 Method_1_E439B307295AE9DB()
	{
		return ((::Enum_3_D3EBF9B5060CE4F4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_877AA22B04AFB81F_2_METHOD_1_E439B307295AE9DB_OFFSET))(this);
	}
};
