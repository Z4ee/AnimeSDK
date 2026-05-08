#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01A9580380D362EF;
class Class_3_025FF4981524A424_545;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_01A9580380D362EF_CLASS_1_9DCDCFCCE3FCA088_METHOD_1_7821D524FE61E19B_OFFSET UNITYSDK_OFFSET(0x13293870)
#define CLASS_2_01A9580380D362EF_CLASS_1_9DCDCFCCE3FCA088__CTOR_OFFSET UNITYSDK_OFFSET(0x13293860)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_9DCDCFCCE3FCA088_TypeDefinitionIndex = 48596;

class Class_2_01A9580380D362EF_Class_1_9DCDCFCCE3FCA088 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::Action* Field_1_4; // 0x18
	::Class_2_01A9580380D362EF* Field_1_0; // 0x20
	::System::UInt32 Field_1_1; // 0x28
	::System::UInt32 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_9DCDCFCCE3FCA088__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7821D524FE61E19B(::Class_3_025FF4981524A424_545* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_545*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_9DCDCFCCE3FCA088_METHOD_1_7821D524FE61E19B_OFFSET))(this, a1);
	}
};
