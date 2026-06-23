#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAutoBattleAccessoryEffect; }
namespace System { class Action; }

#define CLASS_1_A8D9A742F7AB118B_CLASS_1_5AF8506127B43751_METHOD_1_56A218CA2D8D33ED_OFFSET UNITYSDK_OFFSET(0x127E22A0)
#define CLASS_1_A8D9A742F7AB118B_CLASS_1_5AF8506127B43751__CTOR_OFFSET UNITYSDK_OFFSET(0x127E2290)

inline static constexpr unsigned int Class_1_A8D9A742F7AB118B_Class_1_5AF8506127B43751_TypeDefinitionIndex = 78801;

class Class_1_A8D9A742F7AB118B_Class_1_5AF8506127B43751 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8D9A742F7AB118B_CLASS_1_5AF8506127B43751__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_56A218CA2D8D33ED(::MoleMole::Config::ConfigAutoBattleAccessoryEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAutoBattleAccessoryEffect*))((::PBYTE)hIl2Cpp + CLASS_1_A8D9A742F7AB118B_CLASS_1_5AF8506127B43751_METHOD_1_56A218CA2D8D33ED_OFFSET))(this, a1);
	}
};
