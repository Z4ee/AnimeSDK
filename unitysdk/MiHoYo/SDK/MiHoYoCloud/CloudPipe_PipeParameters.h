#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_PIPEPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD1280)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int CloudPipe_PipeParameters_TypeDefinitionIndex = 21228;

	class CloudPipe_PipeParameters : public ::System::Object
	{
	public:
		::System::String* f; // 0x10
		::System::String* p; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_PIPEPARAMETERS__CTOR_OFFSET))(this);
		}
	};
}
