#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TunnelPartDisplayMessageBase.h"

#define MOLEMOLE_MESSAGEPUMPSHOWONGOING_GET_ISPENETRATE_OFFSET UNITYSDK_OFFSET(0x1A03DF40)
#define MOLEMOLE_MESSAGEPUMPSHOWONGOING_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1A03DF50)
#define MOLEMOLE_MESSAGEPUMPSHOWONGOING_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1A03DF90)
#define MOLEMOLE_MESSAGEPUMPSHOWONGOING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A03DF60)

namespace MoleMole
{
	inline static constexpr unsigned int MessagePumpShowOngoing_TypeDefinitionIndex = 61313;

	class MessagePumpShowOngoing : public ::MoleMole::TunnelPartDisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWONGOING__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPenetrate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWONGOING_GET_ISPENETRATE_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWONGOING_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWONGOING_ONPROCESS_OFFSET))(this);
		}
	};
}
