#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01A9580380D362EF;
class Class_3_025FF4981524A424_545;
namespace System { class Action; }

#define CLASS_2_01A9580380D362EF_CLASS_1_A4856295E5DB2702_METHOD_1_9F4D81BED7D692CE_OFFSET UNITYSDK_OFFSET(0x10FE28D0)
#define CLASS_2_01A9580380D362EF_CLASS_1_A4856295E5DB2702__CTOR_OFFSET UNITYSDK_OFFSET(0x10FE28C0)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_A4856295E5DB2702_TypeDefinitionIndex = 48583;

class Class_2_01A9580380D362EF_Class_1_A4856295E5DB2702 : public ::System::Object
{
public:
	::Class_2_01A9580380D362EF* Field_1_0; // 0x10
	::System::Action* Field_1_3; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_A4856295E5DB2702__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9F4D81BED7D692CE(::Class_3_025FF4981524A424_545* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_545*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_A4856295E5DB2702_METHOD_1_9F4D81BED7D692CE_OFFSET))(this, a1);
	}
};
