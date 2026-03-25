#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_53590B4EB9133BC0;
class Class_1_C27DD85F9F8C1933;
class Class_2_CB74A2386357020E;
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

#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEAVATARSERVANTSKILL_OFFSET UNITYSDK_OFFSET(0x989B2E0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEAVATARSKILL_OFFSET UNITYSDK_OFFSET(0x989B110)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEBATTLEEVENTSKILL_OFFSET UNITYSDK_OFFSET(0x989B3C0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GETBACKRANKMODIFIER_OFFSET UNITYSDK_OFFSET(0x989DB10)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GETCYRENEMODIFIER_OFFSET UNITYSDK_OFFSET(0x989DCB0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_CONDITIONDESC_OFFSET UNITYSDK_OFFSET(0x989D7C0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_DESC_OFFSET UNITYSDK_OFFSET(0x989D4D0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ELATIONPRIORITY_OFFSET UNITYSDK_OFFSET(0x989DAC0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x989D970)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x989DA50)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISELATION_OFFSET UNITYSDK_OFFSET(0x989DAB0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x989D990)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISREPLACE_OFFSET UNITYSDK_OFFSET(0x989D9F0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x989DA70)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x989DE00)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SIMPLECONDITIONDESC_OFFSET UNITYSDK_OFFSET(0x989D690)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x989D280)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x989D980)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SKILLTYPETEXTID_OFFSET UNITYSDK_OFFSET(0x989DA90)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_HASCYRENEMODIFIER_OFFSET UNITYSDK_OFFSET(0x989DDB0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYAVATARSERVANTSKILL_OFFSET UNITYSDK_OFFSET(0x989D130)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYAVATARSKILL_OFFSET UNITYSDK_OFFSET(0x989CE30)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYBATTLEEVENTSKILL_OFFSET UNITYSDK_OFFSET(0x989CF70)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x989DA60)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x989DA80)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_SKILLTYPETEXTID_OFFSET UNITYSDK_OFFSET(0x989DAA0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__CREATEMODIFIERCOMPILER_OFFSET UNITYSDK_OFFSET(0x989D620)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x989CE20)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETBACKRANKMODIFIER_B__40_0_OFFSET UNITYSDK_OFFSET(0x989DE10)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETCYRENEMODIFIER_B__42_0_OFFSET UNITYSDK_OFFSET(0x989DE60)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x989D290)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleSkillDetail_TypeDefinitionIndex = 52896;

	class GridFightRoleSkillDetail : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* _Role; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ConditionParamList; // 0x18
		::RPG::GameCore::GridFightSkillSubIconConfigRow* _SubIconRow; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParamList; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleConditionParamList; // 0x30
		::Il2CppArray<::System::UInt32>* _ExtraEffectIDList; // 0x38
		::Il2CppArray<::System::UInt32>* _SimpleExtraEffectIDList; // 0x40
		::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleSkillDescParamList; // 0x48
		::RPG::GameCore::GridFightSkillDescModConfigRow* _ModRow; // 0x50
		::RPG::GameCore::ElationSkillRow* _ElationRow; // 0x58
		::System::String* _IconPath_k__BackingField; // 0x60
		::RPG::Client::TextID _SimpleSkillDescTextID; // 0x68
		::RPG::GameCore::GridFightSkillType _SkillType; // 0x78
		::System::UInt32 _SkillID; // 0x7C
		::RPG::Client::TextID _SkillTypeTextID_k__BackingField; // 0x80
		::RPG::Client::TextID _DescTextID; // 0x90
		::RPG::Client::TextID _ConditionTextID; // 0xA0
		::RPG::Client::TextID _SimpleConditionTextID; // 0xB0
		::RPG::Client::TextID _NameTextID_k__BackingField; // 0xC0

		::System::Void _ctor(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__CTOR_OFFSET))(this, role);
		}

		static ::RPG::Client::GridFightRoleSkillDetail* CreateAvatarSKill(::RPG::Client::GridFightRole* role, ::System::UInt32 skillID, ::System::UInt32 level)
		{
			return ((::RPG::Client::GridFightRoleSkillDetail*(*)(::RPG::Client::GridFightRole*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEAVATARSKILL_OFFSET))(role, skillID, level);
		}

		static ::RPG::Client::GridFightRoleSkillDetail* CreateBattleEventSkill(::RPG::Client::GridFightRole* role, ::System::UInt32 skillID)
		{
			return ((::RPG::Client::GridFightRoleSkillDetail*(*)(::RPG::Client::GridFightRole*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEBATTLEEVENTSKILL_OFFSET))(role, skillID);
		}

		static ::RPG::Client::GridFightRoleSkillDetail* CreateAvatarServantSkill(::RPG::Client::GridFightRole* role, ::System::UInt32 skillID, ::System::UInt32 level)
		{
			return ((::RPG::Client::GridFightRoleSkillDetail*(*)(::RPG::Client::GridFightRole*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEAVATARSERVANTSKILL_OFFSET))(role, skillID, level);
		}

		::System::Void InitByAvatarSkill(::RPG::GameCore::AvatarSkillRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYAVATARSKILL_OFFSET))(this, row);
		}

		::System::Void InitByBattleEventSkill(::RPG::GameCore::BattleEventSkillRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYBATTLEEVENTSKILL_OFFSET))(this, row);
		}

		::System::Void InitByAvatarServantSkill(::RPG::GameCore::AvatarServantSkillRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYAVATARSERVANTSKILL_OFFSET))(this, row);
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

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_ICONPATH_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::Void set_NameTextID(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_NAMETEXTID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_SkillTypeTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SKILLTYPETEXTID_OFFSET))(this);
		}

		::System::Void set_SkillTypeTextID(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_SKILLTYPETEXTID_OFFSET))(this, value);
		}

		::System::Boolean get_IsElation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISELATION_OFFSET))(this);
		}

		::System::Int32 get_ElationPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ELATIONPRIORITY_OFFSET))(this);
		}

		::Class_2_CB74A2386357020E* _CreateModifierCompiler()
		{
			return ((::Class_2_CB74A2386357020E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__CREATEMODIFIERCOMPILER_OFFSET))(this);
		}

		::Class_1_53590B4EB9133BC0* GetBackRankModifier()
		{
			return ((::Class_1_53590B4EB9133BC0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GETBACKRANKMODIFIER_OFFSET))(this);
		}

		::System::String* _GetSimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETSIMPLEDESC_OFFSET))(this);
		}

		::Class_1_C27DD85F9F8C1933* GetCyreneModifier()
		{
			return ((::Class_1_C27DD85F9F8C1933*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GETCYRENEMODIFIER_OFFSET))(this);
		}

		::System::Boolean HasCyreneModifier()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_HASCYRENEMODIFIER_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ROLE_OFFSET))(this);
		}

		::System::Boolean _GetBackRankModifier_b__40_0(::RPG::Client::GridFightBackRankConfig* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightBackRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETBACKRANKMODIFIER_B__40_0_OFFSET))(this, x);
		}

		::System::Boolean _GetCyreneModifier_b__42_0(::RPG::Client::GridFightCyreneModifyConfig* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightCyreneModifyConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETCYRENEMODIFIER_B__42_0_OFFSET))(this, x);
		}
	};
}
