#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AC76A180D6FDF6F0.h"
#include "unitysdk/System/Object.h"

class Class_2_01A9580380D362EF;
class Class_3_025FF4981524A424_611;
namespace System { class Action; }

#define CLASS_2_01A9580380D362EF_CLASS_1_24C69AD61D2AAD41_METHOD_1_9F4D81BED7D692CE_OFFSET UNITYSDK_OFFSET(0x1140A490)
#define CLASS_2_01A9580380D362EF_CLASS_1_24C69AD61D2AAD41__CTOR_OFFSET UNITYSDK_OFFSET(0x1140A480)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_24C69AD61D2AAD41_TypeDefinitionIndex = 40023;

class Class_2_01A9580380D362EF_Class_1_24C69AD61D2AAD41 : public ::System::Object
{
public:
	::Class_2_01A9580380D362EF* Field_1_0; // 0x10
	::System::Action* Field_1_4; // 0x18
	::Enum_3_AC76A180D6FDF6F0 Field_1_3; // 0x20
	::System::UInt32 Field_1_1; // 0x24
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_24C69AD61D2AAD41__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9F4D81BED7D692CE(::Class_3_025FF4981524A424_611* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_611*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_24C69AD61D2AAD41_METHOD_1_9F4D81BED7D692CE_OFFSET))(this, a1);
	}
};
