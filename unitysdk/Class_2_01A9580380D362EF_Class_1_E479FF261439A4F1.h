#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AC76A180D6FDF6F0.h"
#include "unitysdk/System/Object.h"

class Class_2_01A9580380D362EF;
class Class_3_025FF4981524A424_328;
namespace System { class Action; }

#define CLASS_2_01A9580380D362EF_CLASS_1_E479FF261439A4F1_METHOD_1_CD7E7AF7EB4E1ED5_OFFSET UNITYSDK_OFFSET(0x123724F0)
#define CLASS_2_01A9580380D362EF_CLASS_1_E479FF261439A4F1__CTOR_OFFSET UNITYSDK_OFFSET(0x123724E0)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_E479FF261439A4F1_TypeDefinitionIndex = 52225;

class Class_2_01A9580380D362EF_Class_1_E479FF261439A4F1 : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::Class_2_01A9580380D362EF* Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x20
	::System::UInt32 Field_1_7; // 0x24
	::Enum_3_AC76A180D6FDF6F0 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_E479FF261439A4F1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CD7E7AF7EB4E1ED5(::Class_3_025FF4981524A424_328* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_328*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_E479FF261439A4F1_METHOD_1_CD7E7AF7EB4E1ED5_OFFSET))(this, a1);
	}
};
