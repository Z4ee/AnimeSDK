#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSkillType.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleAttributeName.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_181A7F9409C60DBC;
class Class_2_E9C9AAD7C711B3E3;
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

#define CLASS_1_36006FC25F5DDC69_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1176A930)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_0D350E77BBBFF6C5_OFFSET UNITYSDK_OFFSET(0x1176E090)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_2604F82050EB632A_OFFSET UNITYSDK_OFFSET(0x11771780)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_34B3CD8EF49F3C72_OFFSET UNITYSDK_OFFSET(0x1176D750)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_3534CF2C51C37C8D_OFFSET UNITYSDK_OFFSET(0x11772880)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_43533A4B7C391423_OFFSET UNITYSDK_OFFSET(0x1176ABF0)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_45610F93D85879EF_OFFSET UNITYSDK_OFFSET(0x11771560)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_4834DDB999DBACA9_OFFSET UNITYSDK_OFFSET(0x11773260)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_4F1D801CBD4C2B8E_OFFSET UNITYSDK_OFFSET(0x1176E370)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_5B461F3BC32E02D4_OFFSET UNITYSDK_OFFSET(0x11773860)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_665AD685E4B4AECF_OFFSET UNITYSDK_OFFSET(0x11771F60)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_73A243E65191A335_OFFSET UNITYSDK_OFFSET(0x1176E430)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_7E146D189764F023_OFFSET UNITYSDK_OFFSET(0x117720B0)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_8B5A2B807624EEB5_OFFSET UNITYSDK_OFFSET(0x1176C080)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_92F9A64BE2DDB4EE_OFFSET UNITYSDK_OFFSET(0x1176B3F0)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_99FD516306BE7881_OFFSET UNITYSDK_OFFSET(0x1176DF50)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_A0BEDFB928F63A6B_OFFSET UNITYSDK_OFFSET(0x1176E290)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_AC0F15BBEEECCF3D_OFFSET UNITYSDK_OFFSET(0x1176C700)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_B1E3EF67E57221AF_OFFSET UNITYSDK_OFFSET(0x11773660)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0x1176C680)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_BFF2942A925552D2_OFFSET UNITYSDK_OFFSET(0x11772920)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_C2CB26097A748429_OFFSET UNITYSDK_OFFSET(0x1176A950)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_C606A99B619541D8_OFFSET UNITYSDK_OFFSET(0x1176CDA0)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_CA8AF25CDD99024A_OFFSET UNITYSDK_OFFSET(0x117758F0)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_CE4C49110ABC62F1_OFFSET UNITYSDK_OFFSET(0x11773170)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_CF5C4AFBC4B0B940_OFFSET UNITYSDK_OFFSET(0x117714D0)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_DD043AE5DB114CA9_OFFSET UNITYSDK_OFFSET(0x11774C20)
#define CLASS_1_36006FC25F5DDC69_METHOD_1_DEE5E7C606F20322_OFFSET UNITYSDK_OFFSET(0x11770C00)
#define CLASS_1_36006FC25F5DDC69_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1176A940)
#define CLASS_1_36006FC25F5DDC69__CTOR_OFFSET UNITYSDK_OFFSET(0x1176A7A0)
#define CLASS_1_36006FC25F5DDC69___EVALUATENEARESTNSOLDIERS_B__15_0_OFFSET UNITYSDK_OFFSET(0x117759D0)
#define CLASS_1_36006FC25F5DDC69___EVALUATENEARESTNTHSOLDIER_B__17_0_OFFSET UNITYSDK_OFFSET(0x11775BA0)

inline static constexpr unsigned int Class_1_36006FC25F5DDC69_TypeDefinitionIndex = 63326;

