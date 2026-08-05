#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6CC5CABA75EF72F7.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_90889A2023AB884E_1_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1EDCF0F0)
#define CLASS_1_90889A2023AB884E_1_METHOD_1_49AC00594530B714_OFFSET UNITYSDK_OFFSET(0x1EDCF0B0)
#define CLASS_1_90889A2023AB884E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDCF0A0)

inline static constexpr unsigned int Class_1_90889A2023AB884E_1_TypeDefinitionIndex = 29515;

class Class_1_90889A2023AB884E_1 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_1__CTOR_OFFSET))(this, a1);
	}

	::Enum_3_6CC5CABA75EF72F7 Method_1_49AC00594530B714()
	{
		return ((::Enum_3_6CC5CABA75EF72F7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_1_METHOD_1_49AC00594530B714_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_1_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
