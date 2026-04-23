#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AstraFX/AstraFXDataNode.h"

#define RPG_CLIENT_ASTRAFX_ASTRAFXDATARECEIVER_GET_ISPROVIDER_OFFSET UNITYSDK_OFFSET(0x9D45030)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATARECEIVER_GET_ISRECEIVER_OFFSET UNITYSDK_OFFSET(0x9D45040)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATARECEIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D45050)

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFXDataReceiver_TypeDefinitionIndex = 67823;

	class AstraFXDataReceiver : public ::RPG::Client::AstraFX::AstraFXDataNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATARECEIVER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsProvider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATARECEIVER_GET_ISPROVIDER_OFFSET))(this);
		}

		::System::Boolean get_IsReceiver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATARECEIVER_GET_ISRECEIVER_OFFSET))(this);
		}
	};
}
