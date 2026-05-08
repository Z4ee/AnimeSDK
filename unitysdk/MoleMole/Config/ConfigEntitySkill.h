#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL_EQUALSSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x139A2AB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL_ISEXQTE_OFFSET UNITYSDK_OFFSET(0x139A2B10)
#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x139A2A90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntitySkill_TypeDefinitionIndex = 82634;

	class ConfigEntitySkill : public ::System::Object
	{
	public:
		::System::String* InstantTriggerAnimEventID; // 0x10
		::System::String* InstantTriggerAbilityName; // 0x18
		::Il2CppArray<::System::String*>* TagList; // 0x20
		::System::Single CountCD; // 0x28
		::System::Int32 ForceCDRecoverEP; // 0x2C
		::MoleMole::Config::EntitySkillType SkillType02; // 0x30
		::System::Int32 SilenceCDRecoverEP; // 0x34
		::System::Boolean EPEmptyWhenInit; // 0x38
		::System::Boolean ResetSlienceCdOnConsumeEP; // 0x39
		::System::Boolean NotConsumeFever; // 0x3A
		::System::Single NeedSp; // 0x3C
		::System::Int32 ConsumeOnceEP; // 0x40
		::System::Single SilenceCD; // 0x44
		::System::Int32 MaxEp; // 0x48
		::System::Single ForceCD; // 0x4C
		::MoleMole::Config::EntitySkillType SkillType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL__CTOR_OFFSET))(this);
		}

		::System::Boolean EqualsSkillType(::MoleMole::Config::EntitySkillType inputSkillType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::EntitySkillType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL_EQUALSSKILLTYPE_OFFSET))(this, inputSkillType);
		}

		::System::Boolean IsExQTE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL_ISEXQTE_OFFSET))(this);
		}
	};
}
