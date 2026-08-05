#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01A9580380D362EF;
class Class_3_025FF4981524A424_328;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_01A9580380D362EF_CLASS_1_A936AF2C66EEFD99_METHOD_1_9F4D81BED7D692CE_OFFSET UNITYSDK_OFFSET(0x1BB62AF0)
#define CLASS_2_01A9580380D362EF_CLASS_1_A936AF2C66EEFD99__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB62AE0)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_A936AF2C66EEFD99_TypeDefinitionIndex = 52240;

class Class_2_01A9580380D362EF_Class_1_A936AF2C66EEFD99 : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::System::Action* Field_1_6; // 0x18
	::Class_2_01A9580380D362EF* Field_1_2; // 0x20
	::System::UInt32 Field_1_0; // 0x28
	::System::UInt32 Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_A936AF2C66EEFD99__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9F4D81BED7D692CE(::Class_3_025FF4981524A424_328* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_328*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_A936AF2C66EEFD99_METHOD_1_9F4D81BED7D692CE_OFFSET))(this, a1);
	}
};
