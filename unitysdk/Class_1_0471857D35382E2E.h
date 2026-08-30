#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinActionIntentType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/Object.h"

class Class_1_26B93FFBE9FAEBB7;
class Class_1_42D96751C1376DDB;
class Class_1_D126770E0092C973;
class Class_1_F917B69C2E81F61E_1;
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0471857D35382E2E_GET_BATTLEEVENTMODIFIERHINTLIST_OFFSET UNITYSDK_OFFSET(0x18814A60)
#define CLASS_1_0471857D35382E2E_GET_CURHP_OFFSET UNITYSDK_OFFSET(0x188148D0)
#define CLASS_1_0471857D35382E2E_GET_CURPHASE_OFFSET UNITYSDK_OFFSET(0x188149B0)
#define CLASS_1_0471857D35382E2E_GET_CURSHIELD_OFFSET UNITYSDK_OFFSET(0x18814930)
#define CLASS_1_0471857D35382E2E_GET_ENERGEBARSTATE_OFFSET UNITYSDK_OFFSET(0x18814A30)
#define CLASS_1_0471857D35382E2E_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x18814780)
#define CLASS_1_0471857D35382E2E_GET_HEADROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x18814A10)
#define CLASS_1_0471857D35382E2E_GET_INTENTTYPELIST_OFFSET UNITYSDK_OFFSET(0x188147A0)
#define CLASS_1_0471857D35382E2E_GET_INTENTTYPEUISTATELIST_OFFSET UNITYSDK_OFFSET(0x188147C0)
#define CLASS_1_0471857D35382E2E_GET_ISBOSS_OFFSET UNITYSDK_OFFSET(0x188147E0)
#define CLASS_1_0471857D35382E2E_GET_ISHAVINGSUPERSHIELD_OFFSET UNITYSDK_OFFSET(0x18814970)
#define CLASS_1_0471857D35382E2E_GET_ISSHORTHPBAR_OFFSET UNITYSDK_OFFSET(0x18814AD0)
#define CLASS_1_0471857D35382E2E_GET_ISSHOWSTATUSDETAIL_OFFSET UNITYSDK_OFFSET(0x18814AB0)
#define CLASS_1_0471857D35382E2E_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x188148F0)
#define CLASS_1_0471857D35382E2E_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0x188149D0)
#define CLASS_1_0471857D35382E2E_GET_NAME_OFFSET UNITYSDK_OFFSET(0x188149F0)
#define CLASS_1_0471857D35382E2E_GET_PREVIEWHP_OFFSET UNITYSDK_OFFSET(0x18814910)
#define CLASS_1_0471857D35382E2E_GET_PREVIEWSHIELD_OFFSET UNITYSDK_OFFSET(0x18814950)
#define CLASS_1_0471857D35382E2E_GET_RANK_OFFSET UNITYSDK_OFFSET(0x18814990)
#define CLASS_1_0471857D35382E2E_GET_SPECIALMARKSTATE_OFFSET UNITYSDK_OFFSET(0x18814A40)
#define CLASS_1_0471857D35382E2E_GET_STATUSLIST_OFFSET UNITYSDK_OFFSET(0x18814A50)
#define CLASS_1_0471857D35382E2E_GET_SUMMONEDENEMYLIST_OFFSET UNITYSDK_OFFSET(0x18814A90)
#define CLASS_1_0471857D35382E2E_GET_SUMMONERENEMY_OFFSET UNITYSDK_OFFSET(0x18814A70)
#define CLASS_1_0471857D35382E2E_METHOD_1_0111646D03725A22_OFFSET UNITYSDK_OFFSET(0x18814360)
#define CLASS_1_0471857D35382E2E_METHOD_1_213EB2BE094A913C_OFFSET UNITYSDK_OFFSET(0x18813FD0)
#define CLASS_1_0471857D35382E2E_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x18814020)
#define CLASS_1_0471857D35382E2E_METHOD_1_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x18814800)
#define CLASS_1_0471857D35382E2E_METHOD_1_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x188143C0)
#define CLASS_1_0471857D35382E2E_METHOD_1_8E119BCE0EDEB783_OFFSET UNITYSDK_OFFSET(0x18814090)
#define CLASS_1_0471857D35382E2E_METHOD_1_9BF4011ADBFBC88B_OFFSET UNITYSDK_OFFSET(0x18814870)
#define CLASS_1_0471857D35382E2E_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x18814730)
#define CLASS_1_0471857D35382E2E_METHOD_1_AC9D28A922B0CD10_OFFSET UNITYSDK_OFFSET(0x18813A00)
#define CLASS_1_0471857D35382E2E_SET_CURHP_OFFSET UNITYSDK_OFFSET(0x188148E0)
#define CLASS_1_0471857D35382E2E_SET_CURPHASE_OFFSET UNITYSDK_OFFSET(0x188149C0)
#define CLASS_1_0471857D35382E2E_SET_CURSHIELD_OFFSET UNITYSDK_OFFSET(0x18814940)
#define CLASS_1_0471857D35382E2E_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x18814790)
#define CLASS_1_0471857D35382E2E_SET_HEADROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x18814A20)
#define CLASS_1_0471857D35382E2E_SET_INTENTTYPELIST_OFFSET UNITYSDK_OFFSET(0x188147B0)
#define CLASS_1_0471857D35382E2E_SET_INTENTTYPEUISTATELIST_OFFSET UNITYSDK_OFFSET(0x188147D0)
#define CLASS_1_0471857D35382E2E_SET_ISBOSS_OFFSET UNITYSDK_OFFSET(0x188147F0)
#define CLASS_1_0471857D35382E2E_SET_ISHAVINGSUPERSHIELD_OFFSET UNITYSDK_OFFSET(0x18814980)
#define CLASS_1_0471857D35382E2E_SET_ISSHORTHPBAR_OFFSET UNITYSDK_OFFSET(0x18814AE0)
#define CLASS_1_0471857D35382E2E_SET_ISSHOWSTATUSDETAIL_OFFSET UNITYSDK_OFFSET(0x18814AC0)
#define CLASS_1_0471857D35382E2E_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0x18814900)
#define CLASS_1_0471857D35382E2E_SET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0x188149E0)
#define CLASS_1_0471857D35382E2E_SET_NAME_OFFSET UNITYSDK_OFFSET(0x18814A00)
#define CLASS_1_0471857D35382E2E_SET_PREVIEWHP_OFFSET UNITYSDK_OFFSET(0x18814920)
#define CLASS_1_0471857D35382E2E_SET_PREVIEWSHIELD_OFFSET UNITYSDK_OFFSET(0x18814960)
#define CLASS_1_0471857D35382E2E_SET_RANK_OFFSET UNITYSDK_OFFSET(0x188149A0)
#define CLASS_1_0471857D35382E2E_SET_SUMMONEDENEMYLIST_OFFSET UNITYSDK_OFFSET(0x18814AA0)
#define CLASS_1_0471857D35382E2E_SET_SUMMONERENEMY_OFFSET UNITYSDK_OFFSET(0x18814A80)
#define CLASS_1_0471857D35382E2E__CTOR_OFFSET UNITYSDK_OFFSET(0x188138E0)

