#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_B1A7D8EBAB39D13D;
namespace RPG::GameCore { class DiceCombatTaskConfig_ClearCustomValue; }

#define CLASS_2_1C5CB077B5C14C8A_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x165CC650)
#define CLASS_2_1C5CB077B5C14C8A__CTOR_OFFSET UNITYSDK_OFFSET(0x165CC640)

inline static constexpr unsigned int Class_2_1C5CB077B5C14C8A_TypeDefinitionIndex = 28473;

class Class_2_1C5CB077B5C14C8A : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue* Field_2_0; // 0x18
	::Class_1_B1A7D8EBAB39D13D* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue* a1, ::Class_1_B1A7D8EBAB39D13D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue*, ::Class_1_B1A7D8EBAB39D13D*))((::PBYTE)hIl2Cpp + CLASS_2_1C5CB077B5C14C8A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C5CB077B5C14C8A_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}
};
