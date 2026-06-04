#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConvinceTrickSkillType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConvinceTrickSkill; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_AFTERSKILLTAKEEFFECT_OFFSET UNITYSDK_OFFSET(0xB7137A0)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_CANTRIGGERSKILLTYPE_OFFSET UNITYSDK_OFFSET(0xB713460)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_CANTRIGGERSKILL_OFFSET UNITYSDK_OFFSET(0xB713410)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB713090)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_GETSKILL_OFFSET UNITYSDK_OFFSET(0xB7134F0)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_INIT_OFFSET UNITYSDK_OFFSET(0xB713120)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_ISANYSKILLTAKINGEFFECT_OFFSET UNITYSDK_OFFSET(0xB713860)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_ISSKILLCANUSE_OFFSET UNITYSDK_OFFSET(0xB713990)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_ISSKILLTAKINGEFFECT_OFFSET UNITYSDK_OFFSET(0xB713800)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_SETCURRTURNINDEX_OFFSET UNITYSDK_OFFSET(0xB713940)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_TRIGGERSKILL_OFFSET UNITYSDK_OFFSET(0xB713590)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP__ADDSKILL_OFFSET UNITYSDK_OFFSET(0xB713240)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xB713A00)

namespace RPG::Client
{
	inline static constexpr unsigned int ConvinceTrickSkillGroup_TypeDefinitionIndex = 56716;

	class ConvinceTrickSkillGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ConvinceTrickSkill*>* Skills; // 0x10
		::System::Boolean SkillEnable; // 0x18
		::System::Int32 CurUseNum; // 0x1C
		::System::Int32 _CurTurnIndex; // 0x20
		::System::Int32 MaxUseNum; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_DISPOSE_OFFSET))(this);
		}

		::System::Void Init(::Il2CppArray<::RPG::GameCore::ConvinceTrickSkillType>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ConvinceTrickSkillType>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void _AddSkill(::RPG::GameCore::ConvinceTrickSkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP__ADDSKILL_OFFSET))(this, a1);
		}

		::System::Boolean CanTriggerSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_CANTRIGGERSKILL_OFFSET))(this);
		}

		::System::Boolean CanTriggerSkillType(::RPG::GameCore::ConvinceTrickSkillType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_CANTRIGGERSKILLTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::ConvinceTrickSkill* GetSkill(::RPG::GameCore::ConvinceTrickSkillType a1)
		{
			return ((::RPG::Client::ConvinceTrickSkill*(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_GETSKILL_OFFSET))(this, a1);
		}

		::System::Void TriggerSkill(::RPG::GameCore::ConvinceTrickSkillType a1, ::RPG::GameCore::TaskContext* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType, ::RPG::GameCore::TaskContext*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_TRIGGERSKILL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AfterSkillTakeEffect(::RPG::GameCore::ConvinceTrickSkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_AFTERSKILLTAKEEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean IsSkillTakingEffect(::RPG::GameCore::ConvinceTrickSkillType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_ISSKILLTAKINGEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean IsAnySkillTakingEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_ISANYSKILLTAKINGEFFECT_OFFSET))(this);
		}

		::System::Void SetCurrTurnIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_SETCURRTURNINDEX_OFFSET))(this, a1);
		}

		::System::Boolean IsSkillCanUse(::RPG::GameCore::ConvinceTrickSkillType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_ISSKILLCANUSE_OFFSET))(this, a1);
		}
	};
}
