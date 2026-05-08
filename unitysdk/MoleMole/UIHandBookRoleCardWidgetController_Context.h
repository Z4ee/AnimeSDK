#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;

#define MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15259500)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRoleCardWidgetController_Context_TypeDefinitionIndex = 66261;

	class UIHandBookRoleCardWidgetController_Context : public ::System::Object
	{
	public:
		::Class_2_1824EF69C8E376A3* AvatarData; // 0x10
		::System::Boolean IsPromoted; // 0x18
		::System::Boolean IsShowWishListTarget; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
