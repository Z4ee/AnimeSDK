#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CB7F0487F7A6164A;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_RANGERANDOMENEMYABILITYTARGET_METHOD_2_30887E4ABF39ADEB_OFFSET UNITYSDK_OFFSET(0x115E6580)
#define MOLEMOLE_CONFIG_RANGERANDOMENEMYABILITYTARGET_METHOD_2_C45B3D125C3112F9_OFFSET UNITYSDK_OFFSET(0x115E6D70)
#define MOLEMOLE_CONFIG_RANGERANDOMENEMYABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x115E6EE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RangeRandomEnemyAbilityTarget_TypeDefinitionIndex = 75514;

	class RangeRandomEnemyAbilityTarget : public ::MoleMole::Config::ConfigAbilityTarget
	{
	public:
		::System::Single raidus; // 0x40
		::System::Int32 searchCount; // 0x44
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* findList; // 0x48
		::System::Single sqrRaidus; // 0x50
		::UnityEngine::Vector3 choosePos; // 0x54
		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* allFeatureTargetList; // 0x60
		::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* entityFeatureTargetCache; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANGERANDOMENEMYABILITYTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* Method_2_30887E4ABF39ADEB(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a5, ::System::UInt32 a6)
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANGERANDOMENEMYABILITYTARGET_METHOD_2_30887E4ABF39ADEB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Single Method_2_C45B3D125C3112F9(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANGERANDOMENEMYABILITYTARGET_METHOD_2_C45B3D125C3112F9_OFFSET))(this, a1);
		}
	};
}
