#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x8509A80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKDefine_TypeDefinitionIndex = 37096;

	class MiHoYoSDKDefine : public ::System::Object
	{
	public:
		// static const ::System::String* Version; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKDEFINE__CTOR_OFFSET))(this);
		}
	};
}
