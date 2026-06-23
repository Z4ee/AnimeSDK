#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_7807B2B04302CD7B_1;
class Class_2_208CC9941471731A_888;

#define MOLEMOLE_GENERALTOPTIPSHOW_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x17E815C0)
#define MOLEMOLE_GENERALTOPTIPSHOW_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x17E81070)
#define MOLEMOLE_GENERALTOPTIPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x17E81030)
#define MOLEMOLE_GENERALTOPTIPSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x17E80FD0)
#define MOLEMOLE_GENERALTOPTIPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x17E80ED0)
#define MOLEMOLE_GENERALTOPTIPSHOW___BASE_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x17E815D0)
#define MOLEMOLE_GENERALTOPTIPSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x17E815E0)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralTopTipShow_TypeDefinitionIndex = 75312;

	class GeneralTopTipShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_2_208CC9941471731A_888* _Config_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_7807B2B04302CD7B_1* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7807B2B04302CD7B_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTOPTIPSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTOPTIPSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTOPTIPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTOPTIPSHOW_GET_ISTRIGGER_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_888* get_Config()
		{
			return ((::Class_2_208CC9941471731A_888*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTOPTIPSHOW_GET_CONFIG_OFFSET))(this);
		}

		::System::Boolean __base_get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTOPTIPSHOW___BASE_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTOPTIPSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
