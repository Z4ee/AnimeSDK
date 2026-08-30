#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSkillType.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleAttributeName.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_2090B77B5C7838F2;
class Class_2_6B60059019300BAD;
class Class_3_543326C044264182;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client::LittleGame::ChenLing { class ChenLingGameInstance; }
namespace RPG::GameCore { class BaseChenLingBattleInitPositionEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattlePredicate; }
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_LeapSlamTarget; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_NearestNSoldiers; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_NearestNthSoldier; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_RandomNSoldiers; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_SavedTargets; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_Union; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_WithAttributeRank; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_WithinRadius; }
namespace RPG::GameCore { class SaveChenLingBattleTargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B8FF829EFDD29B81_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xCFC0AA0)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_0B994541A9D1CF08_OFFSET UNITYSDK_OFFSET(0xCFC48C0)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_13A230E477C974C4_OFFSET UNITYSDK_OFFSET(0xCFC7B50)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_231465E6CAEF892F_OFFSET UNITYSDK_OFFSET(0xCFC46A0)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_256514C27B9BDE3B_OFFSET UNITYSDK_OFFSET(0xCFC0AC0)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_2C689FB892745234_OFFSET UNITYSDK_OFFSET(0xCFC2B70)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_3534CF2C51C37C8D_OFFSET UNITYSDK_OFFSET(0xCFC8660)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_4F9C1F5FCE5A8F4A_OFFSET UNITYSDK_OFFSET(0xCFCAB50)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_56C5BE13E21FE60F_OFFSET UNITYSDK_OFFSET(0xCFC4BE0)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_5B083253641A06CD_OFFSET UNITYSDK_OFFSET(0xCFC9280)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_61725454A0B6B10C_OFFSET UNITYSDK_OFFSET(0xCFC4D50)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_760BA56AFB0E9D8B_OFFSET UNITYSDK_OFFSET(0xCFC9770)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_8C741AFB004B9AF6_OFFSET UNITYSDK_OFFSET(0xCFC0D60)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_9234A52CECAF0A12_OFFSET UNITYSDK_OFFSET(0xCFC3260)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_945060CAAD19F2DF_OFFSET UNITYSDK_OFFSET(0xCFC1540)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_A0BEDFB928F63A6B_OFFSET UNITYSDK_OFFSET(0xCFC4B00)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_BAFE8DC12CA1CDF9_OFFSET UNITYSDK_OFFSET(0xCF9B140)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_BBDB4342798CF889_OFFSET UNITYSDK_OFFSET(0xCFC8700)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0xCF9B0C0)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_C7F7D56560A54F06_OFFSET UNITYSDK_OFFSET(0xCFC7290)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_CA8AF25CDD99024A_OFFSET UNITYSDK_OFFSET(0xCFCBB50)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_CD12734E7826222B_OFFSET UNITYSDK_OFFSET(0xCFC7D00)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_CF5C4AFBC4B0B940_OFFSET UNITYSDK_OFFSET(0xCFC7200)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_D79B1AEF193EE1E2_OFFSET UNITYSDK_OFFSET(0xCFC2500)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_D92F2EADCA38A4DD_OFFSET UNITYSDK_OFFSET(0xCFC99C0)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_DD47F4E06FA200C7_OFFSET UNITYSDK_OFFSET(0xCFC7490)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_E4BF44BD9411E35D_OFFSET UNITYSDK_OFFSET(0xCFC3E40)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_FA5EE54213831F43_OFFSET UNITYSDK_OFFSET(0xCFC67F0)
#define CLASS_1_B8FF829EFDD29B81_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xCFC0AB0)
#define CLASS_1_B8FF829EFDD29B81__CTOR_OFFSET UNITYSDK_OFFSET(0xCFC0790)
#define CLASS_1_B8FF829EFDD29B81___EVALUATENEARESTNSOLDIERS_B__15_0_OFFSET UNITYSDK_OFFSET(0xCFCBC30)
#define CLASS_1_B8FF829EFDD29B81___EVALUATENEARESTNTHSOLDIER_B__17_0_OFFSET UNITYSDK_OFFSET(0xCFCBE80)

inline static constexpr unsigned int Class_1_B8FF829EFDD29B81_TypeDefinitionIndex = 77398;

