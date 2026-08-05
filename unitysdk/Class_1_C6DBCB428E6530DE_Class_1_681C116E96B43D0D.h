#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeamEntity; }
namespace System { class Action; }

#define CLASS_1_C6DBCB428E6530DE_CLASS_1_681C116E96B43D0D_METHOD_1_47A013DB8FF855B2_OFFSET UNITYSDK_OFFSET(0x18142510)
#define CLASS_1_C6DBCB428E6530DE_CLASS_1_681C116E96B43D0D__CTOR_OFFSET UNITYSDK_OFFSET(0x18142500)

inline static constexpr unsigned int Class_1_C6DBCB428E6530DE_Class_1_681C116E96B43D0D_TypeDefinitionIndex = 85785;

class Class_1_C6DBCB428E6530DE_Class_1_681C116E96B43D0D : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6DBCB428E6530DE_CLASS_1_681C116E96B43D0D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_47A013DB8FF855B2(::MoleMole::Config::ConfigTeamEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTeamEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C6DBCB428E6530DE_CLASS_1_681C116E96B43D0D_METHOD_1_47A013DB8FF855B2_OFFSET))(this, a1);
	}
};
