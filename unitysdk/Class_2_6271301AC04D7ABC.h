#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_D8BECDCE48063EC7;
class Class_2_6271301AC04D7ABC_Class_1_2734A650E624DBE1;
class Class_2_D84B4578A743B6D7;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkRecommendDiceEX; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6271301AC04D7ABC_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x18B8B200)
#define CLASS_2_6271301AC04D7ABC__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8B010)

inline static constexpr unsigned int Class_2_6271301AC04D7ABC_TypeDefinitionIndex = 34361;

class Class_2_6271301AC04D7ABC : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_D84B4578A743B6D7* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_2_6271301AC04D7ABC_Class_1_2734A650E624DBE1*>* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDiceEX* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDiceEX*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_6271301AC04D7ABC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6271301AC04D7ABC_METHOD_2_89EF21CA0414B145_OFFSET))(this);
	}
};
