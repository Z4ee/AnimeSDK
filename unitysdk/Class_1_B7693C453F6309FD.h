#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1249;

#define CLASS_1_B7693C453F6309FD_GET_ISLIVE_OFFSET UNITYSDK_OFFSET(0x15CC7BD0)
#define CLASS_1_B7693C453F6309FD_METHOD_1_A0374C870A27A45B_OFFSET UNITYSDK_OFFSET(0x15CC7BF0)
#define CLASS_1_B7693C453F6309FD_SET_ISLIVE_OFFSET UNITYSDK_OFFSET(0x15CC7BE0)
#define CLASS_1_B7693C453F6309FD__CTOR_OFFSET UNITYSDK_OFFSET(0x15CC7CF0)

inline static constexpr unsigned int Class_1_B7693C453F6309FD_TypeDefinitionIndex = 72435;

class Class_1_B7693C453F6309FD : public ::System::Object
{
public:
	::System::Boolean _IsLive_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7693C453F6309FD__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsLive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7693C453F6309FD_GET_ISLIVE_OFFSET))(this);
	}

	::System::Void set_IsLive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B7693C453F6309FD_SET_ISLIVE_OFFSET))(this, a1);
	}

	::System::Void Method_1_A0374C870A27A45B(::Class_0_16E4307DCC419505_1249* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1249*))((::PBYTE)hIl2Cpp + CLASS_1_B7693C453F6309FD_METHOD_1_A0374C870A27A45B_OFFSET))(this, a1);
	}
};
