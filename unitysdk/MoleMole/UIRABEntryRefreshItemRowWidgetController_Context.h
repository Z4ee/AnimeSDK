#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIRABENTRYREFRESHITEMROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17E1B210)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABEntryRefreshItemRowWidgetController_Context_TypeDefinitionIndex = 68382;

	class UIRABEntryRefreshItemRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnClick; // 0x28
		::System::Func_2<::System::Int32, ::System::Boolean>* CheckSelect; // 0x30
		::System::Func_2<::System::Int32, ::System::Boolean>* CheckUnlock; // 0x38
		::System::Int32 FactorType; // 0x40
		::System::Int32 BuddyConfigId; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENTRYREFRESHITEMROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
