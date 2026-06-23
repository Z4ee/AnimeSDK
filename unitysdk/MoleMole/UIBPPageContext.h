#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBPPAGECONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x14BD7B60)
#define MOLEMOLE_UIBPPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14BD7BB0)
#define MOLEMOLE_UIBPPAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x14BD7C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPPageContext_TypeDefinitionIndex = 60612;

	class UIBPPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		// static const ::System::Int32 MAIN_TAB = 0x0; // 0x0
		// static const ::System::Int32 TASK_TAB = 0x1; // 0x0
		// static const ::System::Int32 CORE_REWARD_TAB = 0x2; // 0x0
		::System::Int32 jumpTabIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPAGECONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
