#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAudioBasePath; }
namespace System { class Action; }

#define CLASS_1_7EDC5CD53A870E73_CLASS_1_637C58BEFFC233EA_METHOD_1_CC6403BD146937B4_OFFSET UNITYSDK_OFFSET(0x185E7EA0)
#define CLASS_1_7EDC5CD53A870E73_CLASS_1_637C58BEFFC233EA__CTOR_OFFSET UNITYSDK_OFFSET(0x185E7E90)

inline static constexpr unsigned int Class_1_7EDC5CD53A870E73_Class_1_637C58BEFFC233EA_TypeDefinitionIndex = 84235;

class Class_1_7EDC5CD53A870E73_Class_1_637C58BEFFC233EA : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EDC5CD53A870E73_CLASS_1_637C58BEFFC233EA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CC6403BD146937B4(::MoleMole::Config::ConfigAudioBasePath* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAudioBasePath*))((::PBYTE)hIl2Cpp + CLASS_1_7EDC5CD53A870E73_CLASS_1_637C58BEFFC233EA_METHOD_1_CC6403BD146937B4_OFFSET))(this, a1);
	}
};
