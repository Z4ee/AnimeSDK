#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HackEntrySubSystem_HackTarget.h"

#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKOBJECTOPERATEHACK_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x13EED080)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKOBJECTOPERATEHACK__CTOR_OFFSET UNITYSDK_OFFSET(0x13EED110)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKOBJECTOPERATEHACK___BASE_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x13EED130)

namespace MoleMole
{
	inline static constexpr unsigned int HackEntrySubSystem_HackObjectOperateHack_TypeDefinitionIndex = 83316;

	class HackEntrySubSystem_HackObjectOperateHack : public ::MoleMole::HackEntrySubSystem_HackTarget
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKOBJECTOPERATEHACK__CTOR_OFFSET))(this);
		}

		::System::Void Deallocate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKOBJECTOPERATEHACK_DEALLOCATE_OFFSET))(this);
		}

		::System::Void __base_Deallocate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKOBJECTOPERATEHACK___BASE_DEALLOCATE_OFFSET))(this);
		}
	};
}
