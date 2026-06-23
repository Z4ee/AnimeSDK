#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_5E43193B7E7BBE0F_Class_1_E0F441AF0A75A238;
namespace MoleMole::Config { class ConfigEntitySharedAnimEvents; }

#define CLASS_1_5E43193B7E7BBE0F_CLASS_1_35CF6196CB4C8F31_METHOD_1_EFA3365A2A1CBA7B_OFFSET UNITYSDK_OFFSET(0x12CC8840)
#define CLASS_1_5E43193B7E7BBE0F_CLASS_1_35CF6196CB4C8F31__CTOR_OFFSET UNITYSDK_OFFSET(0x12CC8830)

inline static constexpr unsigned int Class_1_5E43193B7E7BBE0F_Class_1_35CF6196CB4C8F31_TypeDefinitionIndex = 78873;

class Class_1_5E43193B7E7BBE0F_Class_1_35CF6196CB4C8F31 : public ::System::Object
{
public:
	::Class_1_5E43193B7E7BBE0F_Class_1_E0F441AF0A75A238* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_CLASS_1_35CF6196CB4C8F31__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EFA3365A2A1CBA7B(::MoleMole::Config::ConfigEntitySharedAnimEvents* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntitySharedAnimEvents*))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_CLASS_1_35CF6196CB4C8F31_METHOD_1_EFA3365A2A1CBA7B_OFFSET))(this, a1);
	}
};
