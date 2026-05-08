#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB7EDA01543EB7EB;

#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_1__CTOR_OFFSET UNITYSDK_OFFSET(0x151B9410)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_1__UPDATEPOSITION_B__3_OFFSET UNITYSDK_OFFSET(0x151B9420)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_1__UPDATEPOSITION_B__4_OFFSET UNITYSDK_OFFSET(0x151B9440)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleWidgetController___c__DisplayClass37_1_TypeDefinitionIndex = 58773;

	class UIGeneralNewsBubbleWidgetController___c__DisplayClass37_1 : public ::System::Object
	{
	public:
		::Class_1_BB7EDA01543EB7EB* pos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_1__CTOR_OFFSET))(this);
		}

		::System::Single _UpdatePosition_b__3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_1__UPDATEPOSITION_B__3_OFFSET))(this);
		}

		::System::Void _UpdatePosition_b__4(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS37_1__UPDATEPOSITION_B__4_OFFSET))(this, v);
		}
	};
}
