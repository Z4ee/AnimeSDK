#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1180;

#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2D7C0)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS70_0__INTERNALREFRESHDETAILTITLE_B__0_OFFSET UNITYSDK_OFFSET(0x17A2D7D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoSkillChildWindowController___c__DisplayClass70_0_TypeDefinitionIndex = 45380;

	class UIRoleInfoSkillChildWindowController___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::System::Int32 passiveLevel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InternalRefreshDetailTitle_b__0(::Class_2_208CC9941471731A_1180* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_1180*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS70_0__INTERNALREFRESHDETAILTITLE_B__0_OFFSET))(this, x);
		}
	};
}
