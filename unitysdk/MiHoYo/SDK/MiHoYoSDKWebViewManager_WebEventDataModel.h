#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_WEBEVENTDATAMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E530A90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager_WebEventDataModel_TypeDefinitionIndex = 37651;

	class MiHoYoSDKWebViewManager_WebEventDataModel : public ::System::Object
	{
	public:
		::System::Int32 num; // 0x10
		::System::Int32 type; // 0x14
		::System::Int32 exchange; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_WEBEVENTDATAMODEL__CTOR_OFFSET))(this);
		}
	};
}
