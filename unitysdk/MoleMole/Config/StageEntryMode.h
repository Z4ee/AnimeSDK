#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_STAGEENTRYMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1231B600)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StageEntryMode_TypeDefinitionIndex = 57185;

	class StageEntryMode : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRYMODE__CTOR_OFFSET))(this);
		}
	};
}
