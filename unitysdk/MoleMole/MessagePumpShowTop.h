#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TunnelPartDisplayMessageBase.h"

#define MOLEMOLE_MESSAGEPUMPSHOWTOP_GET_ISPENETRATE_OFFSET UNITYSDK_OFFSET(0x13028900)
#define MOLEMOLE_MESSAGEPUMPSHOWTOP_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x13028910)
#define MOLEMOLE_MESSAGEPUMPSHOWTOP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13028930)
#define MOLEMOLE_MESSAGEPUMPSHOWTOP__CTOR_OFFSET UNITYSDK_OFFSET(0x13028920)

namespace MoleMole
{
	inline static constexpr unsigned int MessagePumpShowTop_TypeDefinitionIndex = 82602;

	class MessagePumpShowTop : public ::MoleMole::TunnelPartDisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWTOP__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPenetrate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWTOP_GET_ISPENETRATE_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWTOP_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWTOP_ONPROCESS_OFFSET))(this);
		}
	};
}
