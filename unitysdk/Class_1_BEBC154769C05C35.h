#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BEBC154769C05C35_Class_1_18BFEAD82BA3C5E8_1;
namespace System { class Action; }
namespace System { class IDisposable; }

#define CLASS_1_BEBC154769C05C35_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC89B40)
#define CLASS_1_BEBC154769C05C35_METHOD_1_280292BEAA52CA3E_OFFSET UNITYSDK_OFFSET(0x1EC89990)
#define CLASS_1_BEBC154769C05C35_METHOD_1_5B760F0512A2A583_OFFSET UNITYSDK_OFFSET(0x1EC89C80)
#define CLASS_1_BEBC154769C05C35__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC898E0)

inline static constexpr unsigned int Class_1_BEBC154769C05C35_TypeDefinitionIndex = 44187;

class Class_1_BEBC154769C05C35 : public ::System::Object
{
public:
	::System::Action* IOGFELMDNEK; // 0x10
	::System::IDisposable* HDAKHNOIENL; // 0x18
	::System::Action* EDGCAOBECGF; // 0x20

	::System::Void _ctor(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BEBC154769C05C35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::IDisposable* Method_1_280292BEAA52CA3E()
	{
		return ((::System::IDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEBC154769C05C35_METHOD_1_280292BEAA52CA3E_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEBC154769C05C35_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5B760F0512A2A583(::Class_1_BEBC154769C05C35_Class_1_18BFEAD82BA3C5E8_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BEBC154769C05C35_Class_1_18BFEAD82BA3C5E8_1*))((::PBYTE)hIl2Cpp + CLASS_1_BEBC154769C05C35_METHOD_1_5B760F0512A2A583_OFFSET))(this, a1);
	}
};
