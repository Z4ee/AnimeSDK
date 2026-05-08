#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01A9580380D362EF;
class Class_3_025FF4981524A424_545;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_01A9580380D362EF_CLASS_1_E614ED075097BABF_METHOD_1_60BB4B8F47641ECA_OFFSET UNITYSDK_OFFSET(0x129597A0)
#define CLASS_2_01A9580380D362EF_CLASS_1_E614ED075097BABF__CTOR_OFFSET UNITYSDK_OFFSET(0x12959790)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_E614ED075097BABF_TypeDefinitionIndex = 48582;

class Class_2_01A9580380D362EF_Class_1_E614ED075097BABF : public ::System::Object
{
public:
	::Class_2_01A9580380D362EF* Field_1_0; // 0x10
	::System::Action_1<::System::UInt32>* Field_1_2; // 0x18
	::System::UInt32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_E614ED075097BABF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_60BB4B8F47641ECA(::Class_3_025FF4981524A424_545* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_545*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_E614ED075097BABF_METHOD_1_60BB4B8F47641ECA_OFFSET))(this, a1);
	}
};
