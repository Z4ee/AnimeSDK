#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B89683A15B3B0C43_Enum_3_55DEA7760B94F1B2.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_200;

#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE84F6F0)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS17_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xE84F700)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceItemCollectWidgetController___c__DisplayClass17_0_TypeDefinitionIndex = 76846;

	class UITriDiceItemCollectWidgetController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::Class_2_B89683A15B3B0C43_Enum_3_55DEA7760B94F1B2 luckType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__0(::Class_2_208CC9941471731A_200* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_200*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS17_0__REFRESHVIEW_B__0_OFFSET))(this, item);
		}
	};
}
