#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_SUIBIANTEMPLELEVELUPDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x191BA470)

namespace MoleMole
{
	inline static constexpr unsigned int SuibianTempleLevelUpDialogContext_TypeDefinitionIndex = 64452;

	class SuibianTempleLevelUpDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean SendUpgrade; // 0x28
		::System::Int32 Level; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUIBIANTEMPLELEVELUPDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
