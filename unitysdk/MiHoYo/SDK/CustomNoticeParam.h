#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_CUSTOMNOTICEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED98A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CustomNoticeParam_TypeDefinitionIndex = 6595;

	class CustomNoticeParam : public ::System::Object
	{
	public:
		// static const ::System::String* TYPE; // 0x0
		// static const ::System::String* GAME_BIZ; // 0x0
		// static const ::System::String* GAME; // 0x0
		// static const ::System::String* BUNDLE_ID; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CUSTOMNOTICEPARAM__CTOR_OFFSET))(this);
		}
	};
}
