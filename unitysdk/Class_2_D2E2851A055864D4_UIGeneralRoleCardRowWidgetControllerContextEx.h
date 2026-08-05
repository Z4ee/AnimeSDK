#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralRoleCardRowWidgetController_Context.h"

class Class_2_1824EF69C8E376A3;

#define CLASS_2_D2E2851A055864D4_UIGENERALROLECARDROWWIDGETCONTROLLERCONTEXTEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16E96510)
#define CLASS_2_D2E2851A055864D4_UIGENERALROLECARDROWWIDGETCONTROLLERCONTEXTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x16E964A0)

inline static constexpr unsigned int Class_2_D2E2851A055864D4_UIGeneralRoleCardRowWidgetControllerContextEx_TypeDefinitionIndex = 85367;

class Class_2_D2E2851A055864D4_UIGeneralRoleCardRowWidgetControllerContextEx : public ::MoleMole::UIGeneralRoleCardRowWidgetController_Context
{
public:
	::Class_2_1824EF69C8E376A3* avatarItem; // 0x70

	::System::Void _ctor(::System::Int32 robotId)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2E2851A055864D4_UIGENERALROLECARDROWWIDGETCONTROLLERCONTEXTEX__CTOR_OFFSET))(this, robotId);
	}

	::System::Void _ctor_1(::Class_2_1824EF69C8E376A3* data)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + CLASS_2_D2E2851A055864D4_UIGENERALROLECARDROWWIDGETCONTROLLERCONTEXTEX__CTOR_1_OFFSET))(this, data);
	}
};
