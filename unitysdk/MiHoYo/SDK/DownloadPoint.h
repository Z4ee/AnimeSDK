#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_DOWNLOADPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xB1CE820)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DownloadPoint_TypeDefinitionIndex = 46744;

	class DownloadPoint : public ::System::Object
	{
	public:
		::System::UInt64 time; // 0x10
		::System::UInt64 downloadSize; // 0x18

		::System::Void _ctor(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DOWNLOADPOINT__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
