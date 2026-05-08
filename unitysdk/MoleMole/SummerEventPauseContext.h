#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_SUMMEREVENTPAUSECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1236E7B0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventPauseContext_TypeDefinitionIndex = 58166;

	class SummerEventPauseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::Events::UnityAction* ContinueGame; // 0x28
		::UnityEngine::Events::UnityAction* RestartGame; // 0x30
		::UnityEngine::Events::UnityAction* ExitGame; // 0x38
		::UnityEngine::Events::UnityAction* OpenTutorial; // 0x40
		::UnityEngine::Events::UnityAction* OpenSetting; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTPAUSECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
