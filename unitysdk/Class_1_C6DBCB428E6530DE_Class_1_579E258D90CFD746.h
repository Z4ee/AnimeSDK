#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeamEntity; }
namespace System { class Action; }

#define CLASS_1_C6DBCB428E6530DE_CLASS_1_579E258D90CFD746_METHOD_1_64CDDBFDDB211347_OFFSET UNITYSDK_OFFSET(0x94E7B10)
#define CLASS_1_C6DBCB428E6530DE_CLASS_1_579E258D90CFD746__CTOR_OFFSET UNITYSDK_OFFSET(0x94E7B00)

inline static constexpr unsigned int Class_1_C6DBCB428E6530DE_Class_1_579E258D90CFD746_TypeDefinitionIndex = 72883;

class Class_1_C6DBCB428E6530DE_Class_1_579E258D90CFD746 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6DBCB428E6530DE_CLASS_1_579E258D90CFD746__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_64CDDBFDDB211347(::MoleMole::Config::ConfigTeamEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTeamEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C6DBCB428E6530DE_CLASS_1_579E258D90CFD746_METHOD_1_64CDDBFDDB211347_OFFSET))(this, a1);
	}
};
