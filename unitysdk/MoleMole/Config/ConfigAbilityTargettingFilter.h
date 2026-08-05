#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/ConfigEntityFilter.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGABILITYTARGETTINGFILTER_MATCHENTITYWITHLIST_OFFSET UNITYSDK_OFFSET(0x16258D50)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGETTINGFILTER_VALUEPASS_OFFSET UNITYSDK_OFFSET(0x16257ED0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGETTINGFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16258E70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTargettingFilter_TypeDefinitionIndex = 83309;

	class ConfigAbilityTargettingFilter : public ::MoleMole::Config::ConfigEntityFilter
	{
	public:
		::MoleMole::Config::AbilityTargetting targetting; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGETTINGFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean ValuePass(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* target, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGETTINGFILTER_VALUEPASS_OFFSET))(this, owner, target, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}

		::System::Boolean MatchEntityWithList(::MoleMole::Battle::Entity* target, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* entityList)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGETTINGFILTER_MATCHENTITYWITHLIST_OFFSET))(this, target, entityList);
		}
	};
}
