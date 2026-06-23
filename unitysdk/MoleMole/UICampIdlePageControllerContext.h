#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_38.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICAMPIDLEPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A6A9A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageControllerContext_TypeDefinitionIndex = 54305;

	class UICampIdlePageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_0A3761FE34514D6C_38 playType; // 0x28
		::System::Int32 initNodeID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
