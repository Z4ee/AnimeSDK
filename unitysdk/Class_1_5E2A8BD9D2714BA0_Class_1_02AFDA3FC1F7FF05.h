#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMonsterAlerts; }
namespace System { class Action; }

#define CLASS_1_5E2A8BD9D2714BA0_CLASS_1_02AFDA3FC1F7FF05_METHOD_1_2554D368C141243C_OFFSET UNITYSDK_OFFSET(0xF090E10)
#define CLASS_1_5E2A8BD9D2714BA0_CLASS_1_02AFDA3FC1F7FF05__CTOR_OFFSET UNITYSDK_OFFSET(0xF090E00)

inline static constexpr unsigned int Class_1_5E2A8BD9D2714BA0_Class_1_02AFDA3FC1F7FF05_TypeDefinitionIndex = 42621;

class Class_1_5E2A8BD9D2714BA0_Class_1_02AFDA3FC1F7FF05 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E2A8BD9D2714BA0_CLASS_1_02AFDA3FC1F7FF05__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2554D368C141243C(::MoleMole::Config::ConfigMonsterAlerts* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMonsterAlerts*))((::PBYTE)hIl2Cpp + CLASS_1_5E2A8BD9D2714BA0_CLASS_1_02AFDA3FC1F7FF05_METHOD_1_2554D368C141243C_OFFSET))(this, a1);
	}
};
