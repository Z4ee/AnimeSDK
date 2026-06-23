#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_4865323EE33E9248;

#define MOLEMOLE_LOGINGACHAVIDEOPOPSHOW_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x14188150)
#define MOLEMOLE_LOGINGACHAVIDEOPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x14188140)
#define MOLEMOLE_LOGINGACHAVIDEOPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x14188230)
#define MOLEMOLE_LOGINGACHAVIDEOPOPSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x141881E0)
#define MOLEMOLE_LOGINGACHAVIDEOPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x141885E0)
#define MOLEMOLE_LOGINGACHAVIDEOPOPSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x141885F0)

namespace MoleMole
{
	inline static constexpr unsigned int LoginGachaVideoPopShow_TypeDefinitionIndex = 49850;

	class LoginGachaVideoPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_1_4865323EE33E9248* popData; // 0x28
		::System::Int32 popPriority; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOGINGACHAVIDEOPOPSHOW__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOGINGACHAVIDEOPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOGINGACHAVIDEOPOPSHOW_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOGINGACHAVIDEOPOPSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOGINGACHAVIDEOPOPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOGINGACHAVIDEOPOPSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
