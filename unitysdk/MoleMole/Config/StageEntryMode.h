#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_STAGEENTRYMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x172BEAD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StageEntryMode_TypeDefinitionIndex = 59820;

	class StageEntryMode : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRYMODE__CTOR_OFFSET))(this);
		}
	};
}
