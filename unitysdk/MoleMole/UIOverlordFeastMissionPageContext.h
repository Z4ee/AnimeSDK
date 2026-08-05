#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1673DA70)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastMissionPageContext_TypeDefinitionIndex = 43168;

	class UIOverlordFeastMissionPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TargetGameID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
