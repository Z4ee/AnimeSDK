#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabelTowerRankWidgetController; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170910D0)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHRANKANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x170910E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabelTowerRankWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 76812;

	class UIBabelTowerRankWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBabelTowerRankWidgetController* __4__this; // 0x10
		::UnityEngine::Animation* anim; // 0x18
		::System::Int32 rank; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRankAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHRANKANIMATION_B__0_OFFSET))(this);
		}
	};
}