inline static constexpr unsigned int Class_1_0471857D35382E2E_TypeDefinitionIndex = 79682;

class Class_1_0471857D35382E2E : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_0471857D35382E2E*>* _SummonedEnemyList_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::FateRinActionIntentType>* _IntentTypeList_k__BackingField; // 0x20
	::Class_1_26B93FFBE9FAEBB7* _EnergeBarState_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::Class_1_D126770E0092C973*>* _BattleEventModifierHintList_k__BackingField; // 0x30
	::Class_1_0471857D35382E2E* _SummonerEnemy_k__BackingField; // 0x38
	::Class_1_F917B69C2E81F61E_1* _SpecialMarkState_k__BackingField; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* _IntentTypeUIStateList_k__BackingField; // 0x48
	::System::String* _HeadRoundIconPath_k__BackingField; // 0x50
	::System::Collections::Generic::List_1<::Class_1_42D96751C1376DDB*>* _StatusList_k__BackingField; // 0x58
	::RPG::GameCore::FixPoint _CurHP_k__BackingField; // 0x60
	::System::UInt32 _MaxPhase_k__BackingField; // 0x68
	::System::UInt32 _CurPhase_k__BackingField; // 0x6C
	::RPG::GameCore::FixPoint _PreviewShield_k__BackingField; // 0x70
	::System::Boolean _IsShortHPBar_k__BackingField; // 0x78
	::System::Boolean _IsBoss_k__BackingField; // 0x79
	::System::Boolean _IsShowStatusDetail_k__BackingField; // 0x7A
	::System::Boolean _IsHavingSuperShield_k__BackingField; // 0x7B
	::RPG::GameCore::MonsterRank _Rank_k__BackingField; // 0x7C
	::RPG::Client::TextID _Name_k__BackingField; // 0x80
	::RPG::GameCore::FixPoint _PreviewHP_k__BackingField; // 0x90
	::RPG::GameCore::FixPoint _CurShield_k__BackingField; // 0x98
	::RPG::GameCore::FixPoint _MaxHP_k__BackingField; // 0xA0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_213EB2BE094A913C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_METHOD_1_213EB2BE094A913C_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_8E119BCE0EDEB783(::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>*))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_METHOD_1_8E119BCE0EDEB783_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC9D28A922B0CD10(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_METHOD_1_AC9D28A922B0CD10_OFFSET))(this, a1);
	}

	::System::Void Method_1_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_METHOD_1_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_Entity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_ENTITY_OFFSET))(this);
	}

	::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_ENTITY_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::FateRinActionIntentType>* get_IntentTypeList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FateRinActionIntentType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_INTENTTYPELIST_OFFSET))(this);
	}

	::System::Void set_IntentTypeList(::System::Collections::Generic::List_1<::RPG::GameCore::FateRinActionIntentType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FateRinActionIntentType>*))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_INTENTTYPELIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_IntentTypeUIStateList()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_INTENTTYPEUISTATELIST_OFFSET))(this);
	}

	::System::Void set_IntentTypeUIStateList(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_INTENTTYPEUISTATELIST_OFFSET))(this, a1);
	}

	::System::Boolean get_IsBoss()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_ISBOSS_OFFSET))(this);
	}

	::System::Void set_IsBoss(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_ISBOSS_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_METHOD_1_3845AD389B8E1E47_OFFSET))(this);
	}

	::RPG::GameCore::CharacterModelComponent* Method_1_9BF4011ADBFBC88B()
	{
		return ((::RPG::GameCore::CharacterModelComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_METHOD_1_9BF4011ADBFBC88B_OFFSET))(this);
	}

	::RPG::GameCore::CharacterDataComponent* Method_1_0111646D03725A22()
	{
		return ((::RPG::GameCore::CharacterDataComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_METHOD_1_0111646D03725A22_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_CurHP()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_CURHP_OFFSET))(this);
	}

	::System::Void set_CurHP(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_CURHP_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MaxHP()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_MAXHP_OFFSET))(this);
	}

	::System::Void set_MaxHP(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_MAXHP_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_PreviewHP()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_PREVIEWHP_OFFSET))(this);
	}

	::System::Void set_PreviewHP(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_PREVIEWHP_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_CurShield()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_CURSHIELD_OFFSET))(this);
	}

	::System::Void set_CurShield(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_CURSHIELD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_PreviewShield()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_PREVIEWSHIELD_OFFSET))(this);
	}

	::System::Void set_PreviewShield(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_PREVIEWSHIELD_OFFSET))(this, a1);
	}

	::System::Boolean get_IsHavingSuperShield()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_ISHAVINGSUPERSHIELD_OFFSET))(this);
	}

	::System::Void set_IsHavingSuperShield(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_ISHAVINGSUPERSHIELD_OFFSET))(this, a1);
	}

	::RPG::GameCore::MonsterRank get_Rank()
	{
		return ((::RPG::GameCore::MonsterRank(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_RANK_OFFSET))(this);
	}

	::System::Void set_Rank(::RPG::GameCore::MonsterRank a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_RANK_OFFSET))(this, a1);
	}

	::System::UInt32 get_CurPhase()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_CURPHASE_OFFSET))(this);
	}

	::System::Void set_CurPhase(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_CURPHASE_OFFSET))(this, a1);
	}

	::System::UInt32 get_MaxPhase()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_MAXPHASE_OFFSET))(this);
	}

	::System::Void set_MaxPhase(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_MAXPHASE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_NAME_OFFSET))(this, a1);
	}

	::System::String* get_HeadRoundIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_HEADROUNDICONPATH_OFFSET))(this);
	}

	::System::Void set_HeadRoundIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_HEADROUNDICONPATH_OFFSET))(this, a1);
	}

	::Class_1_26B93FFBE9FAEBB7* get_EnergeBarState()
	{
		return ((::Class_1_26B93FFBE9FAEBB7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_ENERGEBARSTATE_OFFSET))(this);
	}

	::Class_1_F917B69C2E81F61E_1* get_SpecialMarkState()
	{
		return ((::Class_1_F917B69C2E81F61E_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_SPECIALMARKSTATE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_42D96751C1376DDB*>* get_StatusList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_42D96751C1376DDB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_STATUSLIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_D126770E0092C973*>* get_BattleEventModifierHintList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_D126770E0092C973*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_BATTLEEVENTMODIFIERHINTLIST_OFFSET))(this);
	}

	::Class_1_0471857D35382E2E* get_SummonerEnemy()
	{
		return ((::Class_1_0471857D35382E2E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_SUMMONERENEMY_OFFSET))(this);
	}

	::System::Void set_SummonerEnemy(::Class_1_0471857D35382E2E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0471857D35382E2E*))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_SUMMONERENEMY_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_0471857D35382E2E*>* get_SummonedEnemyList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0471857D35382E2E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_SUMMONEDENEMYLIST_OFFSET))(this);
	}

	::System::Void set_SummonedEnemyList(::System::Collections::Generic::List_1<::Class_1_0471857D35382E2E*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0471857D35382E2E*>*))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_SUMMONEDENEMYLIST_OFFSET))(this, a1);
	}

	::System::Boolean get_IsShowStatusDetail()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_ISSHOWSTATUSDETAIL_OFFSET))(this);
	}

	::System::Void set_IsShowStatusDetail(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_ISSHOWSTATUSDETAIL_OFFSET))(this, a1);
	}

	::System::Boolean get_IsShortHPBar()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_GET_ISSHORTHPBAR_OFFSET))(this);
	}

	::System::Void set_IsShortHPBar(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0471857D35382E2E_SET_ISSHORTHPBAR_OFFSET))(this, a1);
	}
};
