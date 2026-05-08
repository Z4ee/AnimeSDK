#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupStateChangeListenEntry.h"
#include "unitysdk/System/Object.h"

class Class_2_C4F720DE4FCB69E6_Class_1_456A9D29EFE2BEA6;
class Class_3_620977F55CD7E401_5;

#define CLASS_2_C4F720DE4FCB69E6_CLASS_1_59130BB76BC6328B_METHOD_1_A86356FC9D5199D1_OFFSET UNITYSDK_OFFSET(0x13C1AED0)
#define CLASS_2_C4F720DE4FCB69E6_CLASS_1_59130BB76BC6328B__CTOR_OFFSET UNITYSDK_OFFSET(0x13C1AEC0)

inline static constexpr unsigned int Class_2_C4F720DE4FCB69E6_Class_1_59130BB76BC6328B_TypeDefinitionIndex = 42318;

class Class_2_C4F720DE4FCB69E6_Class_1_59130BB76BC6328B : public ::System::Object
{
public:
	::Class_2_C4F720DE4FCB69E6_Class_1_456A9D29EFE2BEA6* Field_1_1; // 0x10
	::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_CLASS_1_59130BB76BC6328B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A86356FC9D5199D1(::System::Boolean a1, ::Class_3_620977F55CD7E401_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_620977F55CD7E401_5*))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_CLASS_1_59130BB76BC6328B_METHOD_1_A86356FC9D5199D1_OFFSET))(this, a1, a2);
	}
};
