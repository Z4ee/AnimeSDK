#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierKeyBelongMap; }
namespace System { class String; }

#define CLASS_1_0CDF082B369A0DD8_CLASS_1_5028FC77C91D042C_METHOD_1_2CF1C327F9194435_OFFSET UNITYSDK_OFFSET(0x121ACB80)
#define CLASS_1_0CDF082B369A0DD8_CLASS_1_5028FC77C91D042C__CTOR_OFFSET UNITYSDK_OFFSET(0x121ACB70)

inline static constexpr unsigned int Class_1_0CDF082B369A0DD8_Class_1_5028FC77C91D042C_TypeDefinitionIndex = 79563;

class Class_1_0CDF082B369A0DD8_Class_1_5028FC77C91D042C : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::MoleMole::ConfigMaterialPropertyModifier* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_5028FC77C91D042C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2CF1C327F9194435(::MoleMole::Config::ConfigMaterialPropertyModifierKeyBelongMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierKeyBelongMap*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_5028FC77C91D042C_METHOD_1_2CF1C327F9194435_OFFSET))(this, a1);
	}
};
