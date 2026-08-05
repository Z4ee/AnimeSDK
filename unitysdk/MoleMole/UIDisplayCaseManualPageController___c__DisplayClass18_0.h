#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDisplayCaseManualPageController; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1804C7D0)
#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__DISPLAYCLASS18_0__ONRTBUILT_B__0_OFFSET UNITYSDK_OFFSET(0x1804C7E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseManualPageController___c__DisplayClass18_0_TypeDefinitionIndex = 46685;

	class UIDisplayCaseManualPageController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* go; // 0x10
		::MoleMole::UIDisplayCaseManualPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnRTBuilt_b__0(::UnityEngine::GameObject* weaponBase, ::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__DISPLAYCLASS18_0__ONRTBUILT_B__0_OFFSET))(this, weaponBase, path);
		}
	};
}
