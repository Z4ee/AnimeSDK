#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_29ADE9724E15BDC9;
namespace System { class Action; }

#define CLASS_1_B22AC0D349544E67_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98B6750)
#define CLASS_1_B22AC0D349544E67_METHOD_1_04AF66402B9859B9_1_OFFSET UNITYSDK_OFFSET(0x98B67F0)
#define CLASS_1_B22AC0D349544E67_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x98B67A0)
#define CLASS_1_B22AC0D349544E67_METHOD_1_6A556D7610920AA7_OFFSET UNITYSDK_OFFSET(0x98B6840)
#define CLASS_1_B22AC0D349544E67_METHOD_1_9FE8229FA80E064B_OFFSET UNITYSDK_OFFSET(0x98B6950)
#define CLASS_1_B22AC0D349544E67__CTOR_OFFSET UNITYSDK_OFFSET(0x98B6D20)

inline static constexpr unsigned int Class_1_B22AC0D349544E67_TypeDefinitionIndex = 69342;

class Class_1_B22AC0D349544E67 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22AC0D349544E67__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22AC0D349544E67_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B22AC0D349544E67_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_04AF66402B9859B9_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B22AC0D349544E67_METHOD_1_04AF66402B9859B9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6A556D7610920AA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22AC0D349544E67_METHOD_1_6A556D7610920AA7_OFFSET))(this);
	}

	::System::Void Method_1_9FE8229FA80E064B(::Class_1_29ADE9724E15BDC9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_29ADE9724E15BDC9*))((::PBYTE)hIl2Cpp + CLASS_1_B22AC0D349544E67_METHOD_1_9FE8229FA80E064B_OFFSET))(this, a1);
	}
};
