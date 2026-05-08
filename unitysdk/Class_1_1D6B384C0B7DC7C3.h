#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B4F9C1A2827CAB53.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
class Class_3_AE02BC8285203464_7;

#define CLASS_1_1D6B384C0B7DC7C3_METHOD_1_A2229860C031F5A2_OFFSET UNITYSDK_OFFSET(0x15320E30)
#define CLASS_1_1D6B384C0B7DC7C3__CTOR_OFFSET UNITYSDK_OFFSET(0x15320DE0)

inline static constexpr unsigned int Class_1_1D6B384C0B7DC7C3_TypeDefinitionIndex = 66912;

class Class_1_1D6B384C0B7DC7C3 : public ::System::Object
{
public:
	::Class_3_AE02BC8285203464_7* Field_1_1; // 0x10
	::Class_1_D375C91CCE5D3999* Field_1_2; // 0x18
	::System::UInt32 Field_1_0; // 0x20

	::System::Void _ctor(::Class_1_D375C91CCE5D3999* a1, ::Class_3_AE02BC8285203464_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*, ::Class_3_AE02BC8285203464_7*))((::PBYTE)hIl2Cpp + CLASS_1_1D6B384C0B7DC7C3__CTOR_OFFSET))(this, a1, a2);
	}

	::Enum_3_B4F9C1A2827CAB53 Method_1_A2229860C031F5A2()
	{
		return ((::Enum_3_B4F9C1A2827CAB53(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D6B384C0B7DC7C3_METHOD_1_A2229860C031F5A2_OFFSET))(this);
	}
};
