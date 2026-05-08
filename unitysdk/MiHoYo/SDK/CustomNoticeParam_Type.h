#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_CUSTOMNOTICEPARAM_TYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A17A6F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CustomNoticeParam_Type_TypeDefinitionIndex = 18452;

	class CustomNoticeParam_Type : public ::System::Object
	{
	public:
		// static const ::System::String* UGC; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CUSTOMNOTICEPARAM_TYPE__CTOR_OFFSET))(this);
		}
	};
}
