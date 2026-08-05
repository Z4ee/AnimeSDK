#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HackEntrySubSystem_HackTarget.h"

#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKOBJECTOPERATEEAVESDROP_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x144DAAA0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKOBJECTOPERATEEAVESDROP__CTOR_OFFSET UNITYSDK_OFFSET(0x144DAB30)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKOBJECTOPERATEEAVESDROP___BASE_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x144DAB40)

namespace MoleMole
{
	inline static constexpr unsigned int HackEntrySubSystem_HackObjectOperateEavesdrop_TypeDefinitionIndex = 71364;

	class HackEntrySubSystem_HackObjectOperateEavesdrop : public ::MoleMole::HackEntrySubSystem_HackTarget
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKOBJECTOPERATEEAVESDROP__CTOR_OFFSET))(this);
		}

		::System::Void Deallocate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKOBJECTOPERATEEAVESDROP_DEALLOCATE_OFFSET))(this);
		}

		::System::Void __base_Deallocate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKOBJECTOPERATEEAVESDROP___BASE_DEALLOCATE_OFFSET))(this);
		}
	};
}
