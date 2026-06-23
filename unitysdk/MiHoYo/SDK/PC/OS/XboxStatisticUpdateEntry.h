#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXSTATISTICUPDATEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0DF5E0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxStatisticUpdateEntry_TypeDefinitionIndex = 20427;

	class XboxStatisticUpdateEntry : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::String* type; // 0x18
		::System::String* value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXSTATISTICUPDATEENTRY__CTOR_OFFSET))(this);
		}
	};
}
