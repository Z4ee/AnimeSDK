#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_36006FC25F5DDC69;
class Class_2_181A7F9409C60DBC;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class ChenLingBattleAbility_Teleport; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2736B003C582BAC2_METHOD_2_082A0AF55135040C_OFFSET UNITYSDK_OFFSET(0x1297A440)
#define CLASS_2_2736B003C582BAC2_METHOD_2_0A17E8FE67BD0E43_OFFSET UNITYSDK_OFFSET(0x1297A150)
#define CLASS_2_2736B003C582BAC2_METHOD_2_17DF97501793184D_OFFSET UNITYSDK_OFFSET(0x1297A210)
#define CLASS_2_2736B003C582BAC2_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1297A3E0)
#define CLASS_2_2736B003C582BAC2_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1297A6F0)
#define CLASS_2_2736B003C582BAC2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1297A750)
#define CLASS_2_2736B003C582BAC2_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1297A0C0)
#define CLASS_2_2736B003C582BAC2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1297A6A0)
#define CLASS_2_2736B003C582BAC2__CTOR_OFFSET UNITYSDK_OFFSET(0x1297A030)

inline static constexpr unsigned int Class_2_2736B003C582BAC2_TypeDefinitionIndex = 71414;

class Class_2_2736B003C582BAC2 : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_Teleport* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_2_2736B003C582BAC2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2736B003C582BAC2_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2736B003C582BAC2_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_0A17E8FE67BD0E43(::RPG::GameCore::BaseChenLingBattleTargetEvaluator* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_2736B003C582BAC2_METHOD_2_0A17E8FE67BD0E43_OFFSET))(this, a1);
	}

	::System::Void Method_2_17DF97501793184D(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_2736B003C582BAC2_METHOD_2_17DF97501793184D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_082A0AF55135040C(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_2_2736B003C582BAC2_METHOD_2_082A0AF55135040C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2736B003C582BAC2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2736B003C582BAC2_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2736B003C582BAC2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
