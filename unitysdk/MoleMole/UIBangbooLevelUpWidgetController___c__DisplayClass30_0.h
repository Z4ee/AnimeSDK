#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MatAnimation;
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED0B50)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__DISPLAYCLASS30_0__ONMATITEMCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x15ED0B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooLevelUpWidgetController___c__DisplayClass30_0_TypeDefinitionIndex = 58595;

	class UIBangbooLevelUpWidgetController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* anim; // 0x10
		::MatAnimation* matAnim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnMatItemChanged_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__DISPLAYCLASS30_0__ONMATITEMCHANGED_B__0_OFFSET))(this);
		}
	};
}
