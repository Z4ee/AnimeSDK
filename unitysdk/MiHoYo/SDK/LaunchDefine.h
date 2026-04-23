#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_LAUNCHDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x17571DF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LaunchDefine_TypeDefinitionIndex = 6633;

	class LaunchDefine : public ::System::Object
	{
	public:
		// static const ::System::String* GET_DISK_FREE_SPACE; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LAUNCHDEFINE__CTOR_OFFSET))(this);
		}
	};
}
