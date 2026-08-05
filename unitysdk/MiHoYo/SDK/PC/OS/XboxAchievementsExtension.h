#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class XboxAchievementEntry; }

#define MIHOYO_SDK_PC_OS_XBOXACHIEVEMENTSEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDDC9A0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxAchievementsExtension_TypeDefinitionIndex = 20770;

	class XboxAchievementsExtension : public ::System::Object
	{
	public:
		::Il2CppArray<::MiHoYo::SDK::PC::OS::XboxAchievementEntry*>* achievements; // 0x10
		::System::Int32 totalCount; // 0x18
		::System::Boolean hasNext; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXACHIEVEMENTSEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
