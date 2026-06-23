#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS408_0__CTOR_OFFSET UNITYSDK_OFFSET(0x167986B0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS408_0__LOADPICPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0x167986C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass408_0_TypeDefinitionIndex = 54846;

	class UIGalgamePageController___c__DisplayClass408_0 : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::Object*>* finishCb; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS408_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadPicPrefab_b__0(::UnityEngine::GameObject* targetPicPrefab)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS408_0__LOADPICPREFAB_B__0_OFFSET))(this, targetPicPrefab);
		}
	};
}
