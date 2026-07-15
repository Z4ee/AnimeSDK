#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_09F61E2426678ADC_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14A1AEC0)
#define CLASS_1_09F61E2426678ADC_2_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x14A1AE70)
#define CLASS_1_09F61E2426678ADC_2_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x14A1ACA0)
#define CLASS_1_09F61E2426678ADC_2_METHOD_1_F4AC2F73B2036484_OFFSET UNITYSDK_OFFSET(0x14A1AD50)
#define CLASS_1_09F61E2426678ADC_2_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x14A1ADB0)
#define CLASS_1_09F61E2426678ADC_2__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1ABF0)

inline static constexpr unsigned int Class_1_09F61E2426678ADC_2_TypeDefinitionIndex = 71850;

class Class_1_09F61E2426678ADC_2 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::Boolean Field_1_3; // 0x20

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_2_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4AC2F73B2036484()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_2_METHOD_1_F4AC2F73B2036484_OFFSET))(this);
	}

	::System::Void Method_1_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_2_METHOD_1_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_2_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_2_DISPOSE_OFFSET))(this);
	}
};
