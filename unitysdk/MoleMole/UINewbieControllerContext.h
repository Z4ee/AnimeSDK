#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIBaseController; }

#define MOLEMOLE_UINEWBIECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x151092E0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieControllerContext_TypeDefinitionIndex = 68020;

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
