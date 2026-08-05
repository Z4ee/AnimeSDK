#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_495D7A3E0E5529B6.h"
#include "unitysdk/Enum_3_D97372C4EB93BA22.h"

class Class_1_507BA9D7A2BDF3F6;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_076827F052BF2739_METHOD_2_35D7CC6B03858F1E_OFFSET UNITYSDK_OFFSET(0x155579B0)
#define CLASS_2_076827F052BF2739_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15558030)
#define CLASS_2_076827F052BF2739_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x15557990)
#define CLASS_2_076827F052BF2739__CTOR_OFFSET UNITYSDK_OFFSET(0x155579A0)

inline static constexpr unsigned int Class_2_076827F052BF2739_TypeDefinitionIndex = 74947;

class Class_2_076827F052BF2739 : public ::Class_1_495D7A3E0E5529B6
{
public:
	::UnityEngine::Transform* Field_2_6; // 0x28
	::Class_1_507BA9D7A2BDF3F6* Field_2_7; // 0x30
	::UnityEngine::RectTransform* Field_2_0; // 0x38

	::System::Void _ctor(::Class_1_507BA9D7A2BDF3F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_507BA9D7A2BDF3F6*))((::PBYTE)hIl2Cpp + CLASS_2_076827F052BF2739__CTOR_OFFSET))(this, a1);
	}

	::Enum_3_D97372C4EB93BA22 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D97372C4EB93BA22(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_076827F052BF2739_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_2_35D7CC6B03858F1E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_076827F052BF2739_METHOD_2_35D7CC6B03858F1E_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_076827F052BF2739_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
