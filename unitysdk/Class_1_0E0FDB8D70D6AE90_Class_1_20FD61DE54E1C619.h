#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_0E0FDB8D70D6AE90_CLASS_1_20FD61DE54E1C619_METHOD_1_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x12494230)
#define CLASS_1_0E0FDB8D70D6AE90_CLASS_1_20FD61DE54E1C619_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12494220)
#define CLASS_1_0E0FDB8D70D6AE90_CLASS_1_20FD61DE54E1C619__CTOR_OFFSET UNITYSDK_OFFSET(0x12494210)

inline static constexpr unsigned int Class_1_0E0FDB8D70D6AE90_Class_1_20FD61DE54E1C619_TypeDefinitionIndex = 91445;

class Class_1_0E0FDB8D70D6AE90_Class_1_20FD61DE54E1C619 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E0FDB8D70D6AE90_CLASS_1_20FD61DE54E1C619__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E0FDB8D70D6AE90_CLASS_1_20FD61DE54E1C619_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0E0FDB8D70D6AE90_CLASS_1_20FD61DE54E1C619_METHOD_1_C91E5170F9E36EED_OFFSET))(this, a1);
	}
};
