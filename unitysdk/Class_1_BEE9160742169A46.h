#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FDFE69FE7B72463B;

#define CLASS_1_BEE9160742169A46_METHOD_1_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x134FF490)
#define CLASS_1_BEE9160742169A46_METHOD_1_7AFC74ADCC2A9C7A_OFFSET UNITYSDK_OFFSET(0x134FF380)
#define CLASS_1_BEE9160742169A46_METHOD_1_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0x134FF480)
#define CLASS_1_BEE9160742169A46__CTOR_OFFSET UNITYSDK_OFFSET(0x134FF370)

inline static constexpr unsigned int Class_1_BEE9160742169A46_TypeDefinitionIndex = 57771;

class Class_1_BEE9160742169A46 : public ::System::Object
{
public:
	::Class_2_FDFE69FE7B72463B* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor(::Class_2_FDFE69FE7B72463B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FDFE69FE7B72463B*))((::PBYTE)hIl2Cpp + CLASS_1_BEE9160742169A46__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_7AFC74ADCC2A9C7A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BEE9160742169A46_METHOD_1_7AFC74ADCC2A9C7A_OFFSET))(this, a1);
	}

	::System::Void Method_1_A91086AED8314DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEE9160742169A46_METHOD_1_A91086AED8314DB5_OFFSET))(this);
	}

	::System::Void Method_1_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BEE9160742169A46_METHOD_1_1CD1133DC003C11C_OFFSET))(this, a1);
	}
};
