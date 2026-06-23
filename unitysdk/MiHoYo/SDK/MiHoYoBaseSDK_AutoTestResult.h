#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOBASESDK_AUTOTESTRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA4A90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoBaseSDK_AutoTestResult_TypeDefinitionIndex = 36644;

	class MiHoYoBaseSDK_AutoTestResult : public ::System::Object
	{
	public:
		::System::String* m_strResponse; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_AUTOTESTRESULT__CTOR_OFFSET))(this);
		}
	};
}
