#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CloudButtonRumbleType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_CLOUDBUTTONRUMBLESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x106B3040)

namespace MoleMole
{
	inline static constexpr unsigned int CloudButtonRumbleSettingContext_TypeDefinitionIndex = 55435;

	class CloudButtonRumbleSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::CloudButtonRumbleType ButtonRumbleType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDBUTTONRUMBLESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
