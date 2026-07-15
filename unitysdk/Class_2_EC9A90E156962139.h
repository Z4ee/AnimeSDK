#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleEffectLifeTimeType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B8FF829EFDD29B81;
class Class_1_CD06BB4AEFF829C1;
class Class_2_6B60059019300BAD;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_CreateLaser; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }
namespace RPG::GameCore { class ChenLingBattleEffectTier; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EC9A90E156962139_METHOD_2_3534CF2C51C37C8D_OFFSET UNITYSDK_OFFSET(0x16BB3D70)
#define CLASS_2_EC9A90E156962139_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16BB1CB0)
#define CLASS_2_EC9A90E156962139_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x16BB13D0)
#define CLASS_2_EC9A90E156962139_METHOD_2_4D60943103925095_OFFSET UNITYSDK_OFFSET(0x16BB1FB0)
#define CLASS_2_EC9A90E156962139_METHOD_2_54A28F738B046BF4_OFFSET UNITYSDK_OFFSET(0x16BB20E0)
#define CLASS_2_EC9A90E156962139_METHOD_2_7C231B65E5CBDDC5_OFFSET UNITYSDK_OFFSET(0x16BB3460)
#define CLASS_2_EC9A90E156962139_METHOD_2_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x16BB1450)
#define CLASS_2_EC9A90E156962139_METHOD_2_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x16BB1D10)
#define CLASS_2_EC9A90E156962139_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16BB1C70)
#define CLASS_2_EC9A90E156962139_METHOD_2_CBF99CCF420B8CA6_OFFSET UNITYSDK_OFFSET(0x16BB2980)
#define CLASS_2_EC9A90E156962139_METHOD_2_DBF39D86165EF946_OFFSET UNITYSDK_OFFSET(0x16BB23C0)
#define CLASS_2_EC9A90E156962139__CTOR_OFFSET UNITYSDK_OFFSET(0x16BB12A0)

inline static constexpr unsigned int Class_2_EC9A90E156962139_TypeDefinitionIndex = 73941;

class Class_2_EC9A90E156962139 : public ::Class_1_F65B6F8790DF074B
{
public:
	::Class_1_CD06BB4AEFF829C1* Field_2_0; // 0x28
	::RPG::GameCore::ChenLingBattleAbility_CreateLaser* Field_2_1; // 0x30
	::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>* Field_2_2; // 0x38
	::System::Single Field_2_3; // 0x40
	::System::Single Field_2_4; // 0x44
	::System::Boolean Field_2_5; // 0x48

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139_METHOD_2_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void Method_2_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139_METHOD_2_AB7ED27CAB69BE58_OFFSET))(this);
	}

	::System::Void Method_2_CBF99CCF420B8CA6(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139_METHOD_2_CBF99CCF420B8CA6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DBF39D86165EF946(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139_METHOD_2_DBF39D86165EF946_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ChenLingBattleEffectConfig* Method_2_4D60943103925095(::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a1, ::System::String* a2, ::RPG::MVector3 a3, ::System::String* a4, ::System::Boolean a5, ::RPG::GameCore::ChenLingBattleEffectLifeTimeType a6, ::System::UInt32 a7, ::System::Boolean a8)
	{
		return ((::RPG::GameCore::ChenLingBattleEffectConfig*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::String*, ::RPG::MVector3, ::System::String*, ::System::Boolean, ::RPG::GameCore::ChenLingBattleEffectLifeTimeType, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139_METHOD_2_4D60943103925095_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_54A28F738B046BF4(::Class_2_6B60059019300BAD* a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::ChenLingBattleEffectConfig* a3, ::Class_2_6B60059019300BAD* a4, ::System::Action_1<::UnityEngine::Vector3>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::UnityEngine::Vector3, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::Class_2_6B60059019300BAD*, ::System::Action_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139_METHOD_2_54A28F738B046BF4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector2Int Method_2_3534CF2C51C37C8D(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139_METHOD_2_3534CF2C51C37C8D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7C231B65E5CBDDC5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>*&))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139_METHOD_2_7C231B65E5CBDDC5_OFFSET))(this, a1, a2, a3);
	}
};
