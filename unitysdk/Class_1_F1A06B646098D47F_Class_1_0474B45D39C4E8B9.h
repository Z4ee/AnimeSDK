#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigControllableObject; }
namespace System { class Action; }

#define CLASS_1_F1A06B646098D47F_CLASS_1_0474B45D39C4E8B9_METHOD_1_F2736D2EC902AF88_OFFSET UNITYSDK_OFFSET(0x158F1230)
#define CLASS_1_F1A06B646098D47F_CLASS_1_0474B45D39C4E8B9__CTOR_OFFSET UNITYSDK_OFFSET(0x158F1220)

inline static constexpr unsigned int Class_1_F1A06B646098D47F_Class_1_0474B45D39C4E8B9_TypeDefinitionIndex = 57483;

class Class_1_F1A06B646098D47F_Class_1_0474B45D39C4E8B9 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A06B646098D47F_CLASS_1_0474B45D39C4E8B9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F2736D2EC902AF88(::MoleMole::Config::ConfigControllableObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigControllableObject*))((::PBYTE)hIl2Cpp + CLASS_1_F1A06B646098D47F_CLASS_1_0474B45D39C4E8B9_METHOD_1_F2736D2EC902AF88_OFFSET))(this, a1);
	}
};
