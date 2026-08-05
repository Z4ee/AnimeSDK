#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_32.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICAMPIDLEPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A643740)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageControllerContext_TypeDefinitionIndex = 85325;

	class UICampIdlePageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 initNodeID; // 0x28
		::Enum_3_0A3761FE34514D6C_32 playType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
