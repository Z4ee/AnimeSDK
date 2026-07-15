#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_09F61E2426678ADC_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188D86C0)
#define CLASS_1_09F61E2426678ADC_1_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x188D8670)
#define CLASS_1_09F61E2426678ADC_1_METHOD_1_184AE6D5B1216FA2_OFFSET UNITYSDK_OFFSET(0x188D8430)
#define CLASS_1_09F61E2426678ADC_1_METHOD_1_1D8C65850BBB6C8B_OFFSET UNITYSDK_OFFSET(0x188D8360)
#define CLASS_1_09F61E2426678ADC_1_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x188D8550)
#define CLASS_1_09F61E2426678ADC_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x188D8510)
#define CLASS_1_09F61E2426678ADC_1_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x188D85B0)
#define CLASS_1_09F61E2426678ADC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x188D8210)

inline static constexpr unsigned int Class_1_09F61E2426678ADC_1_TypeDefinitionIndex = 71846;

class Class_1_09F61E2426678ADC_1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20

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

	::System::Void Method_1_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_1_METHOD_1_F944CC0CE8B3E57A_OFFSET))(this);
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
