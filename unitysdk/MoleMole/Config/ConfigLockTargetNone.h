#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLockTarget.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define MOLEMOLE_CONFIG_CONFIGLOCKTARGETNONE_METHOD_2_D6E2B96F84CAEEFE_OFFSET UNITYSDK_OFFSET(0x177DF3B0)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGETNONE__CTOR_OFFSET UNITYSDK_OFFSET(0x177DF580)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockTargetNone_TypeDefinitionIndex = 91263;

	class ConfigLockTargetNone : public ::MoleMole::Config::ConfigLockTarget
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGETNONE__CTOR_OFFSET))(this);
		}

		::Struct_2_FA5F50563E60AFBA Method_2_D6E2B96F84CAEEFE(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>* a8)
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGETNONE_METHOD_2_D6E2B96F84CAEEFE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
