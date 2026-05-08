#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SubsystemBase.h"

#define MOLEMOLE_GLOBALSUBSYSTEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x125CEA00)

namespace MoleMole
{
	inline static constexpr unsigned int GlobalSubsystemBase_TypeDefinitionIndex = 82299;

	class GlobalSubsystemBase : public ::MoleMole::SubsystemBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALSUBSYSTEMBASE__CTOR_OFFSET))(this);
		}
	};
}
