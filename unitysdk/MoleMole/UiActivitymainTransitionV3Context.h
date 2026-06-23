#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xF966410)

namespace MoleMole
{
	inline static constexpr unsigned int UiActivitymainTransitionV3Context_TypeDefinitionIndex = 45602;

	class UiActivitymainTransitionV3Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 mainLineVersion; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
