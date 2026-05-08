#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIBPPagePageController; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_BPREWARDINFOWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17428670)

namespace MoleMole
{
	inline static constexpr unsigned int BPRewardInfoWidgetContext_TypeDefinitionIndex = 49507;

	class BPRewardInfoWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIBPPagePageController* bpPageController; // 0x28
		::UnityEngine::Events::UnityAction* advanceBtnClick; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BPREWARDINFOWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
