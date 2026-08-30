#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_09F61E2426678ADC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17BABDE0)
#define CLASS_1_09F61E2426678ADC_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x17BABE30)
#define CLASS_1_09F61E2426678ADC_METHOD_1_F4AC2F73B2036484_OFFSET UNITYSDK_OFFSET(0x17BABD80)
#define CLASS_1_09F61E2426678ADC_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x17BABBA0)
#define CLASS_1_09F61E2426678ADC_METHOD_1_FCEF005F844F513C_OFFSET UNITYSDK_OFFSET(0x17BABC60)
#define CLASS_1_09F61E2426678ADC__CTOR_OFFSET UNITYSDK_OFFSET(0x17BABAF0)

inline static constexpr unsigned int Class_1_09F61E2426678ADC_TypeDefinitionIndex = 75151;

class Class_1_09F61E2426678ADC : public ::System::Object
{
public:
	::System::Action* LIOAPMDFLPL; // 0x10
	::System::UInt32 HIIFNLNJBLE; // 0x18
	::System::UInt32 IKOONPEBGLO; // 0x1C
	::System::Boolean AFLGDFPEMNP; // 0x20

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_METHOD_1_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Method_1_FCEF005F844F513C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_METHOD_1_FCEF005F844F513C_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4AC2F73B2036484()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_METHOD_1_F4AC2F73B2036484_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}
};
