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

#define CLASS_1_0471857D35382E2E_GET_BATTLEEVENTMODIFIERHINTLIST_OFFSET UNITYSDK_OFFSET(0x12E76120)
#define CLASS_1_0471857D35382E2E_GET_CURHP_OFFSET UNITYSDK_OFFSET(0x12E75F90)
#define CLASS_1_0471857D35382E2E_GET_CURPHASE_OFFSET UNITYSDK_OFFSET(0x12E76070)
#define CLASS_1_0471857D35382E2E_GET_CURSHIELD_OFFSET UNITYSDK_OFFSET(0x12E75FF0)
#define CLASS_1_0471857D35382E2E_GET_ENERGEBARSTATE_OFFSET UNITYSDK_OFFSET(0x12E760F0)
#define CLASS_1_0471857D35382E2E_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x12E75E40)
#define CLASS_1_0471857D35382E2E_GET_HEADROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x12E760D0)
#define CLASS_1_0471857D35382E2E_GET_INTENTTYPELIST_OFFSET UNITYSDK_OFFSET(0x12E75E60)
#define CLASS_1_0471857D35382E2E_GET_INTENTTYPEUISTATELIST_OFFSET UNITYSDK_OFFSET(0x12E75E80)
#define CLASS_1_0471857D35382E2E_GET_ISBOSS_OFFSET UNITYSDK_OFFSET(0x12E75EA0)
#define CLASS_1_0471857D35382E2E_GET_ISHAVINGSUPERSHIELD_OFFSET UNITYSDK_OFFSET(0x12E76030)
#define CLASS_1_0471857D35382E2E_GET_ISSHORTHPBAR_OFFSET UNITYSDK_OFFSET(0x12E76190)
#define CLASS_1_0471857D35382E2E_GET_ISSHOWSTATUSDETAIL_OFFSET UNITYSDK_OFFSET(0x12E76170)
#define CLASS_1_0471857D35382E2E_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x12E75FB0)
#define CLASS_1_0471857D35382E2E_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0x12E76090)
#define CLASS_1_0471857D35382E2E_GET_NAME_OFFSET UNITYSDK_OFFSET(0x12E760B0)
#define CLASS_1_0471857D35382E2E_GET_PREVIEWHP_OFFSET UNITYSDK_OFFSET(0x12E75FD0)
#define CLASS_1_0471857D35382E2E_GET_PREVIEWSHIELD_OFFSET UNITYSDK_OFFSET(0x12E76010)
#define CLASS_1_0471857D35382E2E_GET_RANK_OFFSET UNITYSDK_OFFSET(0x12E76050)
#define CLASS_1_0471857D35382E2E_GET_SPECIALMARKSTATE_OFFSET UNITYSDK_OFFSET(0x12E76100)
#define CLASS_1_0471857D35382E2E_GET_STATUSLIST_OFFSET UNITYSDK_OFFSET(0x12E76110)
#define CLASS_1_0471857D35382E2E_GET_SUMMONEDENEMYLIST_OFFSET UNITYSDK_OFFSET(0x12E76150)
#define CLASS_1_0471857D35382E2E_GET_SUMMONERENEMY_OFFSET UNITYSDK_OFFSET(0x12E76130)
#define CLASS_1_0471857D35382E2E_METHOD_1_0111646D03725A22_OFFSET UNITYSDK_OFFSET(0x12E75A20)
#define CLASS_1_0471857D35382E2E_METHOD_1_213EB2BE094A913C_OFFSET UNITYSDK_OFFSET(0x12E75690)
#define CLASS_1_0471857D35382E2E_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x12E756E0)
#define CLASS_1_0471857D35382E2E_METHOD_1_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x12E75EC0)
#define CLASS_1_0471857D35382E2E_METHOD_1_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x12E75A80)
#define CLASS_1_0471857D35382E2E_METHOD_1_8E119BCE0EDEB783_OFFSET UNITYSDK_OFFSET(0x12E75750)
#define CLASS_1_0471857D35382E2E_METHOD_1_9BF4011ADBFBC88B_OFFSET UNITYSDK_OFFSET(0x12E75F30)
#define CLASS_1_0471857D35382E2E_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x12E75DF0)
#define CLASS_1_0471857D35382E2E_METHOD_1_AC9D28A922B0CD10_OFFSET UNITYSDK_OFFSET(0x12E750C0)
#define CLASS_1_0471857D35382E2E_SET_CURHP_OFFSET UNITYSDK_OFFSET(0x12E75FA0)
#define CLASS_1_0471857D35382E2E_SET_CURPHASE_OFFSET UNITYSDK_OFFSET(0x12E76080)
#define CLASS_1_0471857D35382E2E_SET_CURSHIELD_OFFSET UNITYSDK_OFFSET(0x12E76000)
#define CLASS_1_0471857D35382E2E_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x12E75E50)
#define CLASS_1_0471857D35382E2E_SET_HEADROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x12E760E0)
#define CLASS_1_0471857D35382E2E_SET_INTENTTYPELIST_OFFSET UNITYSDK_OFFSET(0x12E75E70)
#define CLASS_1_0471857D35382E2E_SET_INTENTTYPEUISTATELIST_OFFSET UNITYSDK_OFFSET(0x12E75E90)
#define CLASS_1_0471857D35382E2E_SET_ISBOSS_OFFSET UNITYSDK_OFFSET(0x12E75EB0)
#define CLASS_1_0471857D35382E2E_SET_ISHAVINGSUPERSHIELD_OFFSET UNITYSDK_OFFSET(0x12E76040)
#define CLASS_1_0471857D35382E2E_SET_ISSHORTHPBAR_OFFSET UNITYSDK_OFFSET(0x12E761A0)
#define CLASS_1_0471857D35382E2E_SET_ISSHOWSTATUSDETAIL_OFFSET UNITYSDK_OFFSET(0x12E76180)
#define CLASS_1_0471857D35382E2E_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0x12E75FC0)
#define CLASS_1_0471857D35382E2E_SET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0x12E760A0)
#define CLASS_1_0471857D35382E2E_SET_NAME_OFFSET UNITYSDK_OFFSET(0x12E760C0)
#define CLASS_1_0471857D35382E2E_SET_PREVIEWHP_OFFSET UNITYSDK_OFFSET(0x12E75FE0)
#define CLASS_1_0471857D35382E2E_SET_PREVIEWSHIELD_OFFSET UNITYSDK_OFFSET(0x12E76020)
#define CLASS_1_0471857D35382E2E_SET_RANK_OFFSET UNITYSDK_OFFSET(0x12E76060)
#define CLASS_1_0471857D35382E2E_SET_SUMMONEDENEMYLIST_OFFSET UNITYSDK_OFFSET(0x12E76160)
#define CLASS_1_0471857D35382E2E_SET_SUMMONERENEMY_OFFSET UNITYSDK_OFFSET(0x12E76140)
#define CLASS_1_0471857D35382E2E__CTOR_OFFSET UNITYSDK_OFFSET(0x12E74FA0)

