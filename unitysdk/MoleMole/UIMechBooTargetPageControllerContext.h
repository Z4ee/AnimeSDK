#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14B94EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooTargetPageControllerContext_TypeDefinitionIndex = 40797;

	class UIMechBooTargetPageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ScriptID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
