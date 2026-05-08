#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }
namespace System { class String; }

#define CLASS_1_0CDF082B369A0DD8_CLASS_1_80B36CC3BA9B6F71_METHOD_1_16B48B95B7F6E803_OFFSET UNITYSDK_OFFSET(0x1328E250)
#define CLASS_1_0CDF082B369A0DD8_CLASS_1_80B36CC3BA9B6F71__CTOR_OFFSET UNITYSDK_OFFSET(0x1328E240)

inline static constexpr unsigned int Class_1_0CDF082B369A0DD8_Class_1_80B36CC3BA9B6F71_TypeDefinitionIndex = 79565;

class Class_1_0CDF082B369A0DD8_Class_1_80B36CC3BA9B6F71 : public ::System::Object
{
public:
	::MoleMole::ConfigMaterialPropertyModifier* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::Foundation::AssetPath Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_80B36CC3BA9B6F71__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_16B48B95B7F6E803(::MoleMole::Config::ConfigMaterialPropertyModifierMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_80B36CC3BA9B6F71_METHOD_1_16B48B95B7F6E803_OFFSET))(this, a1);
	}
};
