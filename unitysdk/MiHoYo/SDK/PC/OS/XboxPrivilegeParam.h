#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PC_OS_XBOXPRIVILEGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5C1F90)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxPrivilegeParam_TypeDefinitionIndex = 20434;

	class XboxPrivilegeParam : public ::System::Object
	{
	public:
		::System::Int32 privilege; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXPRIVILEGEPARAM__CTOR_OFFSET))(this);
		}
	};
}
