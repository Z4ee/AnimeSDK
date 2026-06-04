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

#define CLASS_1_B8FF829EFDD29B81_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xB9FFE00)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_07F56205C065096E_OFFSET UNITYSDK_OFFSET(0xBA00890)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_0B994541A9D1CF08_OFFSET UNITYSDK_OFFSET(0xBA03940)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_0CC8B6FBFE620EDB_OFFSET UNITYSDK_OFFSET(0xBA01CE0)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_13A230E477C974C4_OFFSET UNITYSDK_OFFSET(0xBA06AD0)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_146D1C8699E9D808_OFFSET UNITYSDK_OFFSET(0xBA016E0)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_256514C27B9BDE3B_OFFSET UNITYSDK_OFFSET(0xB9FFE20)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_3534CF2C51C37C8D_OFFSET UNITYSDK_OFFSET(0xBA075D0)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_5B083253641A06CD_OFFSET UNITYSDK_OFFSET(0xBA08040)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_61725454A0B6B10C_OFFSET UNITYSDK_OFFSET(0xBA03D50)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_63C0293BBF8432E7_OFFSET UNITYSDK_OFFSET(0xBA07670)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_760BA56AFB0E9D8B_OFFSET UNITYSDK_OFFSET(0xBA08520)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_8C741AFB004B9AF6_OFFSET UNITYSDK_OFFSET(0xBA000C0)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_99FD516306BE7881_OFFSET UNITYSDK_OFFSET(0xBA03800)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_A0BEDFB928F63A6B_OFFSET UNITYSDK_OFFSET(0xBA03B80)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_AED1509043A1CD09_OFFSET UNITYSDK_OFFSET(0xBA023F0)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_BAFE8DC12CA1CDF9_OFFSET UNITYSDK_OFFSET(0xB9DD2D0)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0xB9DD250)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_C7F7D56560A54F06_OFFSET UNITYSDK_OFFSET(0xBA06210)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_CA8AF25CDD99024A_OFFSET UNITYSDK_OFFSET(0xBA0A630)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_CB0A3407B7B3D653_OFFSET UNITYSDK_OFFSET(0xBA098D0)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_CD12734E7826222B_OFFSET UNITYSDK_OFFSET(0xBA06C80)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_CF5C4AFBC4B0B940_OFFSET UNITYSDK_OFFSET(0xBA06180)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_D92F2EADCA38A4DD_OFFSET UNITYSDK_OFFSET(0xBA08760)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_DD47F4E06FA200C7_OFFSET UNITYSDK_OFFSET(0xBA06410)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_E4BF44BD9411E35D_OFFSET UNITYSDK_OFFSET(0xBA02F80)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_F80205F54FEE5317_OFFSET UNITYSDK_OFFSET(0xBA03C60)
#define CLASS_1_B8FF829EFDD29B81_METHOD_1_FA5EE54213831F43_OFFSET UNITYSDK_OFFSET(0xBA057C0)
#define CLASS_1_B8FF829EFDD29B81_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xB9FFE10)
#define CLASS_1_B8FF829EFDD29B81__CTOR_OFFSET UNITYSDK_OFFSET(0xB9FFAF0)
#define CLASS_1_B8FF829EFDD29B81___EVALUATENEARESTNSOLDIERS_B__15_0_OFFSET UNITYSDK_OFFSET(0xBA0A710)
#define CLASS_1_B8FF829EFDD29B81___EVALUATENEARESTNTHSOLDIER_B__17_0_OFFSET UNITYSDK_OFFSET(0xBA0A960)

inline static constexpr unsigned int Class_1_B8FF829EFDD29B81_TypeDefinitionIndex = 72388;

class Class_1_B8FF829EFDD29B81 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x2C
	::RPG::Client::LittleGame::ChenLing::ChenLingSkillType _SkillType_k__BackingField; // 0x30
	::System::Int32 Field_1_6; // 0x34
	::System::Int32 Field_1_7; // 0x38

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

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_0CC8B6FBFE620EDB(::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNSoldiers* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNSoldiers*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_0CC8B6FBFE620EDB_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_AED1509043A1CD09(::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_AED1509043A1CD09_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_07F56205C065096E(::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNthSoldier* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNthSoldier*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_07F56205C065096E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_E4BF44BD9411E35D(::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_E4BF44BD9411E35D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_99FD516306BE7881(::RPG::GameCore::ChenLingBattleTargetEvaluator_Union* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Union*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_99FD516306BE7881_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_0B994541A9D1CF08(::RPG::GameCore::ChenLingBattleTargetEvaluator_LeapSlamTarget* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LeapSlamTarget*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_0B994541A9D1CF08_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_A0BEDFB928F63A6B(::RPG::GameCore::ChenLingBattleTargetEvaluator_SavedTargets* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_SavedTargets*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_A0BEDFB928F63A6B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_F80205F54FEE5317(::RPG::GameCore::SaveChenLingBattleTargetEvaluator* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::SaveChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_F80205F54FEE5317_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int Method_1_3534CF2C51C37C8D(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_3534CF2C51C37C8D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>* Method_1_C7F7D56560A54F06(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>*(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_C7F7D56560A54F06_OFFSET))(this, a1);
	}

	::System::Single Method_1_63C0293BBF8432E7(::RPG::GameCore::ChenLingBattleAttributeName a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChenLingBattleAttributeName, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_63C0293BBF8432E7_OFFSET))(this, a1, a2);
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

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_146D1C8699E9D808(::RPG::GameCore::ChenLingBattleTargetEvaluator_WithinRadius* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithinRadius*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_146D1C8699E9D808_OFFSET))(this, a1);
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

	::System::Boolean Method_1_CB0A3407B7B3D653(::RPG::GameCore::BaseChenLingBattlePredicate* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattlePredicate*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81_METHOD_1_CB0A3407B7B3D653_OFFSET))(this, a1);
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
