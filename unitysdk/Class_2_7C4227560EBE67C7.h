#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_20D3150E1235DCB5.h"

class Class_1_152140BAFD2DB102;
class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_2_7C4227560EBE67C7_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x10A22BA0)
#define CLASS_2_7C4227560EBE67C7_METHOD_2_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0x10A22580)
#define CLASS_2_7C4227560EBE67C7_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x10A22A20)
#define CLASS_2_7C4227560EBE67C7_METHOD_2_996E0DF7AD607754_OFFSET UNITYSDK_OFFSET(0x10A22950)
#define CLASS_2_7C4227560EBE67C7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10A22AD0)
#define CLASS_2_7C4227560EBE67C7_TICK_OFFSET UNITYSDK_OFFSET(0x10A22B20)
#define CLASS_2_7C4227560EBE67C7__CTOR_OFFSET UNITYSDK_OFFSET(0x10A224A0)

inline static constexpr unsigned int Class_2_7C4227560EBE67C7_TypeDefinitionIndex = 45097;

class Class_2_7C4227560EBE67C7 : public ::Class_1_20D3150E1235DCB5
{
public:
	::RPG::GameCore::SkillCharacterComponent* Field_2_0; // 0x28
	::System::Boolean Field_2_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_2_7C4227560EBE67C7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_57F015DFC718ABA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C4227560EBE67C7_METHOD_2_57F015DFC718ABA3_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C4227560EBE67C7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7C4227560EBE67C7_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C4227560EBE67C7_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C4227560EBE67C7_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_996E0DF7AD607754(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_2_7C4227560EBE67C7_METHOD_2_996E0DF7AD607754_OFFSET))(this, a1);
	}
};
