#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIYorozuyaSphereItemWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIYOROZUYASPHEREITEMWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10427AB0)
#define MOLEMOLE_UIYOROZUYASPHEREITEMWIDGETCONTROLLER___C__DISPLAYCLASS11_0__PLAYIDLEANI_B__0_OFFSET UNITYSDK_OFFSET(0x10427AC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaSphereItemWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 62731;

	class UIYorozuyaSphereItemWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::String* idle; // 0x10
		::MoleMole::UIYorozuyaSphereItemWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYASPHEREITEMWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayIdleAni_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYASPHEREITEMWIDGETCONTROLLER___C__DISPLAYCLASS11_0__PLAYIDLEANI_B__0_OFFSET))(this);
		}
	};
}
