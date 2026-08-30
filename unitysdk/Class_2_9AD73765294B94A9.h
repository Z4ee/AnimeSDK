#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_B8FF829EFDD29B81;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_AddPhysicalForce; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9AD73765294B94A9_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1A6C41D0)
#define CLASS_2_9AD73765294B94A9_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A6C4280)
#define CLASS_2_9AD73765294B94A9_METHOD_2_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1A6C36D0)
#define CLASS_2_9AD73765294B94A9_METHOD_2_63FDB1AB58F6AF71_OFFSET UNITYSDK_OFFSET(0x1A6C37C0)
#define CLASS_2_9AD73765294B94A9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A6C4230)
#define CLASS_2_9AD73765294B94A9__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6C3640)

inline static constexpr unsigned int Class_2_9AD73765294B94A9_TypeDefinitionIndex = 77420;

class Class_2_9AD73765294B94A9 : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_AddPhysicalForce* IHEGMBAMJEN; // 0x28

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_9AD73765294B94A9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AD73765294B94A9_METHOD_2_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9AD73765294B94A9_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AD73765294B94A9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AD73765294B94A9_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_63FDB1AB58F6AF71(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_9AD73765294B94A9_METHOD_2_63FDB1AB58F6AF71_OFFSET))(this, a1);
	}
};
