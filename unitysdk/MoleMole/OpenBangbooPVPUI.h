#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_OPENBANGBOOPVPUI_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x18092EF0)
#define MOLEMOLE_OPENBANGBOOPVPUI_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x18092F10)
#define MOLEMOLE_OPENBANGBOOPVPUI__CTOR_OFFSET UNITYSDK_OFFSET(0x18092F00)

namespace MoleMole
{
	inline static constexpr unsigned int OpenBangbooPVPUI_TypeDefinitionIndex = 86637;

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
