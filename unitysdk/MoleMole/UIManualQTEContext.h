#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMANUALQTECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x168CFCF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIManualQTEContext_TypeDefinitionIndex = 45864;

	class UIManualQTEContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean OverrideManualQTEOn; // 0x28
		::System::Boolean EnableOverride; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
