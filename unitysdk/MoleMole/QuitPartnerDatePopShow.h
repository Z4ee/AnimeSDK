#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_QUITPARTNERDATEPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x12650F40)
#define MOLEMOLE_QUITPARTNERDATEPOPSHOW_GET_PROCESSED_OFFSET UNITYSDK_OFFSET(0x12650F30)
#define MOLEMOLE_QUITPARTNERDATEPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x12650FA0)
#define MOLEMOLE_QUITPARTNERDATEPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x12650F50)

namespace MoleMole
{
	inline static constexpr unsigned int QuitPartnerDatePopShow_TypeDefinitionIndex = 87228;

	class QuitPartnerDatePopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Boolean _isInvitePartnerDate; // 0x28
		::System::Boolean _processed; // 0x29
		::System::Int32 _ovaContextID; // 0x2C

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
