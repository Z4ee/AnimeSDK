#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

namespace MoleMole::Battle { class XWeaponTrailCustom; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_GET_WRAPPERCOMSHOWER_OFFSET UNITYSDK_OFFSET(0x149CEA30)
#define MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_METHOD_3_23C10DE8FC25A0DA_OFFSET UNITYSDK_OFFSET(0x149CE870)
#define MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x149CEB60)
#define MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_METHOD_3_42306B497E8221E0_OFFSET UNITYSDK_OFFSET(0x149CE500)
#define MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_METHOD_3_4272BE5198E6F216_OFFSET UNITYSDK_OFFSET(0x149CEB50)
#define MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_SET_WRAPPERCOMSHOWER_OFFSET UNITYSDK_OFFSET(0x149CEAD0)
#define MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM__CTOR_OFFSET UNITYSDK_OFFSET(0x149CEAE0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESXWeaponTrailCustom_TypeDefinitionIndex = 90259;

	class ESXWeaponTrailCustom : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_42306B497E8221E0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_METHOD_3_42306B497E8221E0_OFFSET))(this, a1);
		}

		::System::Void Method_3_23C10DE8FC25A0DA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_METHOD_3_23C10DE8FC25A0DA_OFFSET))(this, a1);
		}

		::MoleMole::Battle::XWeaponTrailCustom* get_wrapperComShower()
		{
			return ((::MoleMole::Battle::XWeaponTrailCustom*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_GET_WRAPPERCOMSHOWER_OFFSET))(this);
		}

		::System::Void set_wrapperComShower(::MoleMole::Battle::XWeaponTrailCustom* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::XWeaponTrailCustom*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_SET_WRAPPERCOMSHOWER_OFFSET))(this, a1);
		}

		::System::Void Method_3_4272BE5198E6F216(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_METHOD_3_4272BE5198E6F216_OFFSET))(this, a1);
		}

		::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
		}
	};
}
