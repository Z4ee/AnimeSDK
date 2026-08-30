#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXACHIEVEMENTUPDATEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE10C0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxAchievementUpdateExtension_TypeDefinitionIndex = 8618;

	class XboxAchievementUpdateExtension : public ::System::Object
	{
	public:
		::System::String* achievementId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXACHIEVEMENTUPDATEEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
