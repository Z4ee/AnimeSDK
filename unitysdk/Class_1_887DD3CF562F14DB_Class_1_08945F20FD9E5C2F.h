#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLockTargetMisc; }
namespace System { class Action; }

#define CLASS_1_887DD3CF562F14DB_CLASS_1_08945F20FD9E5C2F_METHOD_1_91F4DF99965BB862_OFFSET UNITYSDK_OFFSET(0x12A60780)
#define CLASS_1_887DD3CF562F14DB_CLASS_1_08945F20FD9E5C2F__CTOR_OFFSET UNITYSDK_OFFSET(0x12A60770)

inline static constexpr unsigned int Class_1_887DD3CF562F14DB_Class_1_08945F20FD9E5C2F_TypeDefinitionIndex = 41869;

class Class_1_887DD3CF562F14DB_Class_1_08945F20FD9E5C2F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_CLASS_1_08945F20FD9E5C2F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_91F4DF99965BB862(::MoleMole::Config::ConfigLockTargetMisc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLockTargetMisc*))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_CLASS_1_08945F20FD9E5C2F_METHOD_1_91F4DF99965BB862_OFFSET))(this, a1);
	}
};
