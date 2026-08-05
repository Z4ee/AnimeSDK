#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTriggerCaches; }
namespace System { class Action; }

#define CLASS_1_7A6E8680968BC407_CLASS_1_DA8C2AB65389B5A1_METHOD_1_E7C228CCD446887D_OFFSET UNITYSDK_OFFSET(0x1476D700)
#define CLASS_1_7A6E8680968BC407_CLASS_1_DA8C2AB65389B5A1__CTOR_OFFSET UNITYSDK_OFFSET(0x1476D6F0)

inline static constexpr unsigned int Class_1_7A6E8680968BC407_Class_1_DA8C2AB65389B5A1_TypeDefinitionIndex = 50658;

class Class_1_7A6E8680968BC407_Class_1_DA8C2AB65389B5A1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A6E8680968BC407_CLASS_1_DA8C2AB65389B5A1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E7C228CCD446887D(::MoleMole::Config::ConfigTriggerCaches* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerCaches*))((::PBYTE)hIl2Cpp + CLASS_1_7A6E8680968BC407_CLASS_1_DA8C2AB65389B5A1_METHOD_1_E7C228CCD446887D_OFFSET))(this, a1);
	}
};
