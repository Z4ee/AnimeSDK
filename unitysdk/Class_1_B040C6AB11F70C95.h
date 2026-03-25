#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45666FF47F0D254B;
class Class_1_F236C4DB0600E05D;

#define CLASS_1_B040C6AB11F70C95_METHOD_1_DAE3C0D794E8B994_OFFSET UNITYSDK_OFFSET(0x8C8FF30)
#define CLASS_1_B040C6AB11F70C95__CTOR_OFFSET UNITYSDK_OFFSET(0x8C8FFA0)

inline static constexpr unsigned int Class_1_B040C6AB11F70C95_TypeDefinitionIndex = 50365;

class Class_1_B040C6AB11F70C95 : public ::System::Object
{
public:
	::Class_1_45666FF47F0D254B* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B040C6AB11F70C95__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DAE3C0D794E8B994(::Class_1_F236C4DB0600E05D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F236C4DB0600E05D*))((::PBYTE)hIl2Cpp + CLASS_1_B040C6AB11F70C95_METHOD_1_DAE3C0D794E8B994_OFFSET))(this, a1);
	}
};
