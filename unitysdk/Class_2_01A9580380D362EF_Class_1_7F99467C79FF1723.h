#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01A9580380D362EF;
class Class_3_025FF4981524A424_611;
namespace System { class Action; }

#define CLASS_2_01A9580380D362EF_CLASS_1_7F99467C79FF1723_METHOD_1_13B39EC66F69D47F_OFFSET UNITYSDK_OFFSET(0x19222260)
#define CLASS_2_01A9580380D362EF_CLASS_1_7F99467C79FF1723__CTOR_OFFSET UNITYSDK_OFFSET(0x19221B70)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_7F99467C79FF1723_TypeDefinitionIndex = 40024;

class Class_2_01A9580380D362EF_Class_1_7F99467C79FF1723 : public ::System::Object
{
public:
	::Class_2_01A9580380D362EF* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::UInt32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_7F99467C79FF1723__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_13B39EC66F69D47F(::Class_3_025FF4981524A424_611* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_611*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_7F99467C79FF1723_METHOD_1_13B39EC66F69D47F_OFFSET))(this, a1);
	}
};
