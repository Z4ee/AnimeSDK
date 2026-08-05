#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01A9580380D362EF;
class Class_3_025FF4981524A424_328;
namespace System { class Action; }

#define CLASS_2_01A9580380D362EF_CLASS_1_0EB55CD86E7464B2_METHOD_1_CD7E7AF7EB4E1ED5_OFFSET UNITYSDK_OFFSET(0x123721E0)
#define CLASS_2_01A9580380D362EF_CLASS_1_0EB55CD86E7464B2__CTOR_OFFSET UNITYSDK_OFFSET(0x123721D0)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_0EB55CD86E7464B2_TypeDefinitionIndex = 52228;

class Class_2_01A9580380D362EF_Class_1_0EB55CD86E7464B2 : public ::System::Object
{
public:
	::Class_2_01A9580380D362EF* Field_1_3; // 0x10
	::System::Action* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_0EB55CD86E7464B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CD7E7AF7EB4E1ED5(::Class_3_025FF4981524A424_328* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_328*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_0EB55CD86E7464B2_METHOD_1_CD7E7AF7EB4E1ED5_OFFSET))(this, a1);
	}
};
