#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGENERALACTIVITYTAGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x187ED090)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralActivityTagContext_TypeDefinitionIndex = 60764;

	class UIGeneralActivityTagContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::Events::UnityAction* detailCallback; // 0x28
		::System::Boolean activeConsoleRegion; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
