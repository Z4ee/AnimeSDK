#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_SUMMERTIDETREASUREPAUSECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x191BA9B0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasurePauseContext_TypeDefinitionIndex = 80282;

	class SummerTideTreasurePauseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::Events::UnityAction* OverGame; // 0x28
		::UnityEngine::Events::UnityAction* ExitGame; // 0x30
		::UnityEngine::Events::UnityAction* OpenTutorial; // 0x38
		::UnityEngine::Events::UnityAction* ContinueGame; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASUREPAUSECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
