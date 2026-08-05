#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Sprite; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBCB30)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_0__LOADIMAGE_B__0_OFFSET UNITYSDK_OFFSET(0x16DBCB40)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass467_0_TypeDefinitionIndex = 62814;

	class UIGalgamePageController___c__DisplayClass467_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::System::Action_1<::UnityEngine::Object*>* finishCb; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadImage_b__0(::UnityEngine::Sprite* sprite)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS467_0__LOADIMAGE_B__0_OFFSET))(this, sprite);
		}
	};
}
