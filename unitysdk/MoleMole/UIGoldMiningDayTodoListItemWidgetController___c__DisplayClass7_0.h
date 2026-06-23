#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06C40FD353242AA8;

#define MOLEMOLE_UIGOLDMININGDAYTODOLISTITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181186A0)
#define MOLEMOLE_UIGOLDMININGDAYTODOLISTITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__SETGENERALQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x181186B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayTodoListItemWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 77155;

	class UIGoldMiningDayTodoListItemWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Int32 questID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTODOLISTITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetGeneralQuest_b__0(::Class_1_06C40FD353242AA8* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_06C40FD353242AA8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTODOLISTITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__SETGENERALQUEST_B__0_OFFSET))(this, x);
		}
	};
}
