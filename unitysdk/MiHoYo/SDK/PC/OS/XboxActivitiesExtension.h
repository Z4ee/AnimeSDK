#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class XboxActivityInfo; }

#define MIHOYO_SDK_PC_OS_XBOXACTIVITIESEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAD2750)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxActivitiesExtension_TypeDefinitionIndex = 20778;

	class XboxActivitiesExtension : public ::System::Object
	{
	public:
		::Il2CppArray<::MiHoYo::SDK::PC::OS::XboxActivityInfo*>* activities; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXACTIVITIESEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
