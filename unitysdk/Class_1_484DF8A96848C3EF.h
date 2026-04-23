#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A58651510BF6ACD7;
class Class_3_98C806684F7CC372_13;

#define CLASS_1_484DF8A96848C3EF_CLEAR_OFFSET UNITYSDK_OFFSET(0x111A8BD0)
#define CLASS_1_484DF8A96848C3EF_METHOD_1_36199BBD14A68CEC_OFFSET UNITYSDK_OFFSET(0x111A8C20)
#define CLASS_1_484DF8A96848C3EF__CTOR_OFFSET UNITYSDK_OFFSET(0x111A8C80)

inline static constexpr unsigned int Class_1_484DF8A96848C3EF_TypeDefinitionIndex = 49796;

class Class_1_484DF8A96848C3EF : public ::System::Object
{
public:
	::Class_3_98C806684F7CC372_13* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_484DF8A96848C3EF__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_484DF8A96848C3EF_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_36199BBD14A68CEC(::Class_1_A58651510BF6ACD7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A58651510BF6ACD7*))((::PBYTE)hIl2Cpp + CLASS_1_484DF8A96848C3EF_METHOD_1_36199BBD14A68CEC_OFFSET))(this, a1);
	}
};
