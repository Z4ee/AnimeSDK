#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
class Class_2_0A55B5A82A61DAFA;

#define MOLEMOLE_UIYOROZUYAABYSSS2WIDGETCONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14910F20)
#define MOLEMOLE_UIYOROZUYAABYSSS2WIDGETCONTROLLER___C__DISPLAYCLASS57_0__GOLINEUPSELECT_B__0_OFFSET UNITYSDK_OFFSET(0x14910F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaAbyssS2WidgetController___c__DisplayClass57_0_TypeDefinitionIndex = 42765;

	class UIYorozuyaAbyssS2WidgetController___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::Class_2_0A55B5A82A61DAFA* selectedConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSS2WIDGETCONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GoLineupSelect_b__0(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSS2WIDGETCONTROLLER___C__DISPLAYCLASS57_0__GOLINEUPSELECT_B__0_OFFSET))(this, data);
		}
	};
}
