#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x183B3210)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooTargetPopWindowControllerContext_TypeDefinitionIndex = 50570;

	class UIMechBooTargetPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean HideMaskClose; // 0x28
		::System::Boolean ShowOkBtn; // 0x29
		::System::Int32 ScriptID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
