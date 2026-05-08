#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_NEOGOLDENMECHAMODULECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13EAEEA0)

namespace MoleMole
{
	inline static constexpr unsigned int NeoGoldenMechaModuleContext_TypeDefinitionIndex = 41566;

	class NeoGoldenMechaModuleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 buildID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEOGOLDENMECHAMODULECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
