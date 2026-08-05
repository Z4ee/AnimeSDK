#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CONFIG_SKILLTYPETOATTACKTAGSCONFIG_SKILLTYPECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x865F70)
#define MOLEMOLE_CONFIG_SKILLTYPETOATTACKTAGSCONFIG_SKILLTYPECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x865F20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SkillTypeToAttackTagsConfig_SkillTypeComparer_TypeDefinitionIndex = 67229;

	struct alignas(1) SkillTypeToAttackTagsConfig_SkillTypeComparer
	{
		::System::Int32 GetHashCode(::MoleMole::Config::EntitySkillType obj)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::EntitySkillType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SKILLTYPETOATTACKTAGSCONFIG_SKILLTYPECOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}

		::System::Boolean Equals(::MoleMole::Config::EntitySkillType a, ::MoleMole::Config::EntitySkillType b)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::EntitySkillType, ::MoleMole::Config::EntitySkillType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SKILLTYPETOATTACKTAGSCONFIG_SKILLTYPECOMPARER_EQUALS_OFFSET))(this, a, b);
		}
	};
}
