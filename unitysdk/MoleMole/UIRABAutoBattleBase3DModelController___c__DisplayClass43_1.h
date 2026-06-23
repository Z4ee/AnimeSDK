#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIRABAutoBattleBase3DModelController_SAssetInfo.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABAutoBattleBase3DModelController___c__DisplayClass43_0; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS43_1__CHANGESHOWBUDDY_B__0_OFFSET UNITYSDK_OFFSET(0x15323440)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS43_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15323430)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABAutoBattleBase3DModelController___c__DisplayClass43_1_TypeDefinitionIndex = 72673;

	class UIRABAutoBattleBase3DModelController___c__DisplayClass43_1 : public ::System::Object
	{
	public:
		::MoleMole::UIRABAutoBattleBase3DModelController___c__DisplayClass43_0* CS___8__locals1; // 0x10
		::MoleMole::UIRABAutoBattleBase3DModelController_SAssetInfo assetInfo; // 0x18
		::Foundation::AssetPath assetPath; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS43_1__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeShowBuddy_b__0(::UnityEngine::GameObject* o)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS43_1__CHANGESHOWBUDDY_B__0_OFFSET))(this, o);
		}
	};
}
