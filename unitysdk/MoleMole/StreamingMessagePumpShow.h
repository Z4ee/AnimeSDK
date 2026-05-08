#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_STREAMINGMESSAGEPUMPSHOW_GET_ISPENETRATE_OFFSET UNITYSDK_OFFSET(0x13874D90)
#define MOLEMOLE_STREAMINGMESSAGEPUMPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x13874DA0)
#define MOLEMOLE_STREAMINGMESSAGEPUMPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13874DE0)
#define MOLEMOLE_STREAMINGMESSAGEPUMPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x13874DB0)

namespace MoleMole
{
	inline static constexpr unsigned int StreamingMessagePumpShow_TypeDefinitionIndex = 60375;

	class StreamingMessagePumpShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STREAMINGMESSAGEPUMPSHOW__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPenetrate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STREAMINGMESSAGEPUMPSHOW_GET_ISPENETRATE_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STREAMINGMESSAGEPUMPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STREAMINGMESSAGEPUMPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
