#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGRECOVERY__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACB770)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ConfigRecovery_TypeDefinitionIndex = 53019;

	class ConfigZipLine_ConfigRecovery : public ::System::Object
	{
	public:
		::System::Boolean Switch_InDuring; // 0x10
		::System::Single Switch_After; // 0x14
		::System::Boolean Enter_InDuring; // 0x18
		::System::Single Enter_After; // 0x1C
		::System::Boolean TurnBack_InDuring; // 0x20
		::System::Single TurnBack_After; // 0x24
		::System::Single TurnBack_After_Switch; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGRECOVERY__CTOR_OFFSET))(this);
		}
	};
}
