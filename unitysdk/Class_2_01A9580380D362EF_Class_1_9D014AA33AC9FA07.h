#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01A9580380D362EF;
class Class_3_025FF4981524A424_611;
namespace System { class Action; }

#define CLASS_2_01A9580380D362EF_CLASS_1_9D014AA33AC9FA07_METHOD_1_A0903219A1E1C857_OFFSET UNITYSDK_OFFSET(0x123A5B80)
#define CLASS_2_01A9580380D362EF_CLASS_1_9D014AA33AC9FA07__CTOR_OFFSET UNITYSDK_OFFSET(0x123A5B70)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_9D014AA33AC9FA07_TypeDefinitionIndex = 40026;

class Class_2_01A9580380D362EF_Class_1_9D014AA33AC9FA07 : public ::System::Object
{
public:
	::Class_2_01A9580380D362EF* Field_1_0; // 0x10
	::System::Action* Field_1_3; // 0x18
	::System::UInt32 Field_1_1; // 0x20
	::System::UInt32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_9D014AA33AC9FA07__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A0903219A1E1C857(::Class_3_025FF4981524A424_611* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_611*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_9D014AA33AC9FA07_METHOD_1_A0903219A1E1C857_OFFSET))(this, a1);
	}
};
