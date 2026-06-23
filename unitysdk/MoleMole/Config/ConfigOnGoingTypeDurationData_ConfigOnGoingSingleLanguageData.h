#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGONGOINGTYPEDURATIONDATA_CONFIGONGOINGSINGLELANGUAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA568D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigOnGoingTypeDurationData_ConfigOnGoingSingleLanguageData_TypeDefinitionIndex = 58110;

	class ConfigOnGoingTypeDurationData_ConfigOnGoingSingleLanguageData : public ::System::Object
	{
	public:
		::System::Int32 value1; // 0x10
		::System::Int32 value2; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGONGOINGTYPEDURATIONDATA_CONFIGONGOINGSINGLELANGUAGEDATA__CTOR_OFFSET))(this);
		}
	};
}
