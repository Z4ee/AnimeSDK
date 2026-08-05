#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYREMIELLECAMERACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x197D5870)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRemielleCameraContext_TypeDefinitionIndex = 68357;

	class UIActivityRemielleCameraContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYREMIELLECAMERACONTEXT__CTOR_OFFSET))(this);
		}
	};
}
