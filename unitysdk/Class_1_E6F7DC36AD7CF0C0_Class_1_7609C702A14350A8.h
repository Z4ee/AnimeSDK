#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_E6F7DC36AD7CF0C0_Class_1_174E2793BBEC2575;
namespace MoleMole { class ConfigTimelineDataExtra; }

#define CLASS_1_E6F7DC36AD7CF0C0_CLASS_1_7609C702A14350A8_METHOD_1_83A74F6BD5FB2415_OFFSET UNITYSDK_OFFSET(0x13B537E0)
#define CLASS_1_E6F7DC36AD7CF0C0_CLASS_1_7609C702A14350A8__CTOR_OFFSET UNITYSDK_OFFSET(0x13B537D0)

inline static constexpr unsigned int Class_1_E6F7DC36AD7CF0C0_Class_1_7609C702A14350A8_TypeDefinitionIndex = 68621;

class Class_1_E6F7DC36AD7CF0C0_Class_1_7609C702A14350A8 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::Class_1_E6F7DC36AD7CF0C0_Class_1_174E2793BBEC2575* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6F7DC36AD7CF0C0_CLASS_1_7609C702A14350A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_83A74F6BD5FB2415(::MoleMole::ConfigTimelineDataExtra* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTimelineDataExtra*))((::PBYTE)hIl2Cpp + CLASS_1_E6F7DC36AD7CF0C0_CLASS_1_7609C702A14350A8_METHOD_1_83A74F6BD5FB2415_OFFSET))(this, a1);
	}
};