class Class_1_B8FF829EFDD29B81 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* DONPHDKJBBJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* GBPHKOAFCNE; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* DBHMOPJPELH; // 0x20
	::System::Int32 MDAOEGJGHIA; // 0x28
	::RPG::Client::LittleGame::ChenLing::ChenLingSkillType _SkillType_k__BackingField; // 0x2C
	::System::Int32 NMOKIHDMMNG; // 0x30
	::System::Int32 JBBCDGPECLG; // 0x34
	::System::UInt32 BOKJJKFCFME; // 0x38

	::System::Void _ctor(::RPG::Client::LittleGame::ChenLing::ChenLingSkillType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSkillType))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ChenLing::ChenLingSkillType get_SkillType()
	{
		return ((::RPG::Client::LittleGame::ChenLing::ChenLingSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_GET_SKILLTYPE_OFFSET))(this);
	}

	::System::Void set_SkillType(::RPG::Client::LittleGame::ChenLing::ChenLingSkillType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSkillType))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_SET_SKILLTYPE_OFFSET))(this, a1);
	}

	::Class_1_B8FF829EFDD29B81* Method_1_256514C27B9BDE3B()
	{
		return ((::Class_1_B8FF829EFDD29B81*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_256514C27B9BDE3B_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_8C741AFB004B9AF6(::RPG::GameCore::BaseChenLingBattleTargetEvaluator* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_8C741AFB004B9AF6_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_6B60059019300BAD*>* Method_1_FA5EE54213831F43(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a1, ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_6B60059019300BAD*>*(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_FA5EE54213831F43_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType Method_1_CF5C4AFBC4B0B940(::RPG::GameCore::ChenLingTeamSelectorType a1, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a2)
	{
		return ((::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType(*)(::PVOID, ::RPG::GameCore::ChenLingTeamSelectorType, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_CF5C4AFBC4B0B940_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_2C689FB892745234(::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNSoldiers* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNSoldiers*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_2C689FB892745234_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_9234A52CECAF0A12(::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_9234A52CECAF0A12_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_945060CAAD19F2DF(::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNthSoldier* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNthSoldier*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_945060CAAD19F2DF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_E4BF44BD9411E35D(::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_E4BF44BD9411E35D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_231465E6CAEF892F(::RPG::GameCore::ChenLingBattleTargetEvaluator_Union* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Union*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_231465E6CAEF892F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_0B994541A9D1CF08(::RPG::GameCore::ChenLingBattleTargetEvaluator_LeapSlamTarget* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LeapSlamTarget*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_0B994541A9D1CF08_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_A0BEDFB928F63A6B(::RPG::GameCore::ChenLingBattleTargetEvaluator_SavedTargets* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_SavedTargets*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_A0BEDFB928F63A6B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_56C5BE13E21FE60F(::RPG::GameCore::SaveChenLingBattleTargetEvaluator* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::SaveChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_56C5BE13E21FE60F_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int Method_1_3534CF2C51C37C8D(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_3534CF2C51C37C8D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>* Method_1_C7F7D56560A54F06(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>*(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_C7F7D56560A54F06_OFFSET))(this, a1);
	}

	::System::Single Method_1_BBDB4342798CF889(::RPG::GameCore::ChenLingBattleAttributeName a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChenLingBattleAttributeName, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_BBDB4342798CF889_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_5B083253641A06CD(::RPG::GameCore::ChenLingBattleAttributeName a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChenLingBattleAttributeName, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_5B083253641A06CD_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_760BA56AFB0E9D8B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_760BA56AFB0E9D8B_OFFSET))(this);
	}

	::Class_2_6B60059019300BAD* Method_1_13A230E477C974C4()
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_13A230E477C974C4_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_D79B1AEF193EE1E2(::RPG::GameCore::ChenLingBattleTargetEvaluator_WithinRadius* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithinRadius*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_D79B1AEF193EE1E2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_61725454A0B6B10C(::RPG::GameCore::ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_61725454A0B6B10C_OFFSET))(this, a1);
	}

	::RPG::PoolList_1<::System::Int32>* Method_1_D92F2EADCA38A4DD(::System::Int32 a1, ::System::Single a2, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a3, ::System::Boolean a4)
	{
		return ((::RPG::PoolList_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Single, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_D92F2EADCA38A4DD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_CD12734E7826222B(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Single a2, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_CD12734E7826222B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_4F9C1F5FCE5A8F4A(::RPG::GameCore::BaseChenLingBattlePredicate* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattlePredicate*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_4F9C1F5FCE5A8F4A_OFFSET))(this, a1);
	}

	::System::Single Method_1_DD47F4E06FA200C7(::RPG::GameCore::BaseChenLingBattleValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_DD47F4E06FA200C7_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ChenLing::ChenLingGameInstance* Method_1_CA8AF25CDD99024A()
	{
		return ((::RPG::Client::LittleGame::ChenLing::ChenLingGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_CA8AF25CDD99024A_OFFSET))(this);
	}

	::Class_3_543326C044264182* Method_1_BAFE8DC12CA1CDF9()
	{
		return ((::Class_3_543326C044264182*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_BAFE8DC12CA1CDF9_OFFSET))(this);
	}

	::Class_2_2090B77B5C7838F2* Method_1_BEBC8F4773DC82AA()
	{
		return ((::Class_2_2090B77B5C7838F2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_BEBC8F4773DC82AA_OFFSET))(this);
	}

	::System::Single __EvaluateNearestNSoldiers_b__15_0(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81___EVALUATENEARESTNSOLDIERS_B__15_0_OFFSET))(this, a1);
	}

	::System::Single __EvaluateNearestNthSoldier_b__17_0(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81___EVALUATENEARESTNTHSOLDIER_B__17_0_OFFSET))(this, a1);
	}
};
