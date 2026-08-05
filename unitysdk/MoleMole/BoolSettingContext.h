#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_BOOLSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x116CB580)

namespace MoleMole
{
	inline static constexpr unsigned int BoolSettingContext_TypeDefinitionIndex = 73556;

	class BoolSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::System::Boolean IsEnable; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BOOLSETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
