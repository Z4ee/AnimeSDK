#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANTEMPLEADDITIONALMATERIALBONUSROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x166991A0)
#define MOLEMOLE_UISUIBIANTEMPLEADDITIONALMATERIALBONUSROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x166991E0)
#define MOLEMOLE_UISUIBIANTEMPLEADDITIONALMATERIALBONUSROWWIDGETCONTROLLER___C__SETREWARD_B__5_0_OFFSET UNITYSDK_OFFSET(0x166991F0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleAdditionalMaterialBonusRowWidgetController___c_TypeDefinitionIndex = 85797;

	class UISuibianTempleAdditionalMaterialBonusRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISuibianTempleAdditionalMaterialBonusRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleAdditionalMaterialBonusRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleAdditionalMaterialBonusRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F570);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__5_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleAdditionalMaterialBonusRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEADDITIONALMATERIALBONUSROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEADDITIONALMATERIALBONUSROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SetReward_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEADDITIONALMATERIALBONUSROWWIDGETCONTROLLER___C__SETREWARD_B__5_0_OFFSET))(this);
		}
	};
}
