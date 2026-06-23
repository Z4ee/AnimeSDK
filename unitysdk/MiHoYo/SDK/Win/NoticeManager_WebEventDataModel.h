#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_WIN_NOTICEMANAGER_WEBEVENTDATAMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9E2050)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int NoticeManager_WebEventDataModel_TypeDefinitionIndex = 21142;

	class NoticeManager_WebEventDataModel : public ::System::Object
	{
	public:
		::System::Int32 num; // 0x10
		::System::Int32 type; // 0x14
		::System::Int32 exchange; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_WEBEVENTDATAMODEL__CTOR_OFFSET))(this);
		}
	};
}
