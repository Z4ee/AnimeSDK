#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTurnBaseBattle; }
namespace System { class Action; }

#define CLASS_1_EE6F6A610AE92B17_CLASS_1_00E41CB962C533FF_METHOD_1_DDDF1CCEC4170A9C_OFFSET UNITYSDK_OFFSET(0x12B99810)
#define CLASS_1_EE6F6A610AE92B17_CLASS_1_00E41CB962C533FF__CTOR_OFFSET UNITYSDK_OFFSET(0x12B99800)

inline static constexpr unsigned int Class_1_EE6F6A610AE92B17_Class_1_00E41CB962C533FF_TypeDefinitionIndex = 79419;

class Class_1_EE6F6A610AE92B17_Class_1_00E41CB962C533FF : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE6F6A610AE92B17_CLASS_1_00E41CB962C533FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DDDF1CCEC4170A9C(::MoleMole::Config::ConfigTurnBaseBattle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTurnBaseBattle*))((::PBYTE)hIl2Cpp + CLASS_1_EE6F6A610AE92B17_CLASS_1_00E41CB962C533FF_METHOD_1_DDDF1CCEC4170A9C_OFFSET))(this, a1);
	}
};
