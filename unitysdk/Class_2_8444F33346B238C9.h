#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatTaskConfig_ModifyPreviewValue; }

#define CLASS_2_8444F33346B238C9_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x17D493C0)
#define CLASS_2_8444F33346B238C9__CTOR_OFFSET UNITYSDK_OFFSET(0x17D493B0)

inline static constexpr unsigned int Class_2_8444F33346B238C9_TypeDefinitionIndex = 34077;

class Class_2_8444F33346B238C9 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue* Field_2_1; // 0x18
	::Class_1_EA5232D6CAD71030* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_2_8444F33346B238C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8444F33346B238C9_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}
};
