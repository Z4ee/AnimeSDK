#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2F3C7D4EFC74D485;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_316EE078E2C07813_METHOD_1_0903930C3497DAF5_OFFSET UNITYSDK_OFFSET(0x16596E30)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_316EE078E2C07813__CTOR_OFFSET UNITYSDK_OFFSET(0x16596E20)

inline static constexpr unsigned int Class_2_2F3C7D4EFC74D485_Class_1_316EE078E2C07813_TypeDefinitionIndex = 63002;

class Class_2_2F3C7D4EFC74D485_Class_1_316EE078E2C07813 : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* Field_1_2; // 0x10
	::Class_2_2F3C7D4EFC74D485* Field_1_0; // 0x18
	::System::String* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_316EE078E2C07813__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0903930C3497DAF5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_316EE078E2C07813_METHOD_1_0903930C3497DAF5_OFFSET))(this, a1);
	}
};
