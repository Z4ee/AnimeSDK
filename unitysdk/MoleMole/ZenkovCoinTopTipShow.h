#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_7807B2B04302CD7B_27;

#define MOLEMOLE_ZENKOVCOINTOPTIPSHOW_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x112EB800)
#define MOLEMOLE_ZENKOVCOINTOPTIPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x112EB8B0)
#define MOLEMOLE_ZENKOVCOINTOPTIPSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x112EB7A0)
#define MOLEMOLE_ZENKOVCOINTOPTIPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x112EB770)
#define MOLEMOLE_ZENKOVCOINTOPTIPSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x112EBB40)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovCoinTopTipShow_TypeDefinitionIndex = 76915;

	class ZenkovCoinTopTipShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_1_7807B2B04302CD7B_27* _context; // 0x28

		::System::Void _ctor(::Class_1_7807B2B04302CD7B_27* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7807B2B04302CD7B_27*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVCOINTOPTIPSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVCOINTOPTIPSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVCOINTOPTIPSHOW_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVCOINTOPTIPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVCOINTOPTIPSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
