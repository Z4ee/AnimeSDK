#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_1824EF69C8E376A3;
class Class_3_0D78EA91F90092C6;

#define MOLEMOLE_UIZENKOVROLEINFOTABWIDGETCONTROLLER_CONTEXT_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x10F13730)
#define MOLEMOLE_UIZENKOVROLEINFOTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10F13760)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRoleInfoTabWidgetController_Context_TypeDefinitionIndex = 51375;

	class UIZenkovRoleInfoTabWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_1824EF69C8E376A3* AvatarItemData; // 0x28
		::Class_3_0D78EA91F90092C6* KovItem; // 0x30
		::System::Int32 WeaponID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROLEINFOTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_AvatarID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROLEINFOTABWIDGETCONTROLLER_CONTEXT_GET_AVATARID_OFFSET))(this);
		}
	};
}
