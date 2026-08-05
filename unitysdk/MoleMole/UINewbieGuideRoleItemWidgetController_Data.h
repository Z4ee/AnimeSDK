#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UINEWBIEGUIDEROLEITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17A05260)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideRoleItemWidgetController_Data_TypeDefinitionIndex = 41857;

	class UINewbieGuideRoleItemWidgetController_Data : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* OnClick; // 0x10
		::System::Int32 Index; // 0x18
		::System::Boolean IsSelected; // 0x1C
		::System::Int32 AvatarId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEROLEITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
