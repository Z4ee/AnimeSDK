#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS16_1__CTOR_OFFSET UNITYSDK_OFFSET(0x182503B0)
#define MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS16_1__INITSORT_B__4_OFFSET UNITYSDK_OFFSET(0x182503C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardCollectWidgetController___c__DisplayClass16_1_TypeDefinitionIndex = 57496;

	class UIHollowCardCollectWidgetController___c__DisplayClass16_1 : public ::System::Object
	{
	public:
		::System::String* btnName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS16_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitSort_b__4(::System::String* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS16_1__INITSORT_B__4_OFFSET))(this, x);
		}
	};
}
