#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class XboxLeaderboardRow; }

#define MIHOYO_SDK_PC_OS_XBOXLEADERBOARDEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA38E70)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxLeaderboardExtension_TypeDefinitionIndex = 8623;

	class XboxLeaderboardExtension : public ::System::Object
	{
	public:
		::System::Int32 totalRowCount; // 0x10
		::System::Boolean hasNext; // 0x14
		::Il2CppArray<::MiHoYo::SDK::PC::OS::XboxLeaderboardRow*>* rows; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXLEADERBOARDEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
