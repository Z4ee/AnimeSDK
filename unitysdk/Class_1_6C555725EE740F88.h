#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D7976A8B64BD43B9;

#define CLASS_1_6C555725EE740F88_COMPARETO_OFFSET UNITYSDK_OFFSET(0x12545580)
#define CLASS_1_6C555725EE740F88_METHOD_1_FAB076F9C2EDE3BE_OFFSET UNITYSDK_OFFSET(0x12545510)
#define CLASS_1_6C555725EE740F88__CTOR_OFFSET UNITYSDK_OFFSET(0x12545570)

inline static constexpr unsigned int Class_1_6C555725EE740F88_TypeDefinitionIndex = 66400;

class Class_1_6C555725EE740F88 : public ::System::Object
{
public:
	::Class_1_D7976A8B64BD43B9* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C555725EE740F88__CTOR_OFFSET))(this);
	}

	static ::Class_1_6C555725EE740F88* Method_1_FAB076F9C2EDE3BE(::Class_1_D7976A8B64BD43B9* a1)
	{
		return ((::Class_1_6C555725EE740F88*(*)(::Class_1_D7976A8B64BD43B9*))((::PBYTE)hIl2Cpp + CLASS_1_6C555725EE740F88_METHOD_1_FAB076F9C2EDE3BE_OFFSET))(a1);
	}

	::System::Int32 CompareTo(::Class_1_6C555725EE740F88* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_6C555725EE740F88*))((::PBYTE)hIl2Cpp + CLASS_1_6C555725EE740F88_COMPARETO_OFFSET))(this, a1);
	}
};
