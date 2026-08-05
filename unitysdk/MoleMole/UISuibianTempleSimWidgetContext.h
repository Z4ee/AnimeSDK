#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UISuibianTempleManageInfoContext; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11E10C50)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleSimWidgetContext_TypeDefinitionIndex = 56417;

	class UISuibianTempleSimWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::MoleMole::UISuibianTempleManageInfoContext*>* OpenDetailWidget; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
