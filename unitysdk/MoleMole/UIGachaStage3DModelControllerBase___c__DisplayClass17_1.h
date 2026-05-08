#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaStage3DModelControllerBase___c__DisplayClass17_0; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___C__DISPLAYCLASS17_1__CTOR_OFFSET UNITYSDK_OFFSET(0x158FA9F0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___C__DISPLAYCLASS17_1__PRELOADITEMSTAGE_B__0_OFFSET UNITYSDK_OFFSET(0x158FAA00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStage3DModelControllerBase___c__DisplayClass17_1_TypeDefinitionIndex = 46302;

	class UIGachaStage3DModelControllerBase___c__DisplayClass17_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGachaStage3DModelControllerBase___c__DisplayClass17_0* CS___8__locals1; // 0x10
		::Foundation::AssetPath assetPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___C__DISPLAYCLASS17_1__CTOR_OFFSET))(this);
		}

		::System::Void _PreloadItemStage_b__0(::Foundation::AssetPath path, ::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___C__DISPLAYCLASS17_1__PRELOADITEMSTAGE_B__0_OFFSET))(this, path, go);
		}
	};
}
