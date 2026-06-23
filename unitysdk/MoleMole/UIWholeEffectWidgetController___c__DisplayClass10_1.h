#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11BDEC60)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__INITCARD_B__1_OFFSET UNITYSDK_OFFSET(0x11BDEC70)

namespace MoleMole
{
	inline static constexpr unsigned int UIWholeEffectWidgetController___c__DisplayClass10_1_TypeDefinitionIndex = 65089;

	class UIWholeEffectWidgetController___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::Class_1_0D6706375CDAAE8C* card; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__CTOR_OFFSET))(this);
		}

		::System::Void _InitCard_b__1(::UnityEngine::GameObject* go, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__INITCARD_B__1_OFFSET))(this, go, id);
		}
	};
}
