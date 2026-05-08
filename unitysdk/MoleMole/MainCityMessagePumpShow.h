#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_MAINCITYMESSAGEPUMPSHOW_GET_ISPENETRATE_OFFSET UNITYSDK_OFFSET(0x10BC6C30)
#define MOLEMOLE_MAINCITYMESSAGEPUMPSHOW_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x10BC6C50)
#define MOLEMOLE_MAINCITYMESSAGEPUMPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x10BC6C40)
#define MOLEMOLE_MAINCITYMESSAGEPUMPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x10BC6E80)
#define MOLEMOLE_MAINCITYMESSAGEPUMPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC6F70)
#define MOLEMOLE_MAINCITYMESSAGEPUMPSHOW___BASE_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x10BC6F80)

namespace MoleMole
{
	inline static constexpr unsigned int MainCityMessagePumpShow_TypeDefinitionIndex = 74181;

	class MainCityMessagePumpShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYMESSAGEPUMPSHOW__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPenetrate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYMESSAGEPUMPSHOW_GET_ISPENETRATE_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYMESSAGEPUMPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYMESSAGEPUMPSHOW_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYMESSAGEPUMPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Boolean __base_get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYMESSAGEPUMPSHOW___BASE_GET_ISTRIGGER_OFFSET))(this);
		}
	};
}
