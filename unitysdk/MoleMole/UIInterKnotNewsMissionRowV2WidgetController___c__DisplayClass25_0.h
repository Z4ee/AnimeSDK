#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2181504E881DDEE4;

#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWV2WIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1830F0B0)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWV2WIDGETCONTROLLER___C__DISPLAYCLASS25_0__SETMISSIONITEMSELECT_B__0_OFFSET UNITYSDK_OFFSET(0x1830F0C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsMissionRowV2WidgetController___c__DisplayClass25_0_TypeDefinitionIndex = 53507;

	class UIInterKnotNewsMissionRowV2WidgetController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Int32 questID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWV2WIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetMissionItemSelect_b__0(::Class_1_2181504E881DDEE4* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2181504E881DDEE4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWV2WIDGETCONTROLLER___C__DISPLAYCLASS25_0__SETMISSIONITEMSELECT_B__0_OFFSET))(this, a);
		}
	};
}
