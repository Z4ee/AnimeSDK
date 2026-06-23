#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_OPENBANGBOOPVPUI_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x164235D0)
#define MOLEMOLE_OPENBANGBOOPVPUI_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x164235F0)
#define MOLEMOLE_OPENBANGBOOPVPUI__CTOR_OFFSET UNITYSDK_OFFSET(0x164235E0)

namespace MoleMole
{
	inline static constexpr unsigned int OpenBangbooPVPUI_TypeDefinitionIndex = 64300;

	class OpenBangbooPVPUI : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENBANGBOOPVPUI__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENBANGBOOPVPUI_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENBANGBOOPVPUI_ONPROCESS_OFFSET))(this);
		}
	};
}
