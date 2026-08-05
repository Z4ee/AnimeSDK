#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LevelEndType.h"
#include "unitysdk/MoleMole/ExitPerform/ExitPerformEventGroup.h"

#define MOLEMOLE_EXITPERFORM_KILLTYPEEXITPERFORMEVENTGROUP_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x1B951950)
#define MOLEMOLE_EXITPERFORM_KILLTYPEEXITPERFORMEVENTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B951AB0)

namespace MoleMole::ExitPerform
{
	inline static constexpr unsigned int KillTypeExitPerformEventGroup_TypeDefinitionIndex = 57531;

	class KillTypeExitPerformEventGroup : public ::MoleMole::ExitPerform::ExitPerformEventGroup
	{
	public:
		::MoleMole::Config::LevelEndType applyKillType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITPERFORM_KILLTYPEEXITPERFORMEVENTGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITPERFORM_KILLTYPEEXITPERFORMEVENTGROUP_GET_ISENABLED_OFFSET))(this);
		}
	};
}
