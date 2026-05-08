#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ItemCollectEffectType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowItemCollectEffectWidgetController___c__DisplayClass10_0; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15CBF9A0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__SETPATH_B__5_OFFSET UNITYSDK_OFFSET(0x15CBFA70)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__SETPATH_B__6_OFFSET UNITYSDK_OFFSET(0x15CBFA80)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__SETPATH_B__8_OFFSET UNITYSDK_OFFSET(0x15CBFA90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemCollectEffectWidgetController___c__DisplayClass10_1_TypeDefinitionIndex = 42467;

	class UIHollowItemCollectEffectWidgetController___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowItemCollectEffectWidgetController___c__DisplayClass10_0* CS___8__locals1; // 0x10
		::UnityEngine::ParticleSystem* effect; // 0x18
		::System::Single timerForEnd; // 0x20
		::MoleMole::ItemCollectEffectType effectType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__CTOR_OFFSET))(this);
		}

		::System::Single _SetPath_b__5()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__SETPATH_B__5_OFFSET))(this);
		}

		::System::Void _SetPath_b__6(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__SETPATH_B__6_OFFSET))(this, value);
		}

		::System::Void _SetPath_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__SETPATH_B__8_OFFSET))(this);
		}
	};
}
