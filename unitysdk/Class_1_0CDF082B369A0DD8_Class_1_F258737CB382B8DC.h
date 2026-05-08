#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_0CDF082B369A0DD8_Class_1_F6CF446D65DF58A2_9;
namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }

#define CLASS_1_0CDF082B369A0DD8_CLASS_1_F258737CB382B8DC_METHOD_1_3497F228CEA35B51_OFFSET UNITYSDK_OFFSET(0x121AC8D0)
#define CLASS_1_0CDF082B369A0DD8_CLASS_1_F258737CB382B8DC__CTOR_OFFSET UNITYSDK_OFFSET(0x121AC8C0)

inline static constexpr unsigned int Class_1_0CDF082B369A0DD8_Class_1_F258737CB382B8DC_TypeDefinitionIndex = 79560;

class Class_1_0CDF082B369A0DD8_Class_1_F258737CB382B8DC : public ::System::Object
{
public:
	::Class_1_0CDF082B369A0DD8_Class_1_F6CF446D65DF58A2_9* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_F258737CB382B8DC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3497F228CEA35B51(::MoleMole::Config::ConfigMaterialPropertyModifierMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_F258737CB382B8DC_METHOD_1_3497F228CEA35B51_OFFSET))(this, a1);
	}
};