inline static constexpr unsigned int Class_1_0471857D35382E2E_TypeDefinitionIndex = 79683;

class Class_1_0471857D35382E2E : public ::System::Object
{
public:
	::Class_1_0471857D35382E2E* _SummonerEnemy_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_D126770E0092C973*>* _BattleEventModifierHintList_k__BackingField; // 0x18
	::Class_1_F917B69C2E81F61E_1* _SpecialMarkState_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* _IntentTypeUIStateList_k__BackingField; // 0x28
	::Class_1_26B93FFBE9FAEBB7* _EnergeBarState_k__BackingField; // 0x30
	::System::Collections::Generic::List_1<::Class_1_42D96751C1376DDB*>* _StatusList_k__BackingField; // 0x38
	::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::FateRinActionIntentType>* _IntentTypeList_k__BackingField; // 0x48
	::System::String* _HeadRoundIconPath_k__BackingField; // 0x50
	::System::Collections::Generic::List_1<::Class_1_0471857D35382E2E*>* _SummonedEnemyList_k__BackingField; // 0x58
	::System::Boolean _IsBoss_k__BackingField; // 0x60
	::System::Boolean _IsHavingSuperShield_k__BackingField; // 0x61
	::System::Boolean _IsShortHPBar_k__BackingField; // 0x62
	::System::Boolean _IsShowStatusDetail_k__BackingField; // 0x63
	::System::UInt32 _MaxPhase_k__BackingField; // 0x64
	::RPG::GameCore::FixPoint _CurHP_k__BackingField; // 0x68
	::RPG::GameCore::FixPoint _MaxHP_k__BackingField; // 0x70
	::RPG::GameCore::FixPoint _PreviewShield_k__BackingField; // 0x78
	::RPG::GameCore::FixPoint _PreviewHP_k__BackingField; // 0x80
	::System::UInt32 _CurPhase_k__BackingField; // 0x88
	::RPG::GameCore::MonsterRank _Rank_k__BackingField; // 0x8C
	::RPG::GameCore::FixPoint _CurShield_k__BackingField; // 0x90
	::RPG::Client::TextID _Name_k__BackingField; // 0x98

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
