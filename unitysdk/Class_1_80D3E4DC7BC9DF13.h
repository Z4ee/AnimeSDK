#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_554;
class Class_3_9F091E965E210217_41;

#define CLASS_1_80D3E4DC7BC9DF13_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1431D590)
#define CLASS_1_80D3E4DC7BC9DF13_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x1431D6C0)
#define CLASS_1_80D3E4DC7BC9DF13__CTOR_OFFSET UNITYSDK_OFFSET(0x1431D350)

inline static constexpr unsigned int Class_1_80D3E4DC7BC9DF13_TypeDefinitionIndex = 48846;

class Class_1_80D3E4DC7BC9DF13 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_554* Field_1_2; // 0x10
	::Class_3_9F091E965E210217_41* Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x20

	::System::Void _ctor(::Class_3_9F091E965E210217_41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9F091E965E210217_41*))((::PBYTE)hIl2Cpp + CLASS_1_80D3E4DC7BC9DF13__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80D3E4DC7BC9DF13_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80D3E4DC7BC9DF13_METHOD_1_775B6D644F07B554_OFFSET))(this);
	}
};
