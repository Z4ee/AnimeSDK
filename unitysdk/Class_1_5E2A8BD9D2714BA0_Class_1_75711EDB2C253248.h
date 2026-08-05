#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMonsterAlerts; }
namespace System { class Action; }

#define CLASS_1_5E2A8BD9D2714BA0_CLASS_1_75711EDB2C253248_METHOD_1_419D341B8A23E037_OFFSET UNITYSDK_OFFSET(0x185E4780)
#define CLASS_1_5E2A8BD9D2714BA0_CLASS_1_75711EDB2C253248__CTOR_OFFSET UNITYSDK_OFFSET(0x185E4770)

inline static constexpr unsigned int Class_1_5E2A8BD9D2714BA0_Class_1_75711EDB2C253248_TypeDefinitionIndex = 88726;

class Class_1_5E2A8BD9D2714BA0_Class_1_75711EDB2C253248 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E2A8BD9D2714BA0_CLASS_1_75711EDB2C253248__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_419D341B8A23E037(::MoleMole::Config::ConfigMonsterAlerts* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMonsterAlerts*))((::PBYTE)hIl2Cpp + CLASS_1_5E2A8BD9D2714BA0_CLASS_1_75711EDB2C253248_METHOD_1_419D341B8A23E037_OFFSET))(this, a1);
	}
};
