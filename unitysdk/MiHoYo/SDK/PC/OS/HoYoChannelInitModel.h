#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELINITMODEL_TOJSON_OFFSET UNITYSDK_OFFSET(0x18394130)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELINITMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1838DA00)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelInitModel_TypeDefinitionIndex = 8447;

	class HoYoChannelInitModel : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELINITMODEL__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELINITMODEL_TOJSON_OFFSET))(this);
		}
	};
}
