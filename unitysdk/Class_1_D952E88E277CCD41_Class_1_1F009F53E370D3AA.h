#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigOnGoingTypeDurationData; }
namespace System { class Action; }

#define CLASS_1_D952E88E277CCD41_CLASS_1_1F009F53E370D3AA_METHOD_1_ECAF46CFA8E746B2_OFFSET UNITYSDK_OFFSET(0x199343B0)
#define CLASS_1_D952E88E277CCD41_CLASS_1_1F009F53E370D3AA__CTOR_OFFSET UNITYSDK_OFFSET(0x199343A0)

inline static constexpr unsigned int Class_1_D952E88E277CCD41_Class_1_1F009F53E370D3AA_TypeDefinitionIndex = 88128;

class Class_1_D952E88E277CCD41_Class_1_1F009F53E370D3AA : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D952E88E277CCD41_CLASS_1_1F009F53E370D3AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ECAF46CFA8E746B2(::MoleMole::Config::ConfigOnGoingTypeDurationData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigOnGoingTypeDurationData*))((::PBYTE)hIl2Cpp + CLASS_1_D952E88E277CCD41_CLASS_1_1F009F53E370D3AA_METHOD_1_ECAF46CFA8E746B2_OFFSET))(this, a1);
	}
};
