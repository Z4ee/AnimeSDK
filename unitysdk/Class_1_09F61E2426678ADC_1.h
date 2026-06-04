#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_09F61E2426678ADC_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA44BC20)
#define CLASS_1_09F61E2426678ADC_1_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xA44BBD0)
#define CLASS_1_09F61E2426678ADC_1_METHOD_1_184AE6D5B1216FA2_OFFSET UNITYSDK_OFFSET(0xA44B990)
#define CLASS_1_09F61E2426678ADC_1_METHOD_1_1D8C65850BBB6C8B_OFFSET UNITYSDK_OFFSET(0xA44B8C0)
#define CLASS_1_09F61E2426678ADC_1_METHOD_1_2C8484BE9A26CCD5_OFFSET UNITYSDK_OFFSET(0xA44BB10)
#define CLASS_1_09F61E2426678ADC_1_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA44BAB0)
#define CLASS_1_09F61E2426678ADC_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA44BA70)
#define CLASS_1_09F61E2426678ADC_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA44B770)

inline static constexpr unsigned int Class_1_09F61E2426678ADC_1_TypeDefinitionIndex = 70323;

class Class_1_09F61E2426678ADC_1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::Boolean Field_1_3; // 0x20

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_1D8C65850BBB6C8B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_1_METHOD_1_1D8C65850BBB6C8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::UInt32 Method_1_184AE6D5B1216FA2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_1_METHOD_1_184AE6D5B1216FA2_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_1_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_2C8484BE9A26CCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_1_METHOD_1_2C8484BE9A26CCD5_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_1_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_1_DISPOSE_OFFSET))(this);
	}
};
