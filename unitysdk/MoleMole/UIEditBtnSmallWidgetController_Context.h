#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DEC0174660AB7EDF.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIEDITBTNSMALLWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9B930)

namespace MoleMole
{
	inline static constexpr unsigned int UIEditBtnSmallWidgetController_Context_TypeDefinitionIndex = 81785;

	class UIEditBtnSmallWidgetController_Context : public ::System::Object
	{
	public:
		::System::Action* OnClick; // 0x10
		::System::String* Key; // 0x18
		::Share::ENotificationBadgeType RedDotType; // 0x20
		::Enum_3_DEC0174660AB7EDF BtnType; // 0x24
		::System::Boolean IsInteractable; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEDITBTNSMALLWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
