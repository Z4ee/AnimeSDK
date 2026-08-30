#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_D8BECDCE48063EC7;
class Class_2_6271301AC04D7ABC_Class_1_2734A650E624DBE1;
class Class_2_D84B4578A743B6D7;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkRecommendDiceEX; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6271301AC04D7ABC_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x19D50410)
#define CLASS_2_6271301AC04D7ABC__CTOR_OFFSET UNITYSDK_OFFSET(0x19D50220)

inline static constexpr unsigned int Class_2_6271301AC04D7ABC_TypeDefinitionIndex = 35604;

class Class_2_6271301AC04D7ABC : public ::Class_1_B55037134F9E6688
{
public:
	::System::Collections::Generic::List_1<::Class_2_6271301AC04D7ABC_Class_1_2734A650E624DBE1*>* LOBDBKFPMGA; // 0x18
	::Class_2_D84B4578A743B6D7* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDiceEX* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDiceEX*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_6271301AC04D7ABC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6271301AC04D7ABC_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}
};
