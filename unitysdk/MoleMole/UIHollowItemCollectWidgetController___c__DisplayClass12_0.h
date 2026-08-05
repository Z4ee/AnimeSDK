#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x190EFE60)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS12_0__TRYTRIGGEREFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x190EFE70)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemCollectWidgetController___c__DisplayClass12_0_TypeDefinitionIndex = 54639;

	class UIHollowItemCollectWidgetController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Action* __9__0; // 0x10
		::System::Action* localCopy; // 0x18
		::System::Int32 waitCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryTriggerEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS12_0__TRYTRIGGEREFFECT_B__0_OFFSET))(this);
		}
	};
}
