#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTurnBaseBattle; }
namespace System { class Action; }

#define CLASS_1_EE6F6A610AE92B17_CLASS_1_EA0BB92E25B9E219_METHOD_1_C7FD4E3E41150D15_OFFSET UNITYSDK_OFFSET(0x1A8232E0)
#define CLASS_1_EE6F6A610AE92B17_CLASS_1_EA0BB92E25B9E219__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8232D0)

inline static constexpr unsigned int Class_1_EE6F6A610AE92B17_Class_1_EA0BB92E25B9E219_TypeDefinitionIndex = 72064;

class Class_1_EE6F6A610AE92B17_Class_1_EA0BB92E25B9E219 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE6F6A610AE92B17_CLASS_1_EA0BB92E25B9E219__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C7FD4E3E41150D15(::MoleMole::Config::ConfigTurnBaseBattle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTurnBaseBattle*))((::PBYTE)hIl2Cpp + CLASS_1_EE6F6A610AE92B17_CLASS_1_EA0BB92E25B9E219_METHOD_1_C7FD4E3E41150D15_OFFSET))(this, a1);
	}
};
