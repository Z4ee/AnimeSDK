#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_SUBMITCANCELTOGGLESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1998D7B0)

namespace MoleMole
{
	inline static constexpr unsigned int SubmitCancelToggleSettingContext_TypeDefinitionIndex = 64021;

	class SubmitCancelToggleSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::System::Boolean IsToggle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBMITCANCELTOGGLESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
