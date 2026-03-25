#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BF35D09998D831A7.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A_1;
class Class_3_D6E9A038FA23103A;

#define CLASS_1_8E042314AFF884FB_11_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9EF4BA0)
#define CLASS_1_8E042314AFF884FB_11_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9EF4980)
#define CLASS_1_8E042314AFF884FB_11_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x9EF4940)
#define CLASS_1_8E042314AFF884FB_11_METHOD_1_9914F10C1B9BBD20_OFFSET UNITYSDK_OFFSET(0x9EF4A30)
#define CLASS_1_8E042314AFF884FB_11__CTOR_OFFSET UNITYSDK_OFFSET(0x9EF4930)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_11_TypeDefinitionIndex = 62481;

class Class_1_8E042314AFF884FB_11 : public ::System::Object
{
public:
	::Class_3_D6E9A038FA23103A* Field_1_1; // 0x10
	::Class_1_867B6CE75953535A_1* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_867B6CE75953535A_1* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A_1*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_11_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_11_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_9914F10C1B9BBD20(::Struct_2_BF35D09998D831A7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BF35D09998D831A7))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_11_METHOD_1_9914F10C1B9BBD20_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_11_EXECUTE_OFFSET))(this);
	}
};
