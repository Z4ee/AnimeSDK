#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAudioBasePath; }
namespace System { class Action; }

#define CLASS_1_7EDC5CD53A870E73_CLASS_1_C93041C3AA963AD7_METHOD_1_78BB826E949BA38D_OFFSET UNITYSDK_OFFSET(0x153C9180)
#define CLASS_1_7EDC5CD53A870E73_CLASS_1_C93041C3AA963AD7__CTOR_OFFSET UNITYSDK_OFFSET(0x153C9170)

inline static constexpr unsigned int Class_1_7EDC5CD53A870E73_Class_1_C93041C3AA963AD7_TypeDefinitionIndex = 62555;

class Class_1_7EDC5CD53A870E73_Class_1_C93041C3AA963AD7 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EDC5CD53A870E73_CLASS_1_C93041C3AA963AD7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_78BB826E949BA38D(::MoleMole::Config::ConfigAudioBasePath* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAudioBasePath*))((::PBYTE)hIl2Cpp + CLASS_1_7EDC5CD53A870E73_CLASS_1_C93041C3AA963AD7_METHOD_1_78BB826E949BA38D_OFFSET))(this, a1);
	}
};
