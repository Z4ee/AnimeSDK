#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HackEntrySubSystem_HackTarget.h"

#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKOBJECTOPERATECAMERAVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF4C40)

namespace MoleMole
{
	inline static constexpr unsigned int HackEntrySubSystem_HackObjectOperateCameraView_TypeDefinitionIndex = 71360;

	class HackEntrySubSystem_HackObjectOperateCameraView : public ::MoleMole::HackEntrySubSystem_HackTarget
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKOBJECTOPERATECAMERAVIEW__CTOR_OFFSET))(this);
		}
	};
}
