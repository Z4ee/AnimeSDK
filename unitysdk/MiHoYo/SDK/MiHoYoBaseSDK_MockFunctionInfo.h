#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOBASESDK_MOCKFUNCTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD105F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoBaseSDK_MockFunctionInfo_TypeDefinitionIndex = 44524;

	class MiHoYoBaseSDK_MockFunctionInfo : public ::System::Object
	{
	public:
		::System::String* method; // 0x10
		::System::String* response; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_MOCKFUNCTIONINFO__CTOR_OFFSET))(this);
		}
	};
}
