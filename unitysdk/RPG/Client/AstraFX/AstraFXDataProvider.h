#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AstraFX/AstraFXDataNode.h"

#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAPROVIDER_GET_ISPROVIDER_OFFSET UNITYSDK_OFFSET(0x19B39D30)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAPROVIDER_GET_ISRECEIVER_OFFSET UNITYSDK_OFFSET(0x19B39D40)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B39D50)

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFXDataProvider_TypeDefinitionIndex = 70280;

	class AstraFXDataProvider : public ::RPG::Client::AstraFX::AstraFXDataNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsProvider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAPROVIDER_GET_ISPROVIDER_OFFSET))(this);
		}

		::System::Boolean get_IsReceiver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAPROVIDER_GET_ISRECEIVER_OFFSET))(this);
		}
	};
}
