#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MatAnimation;
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x167774C0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__DISPLAYCLASS33_0__ONBUDDYLEVELUP_B__0_OFFSET UNITYSDK_OFFSET(0x167774D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooLevelUpWidgetController___c__DisplayClass33_0_TypeDefinitionIndex = 58597;

	class UIBangbooLevelUpWidgetController___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::MatAnimation* matAnim; // 0x10
		::UnityEngine::Animation* anim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnBuddyLevelUp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__DISPLAYCLASS33_0__ONBUDDYLEVELUP_B__0_OFFSET))(this);
		}
	};
}
