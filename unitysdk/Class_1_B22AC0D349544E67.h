#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_29ADE9724E15BDC9;
namespace System { class Action; }

#define CLASS_1_B22AC0D349544E67_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFD70D0)
#define CLASS_1_B22AC0D349544E67_METHOD_1_04AF66402B9859B9_1_OFFSET UNITYSDK_OFFSET(0xBFD7170)
#define CLASS_1_B22AC0D349544E67_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xBFD7120)
#define CLASS_1_B22AC0D349544E67_METHOD_1_04EAA728819FA889_OFFSET UNITYSDK_OFFSET(0xBFD71C0)
#define CLASS_1_B22AC0D349544E67_METHOD_1_671B1631A0BA5CC8_OFFSET UNITYSDK_OFFSET(0xBFD72F0)
#define CLASS_1_B22AC0D349544E67__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD7710)

inline static constexpr unsigned int Class_1_B22AC0D349544E67_TypeDefinitionIndex = 74984;

class Class_1_B22AC0D349544E67 : public ::System::Object
{
public:
	::System::Action* KNNELAOFNMJ; // 0x10
	::System::Action* CICBJLKMMEG; // 0x18

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

	::System::Void Method_1_04EAA728819FA889()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22AC0D349544E67_METHOD_1_04EAA728819FA889_OFFSET))(this);
	}

	::System::Void Method_1_671B1631A0BA5CC8(::Class_1_29ADE9724E15BDC9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_29ADE9724E15BDC9*))((::PBYTE)hIl2Cpp + CLASS_1_B22AC0D349544E67_METHOD_1_671B1631A0BA5CC8_OFFSET))(this, a1);
	}
};
