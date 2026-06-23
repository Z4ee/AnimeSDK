#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11BDEAB0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__INITCARD_B__0_OFFSET UNITYSDK_OFFSET(0x11BDEAC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWholeEffectWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 65088;

	class UIWholeEffectWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::Class_1_0D6706375CDAAE8C* card; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitCard_b__0(::UnityEngine::GameObject* go, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__INITCARD_B__0_OFFSET))(this, go, id);
		}
	};
}
