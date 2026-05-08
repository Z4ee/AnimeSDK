#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHREQ_ISVALID_OFFSET UNITYSDK_OFFSET(0x7AC630)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHREQ__CCTOR_OFFSET UNITYSDK_OFFSET(0x160B8C90)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHREQ__CTOR_OFFSET UNITYSDK_OFFSET(0x3EABD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityClockWidgetController_RefreshReq_TypeDefinitionIndex = 53264;

	struct alignas(4) UIMainCityClockWidgetController_RefreshReq
	{
		static ::MoleMole::UIMainCityClockWidgetController_RefreshReq* StaticGet_INVALID()
		{
			return (::MoleMole::UIMainCityClockWidgetController_RefreshReq*)Il2CppClass::FromTypeDefinitionIndex(UIMainCityClockWidgetController_RefreshReq_TypeDefinitionIndex)->GetStaticField(0xE700);
		}
		::System::DayOfWeek dayOfWeek; // 0x10
		::System::Int32 hours; // 0x14
		::System::Int32 minutes; // 0x18

		::System::Void _ctor(::System::DayOfWeek dayOfWeek, ::System::Int32 hours, ::System::Int32 minutes)
		{
			return ((::System::Void(*)(::PVOID, ::System::DayOfWeek, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHREQ__CTOR_OFFSET))(this, dayOfWeek, hours, minutes);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHREQ__CCTOR_OFFSET))();
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHREQ_ISVALID_OFFSET))(this);
		}
	};
}
