#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F1C4ECC5EFDCA1EF_1.h"
#include "unitysdk/System/Object.h"

class Class_1_1E2BCC44350175D1;

#define CLASS_1_9A84770426095DA7_METHOD_1_4BBA8277D986811A_OFFSET UNITYSDK_OFFSET(0x1508E2B0)
#define CLASS_1_9A84770426095DA7__CTOR_OFFSET UNITYSDK_OFFSET(0x1508FF10)

inline static constexpr unsigned int Class_1_9A84770426095DA7_TypeDefinitionIndex = 59926;

class Class_1_9A84770426095DA7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A84770426095DA7__CTOR_OFFSET))(this);
	}

	::Class_1_1E2BCC44350175D1* Method_1_4BBA8277D986811A(::Struct_2_F1C4ECC5EFDCA1EF_1& a1)
	{
		return ((::Class_1_1E2BCC44350175D1*(*)(::PVOID, ::Struct_2_F1C4ECC5EFDCA1EF_1&))((::PBYTE)hIl2Cpp + CLASS_1_9A84770426095DA7_METHOD_1_4BBA8277D986811A_OFFSET))(this, a1);
	}
};
