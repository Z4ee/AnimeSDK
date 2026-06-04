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

#define CLASS_2_EC9A90E156962139_METHOD_2_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x13C21AB0)
#define CLASS_2_EC9A90E156962139_METHOD_2_3534CF2C51C37C8D_OFFSET UNITYSDK_OFFSET(0x13C24220)
#define CLASS_2_EC9A90E156962139_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13C22240)
#define CLASS_2_EC9A90E156962139_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x13C21A30)
#define CLASS_2_EC9A90E156962139_METHOD_2_4D60943103925095_OFFSET UNITYSDK_OFFSET(0x13C224D0)
#define CLASS_2_EC9A90E156962139_METHOD_2_54A28F738B046BF4_OFFSET UNITYSDK_OFFSET(0x13C22600)
#define CLASS_2_EC9A90E156962139_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13C242B0)
#define CLASS_2_EC9A90E156962139_METHOD_2_7C231B65E5CBDDC5_OFFSET UNITYSDK_OFFSET(0x13C23910)
#define CLASS_2_EC9A90E156962139_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13C22200)
#define CLASS_2_EC9A90E156962139_METHOD_2_CBF99CCF420B8CA6_OFFSET UNITYSDK_OFFSET(0x13C22E30)
#define CLASS_2_EC9A90E156962139_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x13C222A0)
#define CLASS_2_EC9A90E156962139_METHOD_2_DBF39D86165EF946_OFFSET UNITYSDK_OFFSET(0x13C228E0)
#define CLASS_2_EC9A90E156962139__CTOR_OFFSET UNITYSDK_OFFSET(0x13C21900)

inline static constexpr unsigned int Class_2_EC9A90E156962139_TypeDefinitionIndex = 72416;

class Class_2_EC9A90E156962139 : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_CreateLaser* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>* Field_2_1; // 0x30
	::Class_1_CD06BB4AEFF829C1* Field_2_2; // 0x38
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

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139_METHOD_2_2157CED3CDDF8996_OFFSET))(this);
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

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
