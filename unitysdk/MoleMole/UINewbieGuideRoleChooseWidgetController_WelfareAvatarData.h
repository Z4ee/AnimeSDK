#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UINEWBIEGUIDEROLECHOOSEWIDGETCONTROLLER_WELFAREAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15F4A190)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideRoleChooseWidgetController_WelfareAvatarData_TypeDefinitionIndex = 48504;

	class UINewbieGuideRoleChooseWidgetController_WelfareAvatarData : public ::System::Object
	{
	public:
		::System::Int32 SourceType; // 0x10
		::System::Int32 AvatarId; // 0x14
		::System::Int32 GroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEROLECHOOSEWIDGETCONTROLLER_WELFAREAVATARDATA__CTOR_OFFSET))(this);
		}
	};
}
