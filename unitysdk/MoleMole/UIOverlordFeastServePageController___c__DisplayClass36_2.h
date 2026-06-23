#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIOverlordFeastServePageController___c__DisplayClass36_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS36_2__CTOR_OFFSET UNITYSDK_OFFSET(0x166494E0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS36_2__ONSELECTCHILD_B__0_OFFSET UNITYSDK_OFFSET(0x166494F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastServePageController___c__DisplayClass36_2_TypeDefinitionIndex = 46526;

	class UIOverlordFeastServePageController___c__DisplayClass36_2 : public ::System::Object
	{
	public:
		::MoleMole::UIOverlordFeastServePageController___c__DisplayClass36_1* CS___8__locals2; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* validGrids; // 0x18
		::UnityEngine::Vector3 pushPos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS36_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectChild_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS36_2__ONSELECTCHILD_B__0_OFFSET))(this);
		}
	};
}
