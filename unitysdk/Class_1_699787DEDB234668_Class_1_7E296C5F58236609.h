#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayColliderCfgData.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayColliderCfgData_PanelSettle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_699787DEDB234668_CLASS_1_7E296C5F58236609_METHOD_1_66D696BA9C7F9D12_OFFSET UNITYSDK_OFFSET(0x17FF4990)
#define CLASS_1_699787DEDB234668_CLASS_1_7E296C5F58236609_METHOD_1_E7E94E65AE6D6ADC_OFFSET UNITYSDK_OFFSET(0x17FF4910)
#define CLASS_1_699787DEDB234668_CLASS_1_7E296C5F58236609__CTOR_OFFSET UNITYSDK_OFFSET(0x17FF4900)

inline static constexpr unsigned int Class_1_699787DEDB234668_Class_1_7E296C5F58236609_TypeDefinitionIndex = 49560;

class Class_1_699787DEDB234668_Class_1_7E296C5F58236609 : public ::System::Object
{
public:
	::System::Func_2<::MoleMole::Config::DisplayCase::DisplayColliderCfgData_PanelSettle, ::System::Boolean>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_CLASS_1_7E296C5F58236609__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E7E94E65AE6D6ADC(::MoleMole::Config::DisplayCase::DisplayColliderCfgData a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DisplayCase::DisplayColliderCfgData))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_CLASS_1_7E296C5F58236609_METHOD_1_E7E94E65AE6D6ADC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_66D696BA9C7F9D12(::MoleMole::Config::DisplayCase::DisplayColliderCfgData_PanelSettle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DisplayCase::DisplayColliderCfgData_PanelSettle))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_CLASS_1_7E296C5F58236609_METHOD_1_66D696BA9C7F9D12_OFFSET))(this, a1);
	}
};
