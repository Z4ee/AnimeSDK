#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_495D7A3E0E5529B6.h"
#include "unitysdk/Enum_3_D97372C4EB93BA22.h"

class Class_1_507BA9D7A2BDF3F6;
namespace UnityEngine { class Transform; }

#define CLASS_2_628AB21DA8A62A15_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x194D13B0)
#define CLASS_2_628AB21DA8A62A15_METHOD_2_7D8DC7460DC5B539_OFFSET UNITYSDK_OFFSET(0x194D0E70)
#define CLASS_2_628AB21DA8A62A15_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x194D0E50)
#define CLASS_2_628AB21DA8A62A15__CTOR_OFFSET UNITYSDK_OFFSET(0x194D0E60)

inline static constexpr unsigned int Class_2_628AB21DA8A62A15_TypeDefinitionIndex = 88507;

class Class_2_628AB21DA8A62A15 : public ::Class_1_495D7A3E0E5529B6
{
public:
	::Class_1_507BA9D7A2BDF3F6* Field_2_1; // 0x28
	::UnityEngine::Transform* Field_2_0; // 0x30
	::UnityEngine::Transform* Field_2_7; // 0x38
	::System::Single Field_2_4; // 0x40
	::System::Boolean Field_2_5; // 0x44
	::System::Single Field_2_11; // 0x48
	::System::Single Field_2_6; // 0x4C

	::System::Void _ctor(::Class_1_507BA9D7A2BDF3F6* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_507BA9D7A2BDF3F6*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_628AB21DA8A62A15__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Enum_3_D97372C4EB93BA22 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D97372C4EB93BA22(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_628AB21DA8A62A15_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_2_7D8DC7460DC5B539()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_628AB21DA8A62A15_METHOD_2_7D8DC7460DC5B539_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_628AB21DA8A62A15_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
