#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_HOTUPDATEKICKALERTPOPUP_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x14182460)
#define MOLEMOLE_HOTUPDATEKICKALERTPOPUP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x14182480)
#define MOLEMOLE_HOTUPDATEKICKALERTPOPUP__CTOR_OFFSET UNITYSDK_OFFSET(0x14182470)

namespace MoleMole
{
	inline static constexpr unsigned int HotUpdateKickAlertPopup_TypeDefinitionIndex = 66431;

	class HotUpdateKickAlertPopup : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOTUPDATEKICKALERTPOPUP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOTUPDATEKICKALERTPOPUP_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOTUPDATEKICKALERTPOPUP_ONPROCESS_OFFSET))(this);
		}
	};
}
