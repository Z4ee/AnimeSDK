#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }

#define MIHOYO_SDK_MIHOYOSDKCLIENTCONFIGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB2227C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKClientConfigModel_TypeDefinitionIndex = 46795;

	class MiHoYoSDKClientConfigModel : public ::System::Object
	{
	public:
		::System::Int32 emailBindRemindInterval; // 0x10
		::System::Boolean emailBindRemind; // 0x14
		::System::Boolean disableEmailBindSkip; // 0x15
		::System::Boolean noticePreloadDisable; // 0x16
		::System::Int32 reportLocalMaxCount; // 0x18
		::System::Int32 reportLocalDeletePercentage; // 0x1C
		::System::Boolean modifyRealNameOtherVerify; // 0x20

		::System::Void _ctor(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKCLIENTCONFIGMODEL__CTOR_OFFSET))(this, a1);
		}
	};
}