class Class_1_36006FC25F5DDC69 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Field_1_6; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_2; // 0x20
	::RPG::Client::LittleGame::ChenLing::ChenLingSkillType _SkillType_k__BackingField; // 0x28
	::System::Int32 Field_1_4; // 0x2C
	::System::UInt32 Field_1_3; // 0x30
	::System::Int32 Field_1_0; // 0x34
	::System::Int32 Field_1_1; // 0x38

	::System::Void _ctor(::RPG::Client::LittleGame::ChenLing::ChenLingSkillType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSkillType))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ChenLing::ChenLingSkillType get_SkillType()
	{
		return ((::RPG::Client::LittleGame::ChenLing::ChenLingSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_GET_SKILLTYPE_OFFSET))(this);
	}

	::System::Void set_SkillType(::RPG::Client::LittleGame::ChenLing::ChenLingSkillType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSkillType))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_SET_SKILLTYPE_OFFSET))(this, value);
	}

	::Class_1_36006FC25F5DDC69* Method_1_C2CB26097A748429()
	{
		return ((::Class_1_36006FC25F5DDC69*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_C2CB26097A748429_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_43533A4B7C391423(::RPG::GameCore::BaseChenLingBattleTargetEvaluator* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_43533A4B7C391423_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_181A7F9409C60DBC*>* Method_1_DEE5E7C606F20322(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a1, ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_181A7F9409C60DBC*>*(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_DEE5E7C606F20322_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType Method_1_CF5C4AFBC4B0B940(::RPG::GameCore::ChenLingTeamSelectorType a1, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a2)
	{
		return ((::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType(*)(::PVOID, ::RPG::GameCore::ChenLingTeamSelectorType, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_CF5C4AFBC4B0B940_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_AC0F15BBEEECCF3D(::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNSoldiers* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNSoldiers*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_AC0F15BBEEECCF3D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_C606A99B619541D8(::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_C606A99B619541D8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_92F9A64BE2DDB4EE(::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNthSoldier* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNthSoldier*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_92F9A64BE2DDB4EE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_34B3CD8EF49F3C72(::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_34B3CD8EF49F3C72_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_99FD516306BE7881(::RPG::GameCore::ChenLingBattleTargetEvaluator_Union* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Union*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_99FD516306BE7881_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_0D350E77BBBFF6C5(::RPG::GameCore::ChenLingBattleTargetEvaluator_LeapSlamTarget* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LeapSlamTarget*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_0D350E77BBBFF6C5_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_A0BEDFB928F63A6B(::RPG::GameCore::ChenLingBattleTargetEvaluator_SavedTargets* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_SavedTargets*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_A0BEDFB928F63A6B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_4F1D801CBD4C2B8E(::RPG::GameCore::SaveChenLingBattleTargetEvaluator* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::SaveChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_4F1D801CBD4C2B8E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int Method_1_3534CF2C51C37C8D(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_3534CF2C51C37C8D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_181A7F9409C60DBC*>* Method_1_45610F93D85879EF(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_181A7F9409C60DBC*>*(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_45610F93D85879EF_OFFSET))(this, a1);
	}

	::System::Single Method_1_BFF2942A925552D2(::RPG::GameCore::ChenLingBattleAttributeName a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChenLingBattleAttributeName, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_BFF2942A925552D2_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_4834DDB999DBACA9(::RPG::GameCore::ChenLingBattleAttributeName a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChenLingBattleAttributeName, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_4834DDB999DBACA9_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_B1E3EF67E57221AF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_B1E3EF67E57221AF_OFFSET))(this);
	}

	::Class_2_181A7F9409C60DBC* Method_1_665AD685E4B4AECF()
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_665AD685E4B4AECF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_8B5A2B807624EEB5(::RPG::GameCore::ChenLingBattleTargetEvaluator_WithinRadius* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithinRadius*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_8B5A2B807624EEB5_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_73A243E65191A335(::RPG::GameCore::ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_73A243E65191A335_OFFSET))(this, a1);
	}

	::RPG::PoolList_1<::System::Int32>* Method_1_5B461F3BC32E02D4(::System::Int32 a1, ::System::Single a2, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a3, ::System::Boolean a4)
	{
		return ((::RPG::PoolList_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Single, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_5B461F3BC32E02D4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_7E146D189764F023(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Single a2, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_7E146D189764F023_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_DD043AE5DB114CA9(::RPG::GameCore::BaseChenLingBattlePredicate* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattlePredicate*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_DD043AE5DB114CA9_OFFSET))(this, a1);
	}

	::System::Single Method_1_2604F82050EB632A(::RPG::GameCore::BaseChenLingBattleValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_2604F82050EB632A_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ChenLing::ChenLingGameInstance* Method_1_CA8AF25CDD99024A()
	{
		return ((::RPG::Client::LittleGame::ChenLing::ChenLingGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_CA8AF25CDD99024A_OFFSET))(this);
	}

	::Class_3_543326C044264182* Method_1_CE4C49110ABC62F1()
	{
		return ((::Class_3_543326C044264182*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_CE4C49110ABC62F1_OFFSET))(this);
	}

	::Class_2_E9C9AAD7C711B3E3* Method_1_BEBC8F4773DC82AA()
	{
		return ((::Class_2_E9C9AAD7C711B3E3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69_METHOD_1_BEBC8F4773DC82AA_OFFSET))(this);
	}

	::System::Single __EvaluateNearestNSoldiers_b__15_0(::Class_2_181A7F9409C60DBC* soldier)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69___EVALUATENEARESTNSOLDIERS_B__15_0_OFFSET))(this, soldier);
	}

	::System::Single __EvaluateNearestNthSoldier_b__17_0(::Class_2_181A7F9409C60DBC* soldier)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69___EVALUATENEARESTNTHSOLDIER_B__17_0_OFFSET))(this, soldier);
	}
};
