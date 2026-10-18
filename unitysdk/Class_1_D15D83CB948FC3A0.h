#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1294FEF8E985635C;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D15D83CB948FC3A0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC14170)
#define CLASS_1_D15D83CB948FC3A0_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xBC141D0)
#define CLASS_1_D15D83CB948FC3A0_METHOD_1_A477CC9DD20B7349_OFFSET UNITYSDK_OFFSET(0xBC140C0)
#define CLASS_1_D15D83CB948FC3A0__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBC14050)
#define CLASS_1_D15D83CB948FC3A0__CTOR_OFFSET UNITYSDK_OFFSET(0xBC14020)

inline static constexpr unsigned int Class_1_D15D83CB948FC3A0_TypeDefinitionIndex = 76504;

class Class_1_D15D83CB948FC3A0 : public ::System::Object
{
public:
	::Class_1_1294FEF8E985635C* GJALMBBNNOF; // 0x10
	::System::Boolean NIHOBIGHEPD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D83CB948FC3A0__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1294FEF8E985635C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1294FEF8E985635C*))((::PBYTE)hIl2Cpp + CLASS_1_D15D83CB948FC3A0__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A477CC9DD20B7349(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D15D83CB948FC3A0_METHOD_1_A477CC9DD20B7349_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D83CB948FC3A0_DISPOSE_OFFSET))(this);
	}

	::Class_1_1294FEF8E985635C* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1294FEF8E985635C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D83CB948FC3A0_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
