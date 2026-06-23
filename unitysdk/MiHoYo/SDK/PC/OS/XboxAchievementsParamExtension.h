#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXACHIEVEMENTSPARAMEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF78240)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxAchievementsParamExtension_TypeDefinitionIndex = 20416;

	class XboxAchievementsParamExtension : public ::System::Object
	{
	public:
		::System::Boolean unlockedOnly; // 0x10
		::System::Int32 maxItems; // 0x14
		::System::Int32 skipItems; // 0x18
		::System::String* achievementId; // 0x20
		::System::Int32 percentComplete; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXACHIEVEMENTSPARAMEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
