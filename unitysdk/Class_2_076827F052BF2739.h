#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_495D7A3E0E5529B6.h"
#include "unitysdk/Enum_3_D97372C4EB93BA22.h"

class Class_1_A9AA6EB96ECB0DFA;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_076827F052BF2739_METHOD_2_102177B488C94B7D_OFFSET UNITYSDK_OFFSET(0x100F9F90)
#define CLASS_2_076827F052BF2739_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x100FA620)
#define CLASS_2_076827F052BF2739_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x100F9F70)
#define CLASS_2_076827F052BF2739__CTOR_OFFSET UNITYSDK_OFFSET(0x100F9F80)

inline static constexpr unsigned int Class_2_076827F052BF2739_TypeDefinitionIndex = 56140;

class Class_2_076827F052BF2739 : public ::Class_1_495D7A3E0E5529B6
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x28
	::UnityEngine::Transform* Field_2_2; // 0x30
	::Class_1_A9AA6EB96ECB0DFA* Field_2_1; // 0x38

	::System::Void _ctor(::Class_1_A9AA6EB96ECB0DFA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A9AA6EB96ECB0DFA*))((::PBYTE)hIl2Cpp + CLASS_2_076827F052BF2739__CTOR_OFFSET))(this, a1);
	}

	::Enum_3_D97372C4EB93BA22 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D97372C4EB93BA22(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_076827F052BF2739_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_2_102177B488C94B7D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_076827F052BF2739_METHOD_2_102177B488C94B7D_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_076827F052BF2739_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
