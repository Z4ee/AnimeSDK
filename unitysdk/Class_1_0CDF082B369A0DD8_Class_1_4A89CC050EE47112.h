#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialPropertyModifierBatchLoad; }
namespace System { class Action; }

#define CLASS_1_0CDF082B369A0DD8_CLASS_1_4A89CC050EE47112_METHOD_1_07DA8233FC4E1C54_OFFSET UNITYSDK_OFFSET(0x12C432B0)
#define CLASS_1_0CDF082B369A0DD8_CLASS_1_4A89CC050EE47112__CTOR_OFFSET UNITYSDK_OFFSET(0x12C432A0)

inline static constexpr unsigned int Class_1_0CDF082B369A0DD8_Class_1_4A89CC050EE47112_TypeDefinitionIndex = 79561;

class Class_1_0CDF082B369A0DD8_Class_1_4A89CC050EE47112 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_4A89CC050EE47112__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_07DA8233FC4E1C54(::MoleMole::Config::ConfigMaterialPropertyModifierBatchLoad* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierBatchLoad*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_4A89CC050EE47112_METHOD_1_07DA8233FC4E1C54_OFFSET))(this, a1);
	}
};
