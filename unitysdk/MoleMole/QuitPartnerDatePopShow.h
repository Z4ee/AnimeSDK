#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_QUITPARTNERDATEPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x14A1E680)
#define MOLEMOLE_QUITPARTNERDATEPOPSHOW_GET_PROCESSED_OFFSET UNITYSDK_OFFSET(0x14A1E670)
#define MOLEMOLE_QUITPARTNERDATEPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x14A1E6E0)
#define MOLEMOLE_QUITPARTNERDATEPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1E690)

namespace MoleMole
{
	inline static constexpr unsigned int QuitPartnerDatePopShow_TypeDefinitionIndex = 50568;

	class QuitPartnerDatePopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 _ovaContextID; // 0x28
		::System::Boolean _isInvitePartnerDate; // 0x2C
		::System::Boolean _processed; // 0x2D

		::System::Void _ctor(::System::Boolean isInvitePartnerDate, ::System::Int32 ovaContextID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITPARTNERDATEPOPSHOW__CTOR_OFFSET))(this, isInvitePartnerDate, ovaContextID);
		}

		::System::Boolean get_Processed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITPARTNERDATEPOPSHOW_GET_PROCESSED_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITPARTNERDATEPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITPARTNERDATEPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
