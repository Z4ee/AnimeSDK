#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIBaseController; }

#define MOLEMOLE_UINEWBIECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1987A7E0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieControllerContext_TypeDefinitionIndex = 50565;

	class UINewbieControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIBaseController* curHookWindow; // 0x28
		::System::Int32 newbieGroupTemplateID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
