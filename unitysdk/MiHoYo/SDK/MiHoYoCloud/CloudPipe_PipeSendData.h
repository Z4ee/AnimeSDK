#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_PIPESENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19911160)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int CloudPipe_PipeSendData_TypeDefinitionIndex = 8805;

	class CloudPipe_PipeSendData : public ::System::Object
	{
	public:
		::System::String* f; // 0x10
		::System::String* p; // 0x18
		::System::Int32 i; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_PIPESENDDATA__CTOR_OFFSET))(this);
		}
	};
}
