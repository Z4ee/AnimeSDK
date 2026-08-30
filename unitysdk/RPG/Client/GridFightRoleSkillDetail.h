#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_9FFD4F4C5C064132;
class Class_1_CF27A3C67D8DD499;
class Class_2_540CF3C1DCDFE9E7;
namespace RPG::Client { class GridFightBackRankConfig; }
namespace RPG::Client { class GridFightCyreneModifyConfig; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::GameCore { class AvatarServantSkillRow; }
namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class BattleEventSkillRow; }
namespace RPG::GameCore { class ElationSkillRow; }
namespace RPG::GameCore { class GridFightSkillDescModConfigRow; }
namespace RPG::GameCore { class GridFightSkillSubIconConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEAVATARSERVANTSKILL_OFFSET UNITYSDK_OFFSET(0x1C59B4B0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEAVATARSKILL_OFFSET UNITYSDK_OFFSET(0x1C59B020)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEBATTLEEVENTSKILL_OFFSET UNITYSDK_OFFSET(0x1C59B240)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GETBACKRANKMODIFIER_OFFSET UNITYSDK_OFFSET(0x1C59C030)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GETCYRENEMODIFIER_OFFSET UNITYSDK_OFFSET(0x1C59C240)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_CONDITIONDESC_OFFSET UNITYSDK_OFFSET(0x1C59BC40)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C59B960)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ELATIONPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C59BFE0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x1C59BDF0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C59BF30)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISELATION_OFFSET UNITYSDK_OFFSET(0x1C59BF90)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1C59BE70)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISREPLACE_OFFSET UNITYSDK_OFFSET(0x1C59BED0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x1C59BF50)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x1C59C3D0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SIMPLECONDITIONDESC_OFFSET UNITYSDK_OFFSET(0x1C59BB20)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1C59B6D0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x1C59BE30)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SKILLTYPETEXTID_OFFSET UNITYSDK_OFFSET(0x1C59BF70)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_HASCYRENEMODIFIER_OFFSET UNITYSDK_OFFSET(0x1C59C380)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYAVATARSERVANTSKILL_OFFSET UNITYSDK_OFFSET(0x1C59B570)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYAVATARSKILL_OFFSET UNITYSDK_OFFSET(0x1C59B0F0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYBATTLEEVENTSKILL_OFFSET UNITYSDK_OFFSET(0x1C59B2F0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C59BF40)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x1C59BF60)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_SKILLTYPETEXTID_OFFSET UNITYSDK_OFFSET(0x1C59BF80)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__CREATEMODIFIERCOMPILER_OFFSET UNITYSDK_OFFSET(0x1C59BAB0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C59B0E0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETBACKRANKMODIFIER_B__40_0_OFFSET UNITYSDK_OFFSET(0x1C59C410)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETCYRENEMODIFIER_B__42_0_OFFSET UNITYSDK_OFFSET(0x1C59C4E0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1C59B720)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleSkillDetail_TypeDefinitionIndex = 65206;

	class GridFightRoleSkillDetail : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightSkillSubIconConfigRow* _SubIconRow; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleSkillDescParamList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleConditionParamList; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ConditionParamList; // 0x28
		::RPG::GameCore::GridFightSkillDescModConfigRow* _ModRow; // 0x30
		::RPG::GameCore::ElationSkillRow* _ElationRow; // 0x38
		::RPG::Client::GridFightRole* _Role; // 0x40
		::Il2CppArray<::System::UInt32>* _SimpleExtraEffectIDList; // 0x48
		::Il2CppArray<::System::UInt32>* _ExtraEffectIDList; // 0x50
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParamList; // 0x58
		::System::String* _IconPath_k__BackingField; // 0x60
		::RPG::Client::TextID _SimpleConditionTextID; // 0x68
		::RPG::Client::TextID _NameTextID_k__BackingField; // 0x78
		::RPG::Client::TextID _SimpleSkillDescTextID; // 0x88
		::RPG::GameCore::GridFightSkillType _SkillType; // 0x98
		::System::UInt32 _SkillID; // 0x9C
		::RPG::Client::TextID _DescTextID; // 0xA0
		::RPG::Client::TextID _ConditionTextID; // 0xB0
		::RPG::Client::TextID _SkillTypeTextID_k__BackingField; // 0xC0

		::System::Void _ctor(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightRoleSkillDetail* CreateAvatarSKill(::RPG::Client::GridFightRole* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::GridFightRoleSkillDetail*(*)(::RPG::Client::GridFightRole*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEAVATARSKILL_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::GridFightRoleSkillDetail* CreateBattleEventSkill(::RPG::Client::GridFightRole* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightRoleSkillDetail*(*)(::RPG::Client::GridFightRole*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEBATTLEEVENTSKILL_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightRoleSkillDetail* CreateAvatarServantSkill(::RPG::Client::GridFightRole* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::GridFightRoleSkillDetail*(*)(::RPG::Client::GridFightRole*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEAVATARSERVANTSKILL_OFFSET))(a1, a2, a3);
		}

		::System::Void InitByAvatarSkill(::RPG::GameCore::AvatarSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYAVATARSKILL_OFFSET))(this, a1);
		}

		::System::Void InitByBattleEventSkill(::RPG::GameCore::BattleEventSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYBATTLEEVENTSKILL_OFFSET))(this, a1);
		}

		::System::Void InitByAvatarServantSkill(::RPG::GameCore::AvatarServantSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYAVATARSERVANTSKILL_OFFSET))(this, a1);
		}

		::System::String* get_SimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SIMPLEDESC_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_DESC_OFFSET))(this);
		}

		::System::String* get_SimpleConditionDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SIMPLECONDITIONDESC_OFFSET))(this);
		}

		::System::String* get_ConditionDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_CONDITIONDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_EXTRAEFFECTIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SimpleExtraEffectIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISNEW_OFFSET))(this);
		}

		::System::Boolean get_IsReplace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISREPLACE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_ICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::Void set_NameTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_NAMETEXTID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SkillTypeTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SKILLTYPETEXTID_OFFSET))(this);
		}

		::System::Void set_SkillTypeTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_SKILLTYPETEXTID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsElation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISELATION_OFFSET))(this);
		}

		::System::Int32 get_ElationPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ELATIONPRIORITY_OFFSET))(this);
		}

		::Class_2_540CF3C1DCDFE9E7* _CreateModifierCompiler()
		{
			return ((::Class_2_540CF3C1DCDFE9E7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__CREATEMODIFIERCOMPILER_OFFSET))(this);
		}

		::Class_1_9FFD4F4C5C064132* GetBackRankModifier()
		{
			return ((::Class_1_9FFD4F4C5C064132*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GETBACKRANKMODIFIER_OFFSET))(this);
		}

		::System::String* _GetSimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETSIMPLEDESC_OFFSET))(this);
		}

		::Class_1_CF27A3C67D8DD499* GetCyreneModifier()
		{
			return ((::Class_1_CF27A3C67D8DD499*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GETCYRENEMODIFIER_OFFSET))(this);
		}

		::System::Boolean HasCyreneModifier()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_HASCYRENEMODIFIER_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ROLE_OFFSET))(this);
		}

		::System::Boolean _GetBackRankModifier_b__40_0(::RPG::Client::GridFightBackRankConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightBackRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETBACKRANKMODIFIER_B__40_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetCyreneModifier_b__42_0(::RPG::Client::GridFightCyreneModifyConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightCyreneModifyConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETCYRENEMODIFIER_B__42_0_OFFSET))(this, a1);
		}
	};
}
