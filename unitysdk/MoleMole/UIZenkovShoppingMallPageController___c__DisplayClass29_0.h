#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovShoppingMallPageController; }

#define MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10F14C00)
#define MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS29_0__TRYSELECTITEMBYID_B__0_OFFSET UNITYSDK_OFFSET(0x10F14C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovShoppingMallPageController___c__DisplayClass29_0_TypeDefinitionIndex = 42027;

	class UIZenkovShoppingMallPageController___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovShoppingMallPageController* __4__this; // 0x10
		::System::Int32 targetItemId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _TrySelectItemById_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS29_0__TRYSELECTITEMBYID_B__0_OFFSET))(this);
		}
	};
}
