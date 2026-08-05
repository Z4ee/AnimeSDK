#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class NoticeManager_WebEventDataModel; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_NOTICEMANAGER_WEBEVENTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1EC00)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int NoticeManager_WebEventModel_TypeDefinitionIndex = 21489;

	class NoticeManager_WebEventModel : public ::System::Object
	{
	public:
		::System::String* game; // 0x10
		::System::String* type; // 0x18
		::System::Int64 time; // 0x20
		::MiHoYo::SDK::Win::NoticeManager_WebEventDataModel* data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_WEBEVENTMODEL__CTOR_OFFSET))(this);
		}
	};
}
