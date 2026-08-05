#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIHANDBOOKBANGBOOMICROWEBITEMROWWIDGETCONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18827CD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookBangbooMicroWebItemRowWidgetController_PanelData_TypeDefinitionIndex = 45295;

	class UIHandBookBangbooMicroWebItemRowWidgetController_PanelData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::Action* OnTrack; // 0x18
		::System::String* TitleKey; // 0x20
		::Share::ENotificationBadgeType RedSignKey; // 0x28
		::System::Int32 Max; // 0x2C
		::System::Int32 ItemId; // 0x30
		::System::Int32 Current; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBANGBOOMICROWEBITEMROWWIDGETCONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
