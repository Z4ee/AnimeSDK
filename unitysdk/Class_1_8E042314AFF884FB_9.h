#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D11CE62B2BEC69E;
class Class_3_D6E9A038FA23103A;

#define CLASS_1_8E042314AFF884FB_9_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12B278A0)
#define CLASS_1_8E042314AFF884FB_9_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x12B27860)
#define CLASS_1_8E042314AFF884FB_9_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x12B27820)
#define CLASS_1_8E042314AFF884FB_9__CTOR_OFFSET UNITYSDK_OFFSET(0x12B27810)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_9_TypeDefinitionIndex = 70466;

class Class_1_8E042314AFF884FB_9 : public ::System::Object
{
public:
	::Class_1_4D11CE62B2BEC69E* Field_1_0; // 0x10
	::Class_3_D6E9A038FA23103A* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_4D11CE62B2BEC69E* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D11CE62B2BEC69E*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_9_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_9_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_9_EXECUTE_OFFSET))(this);
	}
};
