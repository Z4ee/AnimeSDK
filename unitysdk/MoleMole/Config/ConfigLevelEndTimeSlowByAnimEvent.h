#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLevelEndTimeSlow.h"

namespace MoleMole::Config { class ConfigLevelEndTimeSlowByAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGLEVELENDTIMESLOWBYANIMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x12717E60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelEndTimeSlowByAnimEvent_TypeDefinitionIndex = 85911;

	class ConfigLevelEndTimeSlowByAnimEvent : public ::MoleMole::Config::ConfigLevelEndTimeSlow
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::Config::ConfigLevelEndTimeSlowByAvatar*>* AvatarTimeSlows; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELENDTIMESLOWBYANIMEVENT__CTOR_OFFSET))(this);
		}
	};
}
