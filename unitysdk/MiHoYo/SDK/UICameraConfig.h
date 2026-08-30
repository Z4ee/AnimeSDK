#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_UICAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB05DB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UICameraConfig_TypeDefinitionIndex = 7887;

	class UICameraConfig : public ::System::Object
	{
	public:
		::System::String* find_path; // 0x10
		::System::Int32 sorting_order; // 0x18
		::System::Int32 layer; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UICAMERACONFIG__CTOR_OFFSET))(this);
		}
	};
}
