#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigOnGoingTypeDurationData; }
namespace System { class Action; }

#define CLASS_1_D952E88E277CCD41_CLASS_1_26AEBA17DD830D10_METHOD_1_CC9270C439249647_OFFSET UNITYSDK_OFFSET(0x12D479A0)
#define CLASS_1_D952E88E277CCD41_CLASS_1_26AEBA17DD830D10__CTOR_OFFSET UNITYSDK_OFFSET(0x12D47990)

inline static constexpr unsigned int Class_1_D952E88E277CCD41_Class_1_26AEBA17DD830D10_TypeDefinitionIndex = 81549;

class Class_1_D952E88E277CCD41_Class_1_26AEBA17DD830D10 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D952E88E277CCD41_CLASS_1_26AEBA17DD830D10__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CC9270C439249647(::MoleMole::Config::ConfigOnGoingTypeDurationData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigOnGoingTypeDurationData*))((::PBYTE)hIl2Cpp + CLASS_1_D952E88E277CCD41_CLASS_1_26AEBA17DD830D10_METHOD_1_CC9270C439249647_OFFSET))(this, a1);
	}
};
