#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DEC0174660AB7EDF.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIEDITBTNSMALLWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC1E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIEditBtnSmallWidgetController_Context_TypeDefinitionIndex = 77742;

	class UIEditBtnSmallWidgetController_Context : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::System::Action* OnClick; // 0x18
		::Share::ENotificationBadgeType RedDotType; // 0x20
		::System::Boolean IsInteractable; // 0x24
		::Enum_3_DEC0174660AB7EDF BtnType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEDITBTNSMALLWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
