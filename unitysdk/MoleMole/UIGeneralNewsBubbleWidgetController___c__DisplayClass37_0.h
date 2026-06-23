#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB7EDA01543EB7EB;

#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x171E1BB0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_0__UPDATEPOSITION_B__1_OFFSET UNITYSDK_OFFSET(0x171E1BC0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_0__UPDATEPOSITION_B__2_OFFSET UNITYSDK_OFFSET(0x171E1BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleWidgetController___c__DisplayClass37_0_TypeDefinitionIndex = 54502;

	class UIGeneralNewsBubbleWidgetController___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::Class_1_BB7EDA01543EB7EB* pos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Single _UpdatePosition_b__1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_0__UPDATEPOSITION_B__1_OFFSET))(this);
		}

		::System::Void _UpdatePosition_b__2(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_0__UPDATEPOSITION_B__2_OFFSET))(this, v);
		}
	};
}
