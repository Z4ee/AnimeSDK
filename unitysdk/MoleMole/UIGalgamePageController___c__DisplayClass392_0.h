#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Sprite; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS392_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162BDBF0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS392_0__LOADIMAGE_B__0_OFFSET UNITYSDK_OFFSET(0x162BDC00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass392_0_TypeDefinitionIndex = 41771;

	class UIGalgamePageController___c__DisplayClass392_0 : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::Object*>* finishCb; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS392_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadImage_b__0(::UnityEngine::Sprite* sprite)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS392_0__LOADIMAGE_B__0_OFFSET))(this, sprite);
		}
	};
}
