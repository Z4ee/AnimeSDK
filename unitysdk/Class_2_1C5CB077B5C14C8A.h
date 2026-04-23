#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatTaskConfig_ClearCustomValue; }

#define CLASS_2_1C5CB077B5C14C8A_METHOD_2_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x17C6B670)
#define CLASS_2_1C5CB077B5C14C8A__CTOR_OFFSET UNITYSDK_OFFSET(0x17C6B660)

inline static constexpr unsigned int Class_2_1C5CB077B5C14C8A_TypeDefinitionIndex = 34153;

class Class_2_1C5CB077B5C14C8A : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue* Field_2_0; // 0x18
	::Class_1_EA5232D6CAD71030* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_2_1C5CB077B5C14C8A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C5CB077B5C14C8A_METHOD_2_0581090195E9C81F_OFFSET))(this);
	}
};
