#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF5EA20)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE___C__DISPLAYCLASS11_0__GETCLIPBOARDDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1BF5EA30)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int CloudDataStorage___c__DisplayClass11_0_TypeDefinitionIndex = 20626;

	class CloudDataStorage___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetClipBoardData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE___C__DISPLAYCLASS11_0__GETCLIPBOARDDATA_B__0_OFFSET))(this);
		}
	};
}
