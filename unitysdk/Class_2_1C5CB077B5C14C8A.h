#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatTaskConfig_ClearCustomValue; }

#define CLASS_2_1C5CB077B5C14C8A_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x19D2B910)
#define CLASS_2_1C5CB077B5C14C8A__CTOR_OFFSET UNITYSDK_OFFSET(0x19D2B900)

inline static constexpr unsigned int Class_2_1C5CB077B5C14C8A_TypeDefinitionIndex = 35678;

class Class_2_1C5CB077B5C14C8A : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue* IGHAHBNLIJA; // 0x18
	::Class_1_D8BECDCE48063EC7* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_1C5CB077B5C14C8A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C5CB077B5C14C8A_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}
};
