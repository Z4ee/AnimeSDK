#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_09F61E2426678ADC_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1872AE30)
#define CLASS_1_09F61E2426678ADC_3_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x1872AE80)
#define CLASS_1_09F61E2426678ADC_3_METHOD_1_50884B570C30FEE7_OFFSET UNITYSDK_OFFSET(0x1872ACF0)
#define CLASS_1_09F61E2426678ADC_3_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x1872AD70)
#define CLASS_1_09F61E2426678ADC_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1872AC40)

inline static constexpr unsigned int Class_1_09F61E2426678ADC_3_TypeDefinitionIndex = 71853;

class Class_1_09F61E2426678ADC_3 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_50884B570C30FEE7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_3_METHOD_1_50884B570C30FEE7_OFFSET))(this, a1);
	}

	::System::Void Method_1_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_3_METHOD_1_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_3_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}
};
