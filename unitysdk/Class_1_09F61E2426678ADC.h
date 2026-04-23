#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_09F61E2426678ADC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A4FD20)
#define CLASS_1_09F61E2426678ADC_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x11A4FD70)
#define CLASS_1_09F61E2426678ADC_METHOD_1_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x11A4FB10)
#define CLASS_1_09F61E2426678ADC_METHOD_1_53D50926B1AC5CC6_OFFSET UNITYSDK_OFFSET(0x11A4FCC0)
#define CLASS_1_09F61E2426678ADC_METHOD_1_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x11A4FBA0)
#define CLASS_1_09F61E2426678ADC__CTOR_OFFSET UNITYSDK_OFFSET(0x11A4FA70)

inline static constexpr unsigned int Class_1_09F61E2426678ADC_TypeDefinitionIndex = 69510;

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

	::System::Void Method_1_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_METHOD_1_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_1_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_METHOD_1_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_1_53D50926B1AC5CC6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_METHOD_1_53D50926B1AC5CC6_OFFSET))(this);
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
