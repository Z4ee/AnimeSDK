#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1842E3D0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuidePageController_Context_TypeDefinitionIndex = 58884;

	class UINewbieGuidePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ReturnRoleIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
