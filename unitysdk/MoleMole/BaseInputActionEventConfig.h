#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9A6C0545772F4974.h"
#include "unitysdk/MoleMole/InputActionDispatchPriority.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BASEINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x116C8DF0)
#define MOLEMOLE_BASEINPUTACTIONEVENTCONFIG_GET_IGNOREPLATFORMV2_OFFSET UNITYSDK_OFFSET(0x116C8E00)
#define MOLEMOLE_BASEINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x116C8E10)

namespace MoleMole
{
	inline static constexpr unsigned int BaseInputActionEventConfig_TypeDefinitionIndex = 63619;

	class BaseInputActionEventConfig : public ::System::Object
	{
	public:
		::MoleMole::InputActionDispatchPriority InputPriority; // 0x10
		::System::Boolean IgnorePlatform; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_9A6C0545772F4974 get_dataType()
		{
			return ((::Enum_3_9A6C0545772F4974(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}

		::System::Boolean get_IgnorePlatformV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEINPUTACTIONEVENTCONFIG_GET_IGNOREPLATFORMV2_OFFSET))(this);
		}
	};
}
