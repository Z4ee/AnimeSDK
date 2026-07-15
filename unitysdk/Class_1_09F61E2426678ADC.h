#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_09F61E2426678ADC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179A4F40)
#define CLASS_1_09F61E2426678ADC_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x179A4F90)
#define CLASS_1_09F61E2426678ADC_METHOD_1_F4AC2F73B2036484_OFFSET UNITYSDK_OFFSET(0x179A4EE0)
#define CLASS_1_09F61E2426678ADC_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x179A4D00)
#define CLASS_1_09F61E2426678ADC_METHOD_1_FCEF005F844F513C_OFFSET UNITYSDK_OFFSET(0x179A4DC0)
#define CLASS_1_09F61E2426678ADC__CTOR_OFFSET UNITYSDK_OFFSET(0x179A4C50)

inline static constexpr unsigned int Class_1_09F61E2426678ADC_TypeDefinitionIndex = 71845;

class Class_1_09F61E2426678ADC : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::Boolean Field_1_3; // 0x20

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
