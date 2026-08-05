#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIScriptableAnimationV2Index; }
namespace System { class Action; }

#define CLASS_1_3D4199A51D677042_CLASS_1_99076487DBD2AB12_METHOD_1_7ADAFCA44D3582EE_OFFSET UNITYSDK_OFFSET(0x193A9780)
#define CLASS_1_3D4199A51D677042_CLASS_1_99076487DBD2AB12__CTOR_OFFSET UNITYSDK_OFFSET(0x193A9770)

inline static constexpr unsigned int Class_1_3D4199A51D677042_Class_1_99076487DBD2AB12_TypeDefinitionIndex = 44793;

class Class_1_3D4199A51D677042_Class_1_99076487DBD2AB12 : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D4199A51D677042_CLASS_1_99076487DBD2AB12__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7ADAFCA44D3582EE(::MoleMole::Config::ConfigUIScriptableAnimationV2Index* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIScriptableAnimationV2Index*))((::PBYTE)hIl2Cpp + CLASS_1_3D4199A51D677042_CLASS_1_99076487DBD2AB12_METHOD_1_7ADAFCA44D3582EE_OFFSET))(this, a1);
	}
};
