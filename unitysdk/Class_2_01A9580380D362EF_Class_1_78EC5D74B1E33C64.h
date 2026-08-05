#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01A9580380D362EF;
class Class_3_025FF4981524A424_187;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_01A9580380D362EF_CLASS_1_78EC5D74B1E33C64_METHOD_1_A3B750FF0054A8C9_OFFSET UNITYSDK_OFFSET(0x176290B0)
#define CLASS_2_01A9580380D362EF_CLASS_1_78EC5D74B1E33C64__CTOR_OFFSET UNITYSDK_OFFSET(0x176290A0)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_78EC5D74B1E33C64_TypeDefinitionIndex = 52235;

class Class_2_01A9580380D362EF_Class_1_78EC5D74B1E33C64 : public ::System::Object
{
public:
	::Class_2_01A9580380D362EF* Field_1_0; // 0x10
	::System::Action_1<::Class_3_025FF4981524A424_187*>* Field_1_6; // 0x18
	::System::UInt32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_78EC5D74B1E33C64__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A3B750FF0054A8C9(::Class_3_025FF4981524A424_187* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_187*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_78EC5D74B1E33C64_METHOD_1_A3B750FF0054A8C9_OFFSET))(this, a1);
	}
};
